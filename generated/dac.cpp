namespace target {
  namespace dac {
    
    /**
      Control A
    */
    namespace CTRLA {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Software Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWRST() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Software Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control B
    */
    namespace CTRLB {
      enum class REFSEL {
        // Internal 1.0V reference
        INT1V = 0x0,
        // AVCC
        AVCC = 0x1,
        // External reference
        VREFP = 0x2,
      };
      
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets External Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets External Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Internal Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOEN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Internal Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOEN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Left Adjusted Data
          @return boolean value
        */
        __attribute__((always_inline)) bool getLEFTADJ() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Left Adjusted Data
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLEFTADJ(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Voltage Pump Disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getVPD() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Voltage Pump Disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setVPD(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Bypass DATABUF Write Protection
          @return boolean value
        */
        __attribute__((always_inline)) bool getBDWP() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Bypass DATABUF Write Protection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBDWP(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Reference Selection
          @return enumeration value:
          target::dac::CTRLB::REFSEL::INT1V (0x0) Internal 1.0V reference
          target::dac::CTRLB::REFSEL::AVCC (0x1) AVCC
          target::dac::CTRLB::REFSEL::VREFP (0x2) External reference
        */
        __attribute__((always_inline)) target::dac::CTRLB::REFSEL getREFSEL() volatile {
          return static_cast<target::dac::CTRLB::REFSEL>((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets Reference Selection
          @param value enumeration value:
          target::dac::CTRLB::REFSEL::INT1V (0x0) Internal 1.0V reference
          target::dac::CTRLB::REFSEL::AVCC (0x1) AVCC
          target::dac::CTRLB::REFSEL::VREFP (0x2) External reference
        */
        __attribute__((always_inline)) Register& setREFSEL(target::dac::CTRLB::REFSEL value) volatile {
          raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Event Control
    */
    namespace EVCTRL {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Start Conversion Event Input
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTARTEI() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Start Conversion Event Input
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTARTEI(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Data Buffer Empty Event Output
          @return boolean value
        */
        __attribute__((always_inline)) bool getEMPTYEO() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Data Buffer Empty Event Output
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEMPTYEO(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Enable Clear
    */
    namespace INTENCLR {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Underrun Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUNDERRUN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Underrun Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUNDERRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Data Buffer Empty Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEMPTY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Data Buffer Empty Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEMPTY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Synchronization Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYNCRDY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Synchronization Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Enable Set
    */
    namespace INTENSET {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Underrun Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUNDERRUN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Underrun Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUNDERRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Data Buffer Empty Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEMPTY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Data Buffer Empty Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEMPTY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Synchronization Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYNCRDY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Synchronization Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Flag Status and Clear
    */
    namespace INTFLAG {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Underrun
          @return boolean value
        */
        __attribute__((always_inline)) bool getUNDERRUN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Underrun
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUNDERRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Data Buffer Empty
          @return boolean value
        */
        __attribute__((always_inline)) bool getEMPTY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Data Buffer Empty
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEMPTY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Synchronization Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYNCRDY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Synchronization Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Status
    */
    namespace STATUS {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Synchronization Busy Status
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYNCBUSY() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Synchronization Busy Status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYNCBUSY(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data
    */
    namespace DATA {
      class Register {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Data value to be converted
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Data value to be converted
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Buffer
    */
    namespace DATABUF {
      class Register {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Data Buffer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDATABUF() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Data Buffer
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setDATABUF(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Control A
          */
          CTRLA::Register CTRLA;
        };
        struct {
          char _space_CTRLB[0x1];
          /**
            Control B
          */
          CTRLB::Register CTRLB;
        };
        struct {
          char _space_EVCTRL[0x2];
          /**
            Event Control
          */
          EVCTRL::Register EVCTRL;
        };
        struct {
          char _space_INTENCLR[0x4];
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0x5];
          /**
            Interrupt Enable Set
          */
          INTENSET::Register INTENSET;
        };
        struct {
          char _space_INTFLAG[0x6];
          /**
            Interrupt Flag Status and Clear
          */
          INTFLAG::Register INTFLAG;
        };
        struct {
          char _space_STATUS[0x7];
          /**
            Status
          */
          STATUS::Register STATUS;
        };
        struct {
          char _space_DATA[0x8];
          /**
            Data
          */
          DATA::Register DATA;
        };
        struct {
          char _space_DATABUF[0xc];
          /**
            Data Buffer
          */
          DATABUF::Register DATABUF;
        };
      };
    };
  }
  
  extern volatile dac::Peripheral DAC;
}