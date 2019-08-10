namespace target {
  namespace dac {
    namespace reg {
      
      /**
        Control A
      */
      class CTRLA {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Software Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWRST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Software Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Control B
      */
      class CTRLB {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets External Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Internal Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Internal Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Left Adjusted Data
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLEFTADJ() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Left Adjusted Data
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLEFTADJ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Voltage Pump Disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVPD() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Voltage Pump Disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVPD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Bypass DATABUF Write Protection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBDWP() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Bypass DATABUF Write Protection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBDWP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Reference Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getREFSEL() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets Reference Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setREFSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
      };
      
      /**
        Event Control
      */
      class EVCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Start Conversion Event Input
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTARTEI() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Start Conversion Event Input
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTARTEI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Data Buffer Empty Event Output
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEMPTYEO() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Data Buffer Empty Event Output
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEMPTYEO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        Interrupt Enable Clear
      */
      class INTENCLR {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Underrun Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUNDERRUN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Underrun Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUNDERRUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Data Buffer Empty Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEMPTY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Data Buffer Empty Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEMPTY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Synchronization Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Synchronization Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Interrupt Enable Set
      */
      class INTENSET {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Underrun Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUNDERRUN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Underrun Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUNDERRUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Data Buffer Empty Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEMPTY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Data Buffer Empty Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEMPTY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Synchronization Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Synchronization Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Interrupt Flag Status and Clear
      */
      class INTFLAG {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Underrun
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUNDERRUN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Underrun
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUNDERRUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Data Buffer Empty
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEMPTY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Data Buffer Empty
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEMPTY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Synchronization Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Synchronization Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Status
      */
      class STATUS {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Synchronization Busy Status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCBUSY() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Synchronization Busy Status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Data
      */
      class DATA {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data value to be converted
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Data value to be converted
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        Data Buffer
      */
      class DATABUF {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data Buffer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDATABUF() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Data Buffer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDATABUF(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
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
          volatile reg::CTRLA CTRLA;
        };
        struct {
          volatile char _space_CTRLB[0x1];
          /**
            Control B
          */
          volatile reg::CTRLB CTRLB;
        };
        struct {
          volatile char _space_EVCTRL[0x2];
          /**
            Event Control
          */
          volatile reg::EVCTRL EVCTRL;
        };
        struct {
          volatile char _space_INTENCLR[0x4];
          /**
            Interrupt Enable Clear
          */
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0x5];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x6];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
        struct {
          volatile char _space_STATUS[0x7];
          /**
            Status
          */
          volatile reg::STATUS STATUS;
        };
        struct {
          volatile char _space_DATA[0x8];
          /**
            Data
          */
          volatile reg::DATA DATA;
        };
        struct {
          volatile char _space_DATABUF[0xc];
          /**
            Data Buffer
          */
          volatile reg::DATABUF DATABUF;
        };
      };
    };
  }
  
  extern dac::Peripheral DAC;
}