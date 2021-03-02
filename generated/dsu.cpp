namespace target {
  namespace dsu {
    
    /**
      Control
    */
    namespace CTRL {
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
          Gets 32-bit Cyclic Redundancy Code
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRC() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets 32-bit Cyclic Redundancy Code
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRC(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Memory built-in self-test
          @return boolean value
        */
        __attribute__((always_inline)) bool getMBIST() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Memory built-in self-test
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMBIST(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Chip-Erase
          @return boolean value
        */
        __attribute__((always_inline)) bool getCE() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Chip-Erase
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCE(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Auxiliary Row Read
          @return boolean value
        */
        __attribute__((always_inline)) bool getARR() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Auxiliary Row Read
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setARR(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Start Memory Stream Access
          @return boolean value
        */
        __attribute__((always_inline)) bool getSMSA() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Start Memory Stream Access
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSMSA(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Status A
    */
    namespace STATUSA {
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
          Gets Done
          @return boolean value
        */
        __attribute__((always_inline)) bool getDONE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Done
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDONE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets CPU Reset Phase Extension
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRSTEXT() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets CPU Reset Phase Extension
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRSTEXT(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Bus Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getBERR() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Bus Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBERR(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Failure
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAIL() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Failure
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAIL(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Protection Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getPERR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Protection Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPERR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Status B
    */
    namespace STATUSB {
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
          Gets Debug Communication Channel 0 Dirty
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getDCCD(int index) volatile {
          return ((raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0)));
        }
        /**
          Sets Debug Communication Channel 0 Dirty
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDCCD(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((((value)) << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Protected
          @return boolean value
        */
        __attribute__((always_inline)) bool getPROT() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Protected
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPROT(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Debugger Present
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBGPRES() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Debugger Present
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBGPRES(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Hot-Plugging Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHPE() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Hot-Plugging Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHPE(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Address
    */
    namespace ADDR {
      class Register {
        volatile unsigned long raw;
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
          Gets Access Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getAMOD() volatile {
          return ((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Access Mode
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setAMOD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((((value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets Address
          @return value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long getADDR() volatile {
          return ((raw & (0x3FFFFFFF << 2)) >> 2);
        }
        /**
          Sets Address
          @param value value in range 0..1073741823
        */
        __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFFFFF << 2)) | ((((value)) << 2) & (0x3FFFFFFF << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Length
    */
    namespace LENGTH {
      class Register {
        volatile unsigned long raw;
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
          Gets Length
          @return value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long getLENGTH() volatile {
          return ((raw & (0x3FFFFFFF << 2)) >> 2);
        }
        /**
          Sets Length
          @param value value in range 0..1073741823
        */
        __attribute__((always_inline)) Register& setLENGTH(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFFFFF << 2)) | ((((value)) << 2) & (0x3FFFFFFF << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data
    */
    namespace DATA {
      class Register {
        volatile unsigned long raw;
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
          Gets Data
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Data
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Debug Communication Channel n
    */
    namespace DCC {
      class Register {
        volatile unsigned long raw;
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
          Gets Data
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Data
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Device Identification
    */
    namespace DID {
      enum class SERIES {
        // Cortex-M0+ processor, basic feature set
        CORTEX_M0_PROCESSOR_BASIC_FEATURE_SET = 0x0,
        // Cortex-M0+ processor, USB
        CORTEX_M0_PROCESSOR_USB = 0x1,
      };
      
      enum class FAMILY {
        // General purpose microcontroller
        GENERAL_PURPOSE_MICROCONTROLLER = 0x0,
        // PicoPower
        PICOPOWER = 0x1,
      };
      
      enum class PROCESSOR {
        // Cortex-M0
        CORTEX_M0 = 0x0,
        // Cortex-M0+
        CORTEX_M0_ = 0x1,
        // Cortex-M3
        CORTEX_M3 = 0x2,
        // Cortex-M4
        CORTEX_M4 = 0x3,
      };
      
      class Register {
        volatile unsigned long raw;
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
          Gets Device Select
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDEVSEL() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Device Select
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setDEVSEL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Revision Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getREVISION() volatile {
          return ((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Revision Number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setREVISION(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((((value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets Die Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDIE() volatile {
          return ((raw & (0xF << 12)) >> 12);
        }
        /**
          Sets Die Number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDIE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((((value)) << 12) & (0xF << 12));
          return *(Register*)this;
        }
        /**
          Gets Series
          @return enumeration value:
          target::dsu::DID::SERIES::CORTEX_M0_PROCESSOR_BASIC_FEATURE_SET (0x0) Cortex-M0+ processor, basic feature set
          target::dsu::DID::SERIES::CORTEX_M0_PROCESSOR_USB (0x1) Cortex-M0+ processor, USB
        */
        __attribute__((always_inline)) target::dsu::DID::SERIES getSERIES() volatile {
          return static_cast<target::dsu::DID::SERIES>((raw & (0x3F << 16)) >> 16);
        }
        /**
          Sets Series
          @param value enumeration value:
          target::dsu::DID::SERIES::CORTEX_M0_PROCESSOR_BASIC_FEATURE_SET (0x0) Cortex-M0+ processor, basic feature set
          target::dsu::DID::SERIES::CORTEX_M0_PROCESSOR_USB (0x1) Cortex-M0+ processor, USB
        */
        __attribute__((always_inline)) Register& setSERIES(target::dsu::DID::SERIES value) volatile {
          raw = (raw & ~(0x3F << 16)) | (((static_cast<unsigned long>(value)) << 16) & (0x3F << 16));
          return *(Register*)this;
        }
        /**
          Gets Family
          @return enumeration value:
          target::dsu::DID::FAMILY::GENERAL_PURPOSE_MICROCONTROLLER (0x0) General purpose microcontroller
          target::dsu::DID::FAMILY::PICOPOWER (0x1) PicoPower
        */
        __attribute__((always_inline)) target::dsu::DID::FAMILY getFAMILY() volatile {
          return static_cast<target::dsu::DID::FAMILY>((raw & (0x1F << 23)) >> 23);
        }
        /**
          Sets Family
          @param value enumeration value:
          target::dsu::DID::FAMILY::GENERAL_PURPOSE_MICROCONTROLLER (0x0) General purpose microcontroller
          target::dsu::DID::FAMILY::PICOPOWER (0x1) PicoPower
        */
        __attribute__((always_inline)) Register& setFAMILY(target::dsu::DID::FAMILY value) volatile {
          raw = (raw & ~(0x1F << 23)) | (((static_cast<unsigned long>(value)) << 23) & (0x1F << 23));
          return *(Register*)this;
        }
        /**
          Gets Processor
          @return enumeration value:
          target::dsu::DID::PROCESSOR::CORTEX_M0 (0x0) Cortex-M0
          target::dsu::DID::PROCESSOR::CORTEX_M0_ (0x1) Cortex-M0+
          target::dsu::DID::PROCESSOR::CORTEX_M3 (0x2) Cortex-M3
          target::dsu::DID::PROCESSOR::CORTEX_M4 (0x3) Cortex-M4
        */
        __attribute__((always_inline)) target::dsu::DID::PROCESSOR getPROCESSOR() volatile {
          return static_cast<target::dsu::DID::PROCESSOR>((raw & (0xF << 28)) >> 28);
        }
        /**
          Sets Processor
          @param value enumeration value:
          target::dsu::DID::PROCESSOR::CORTEX_M0 (0x0) Cortex-M0
          target::dsu::DID::PROCESSOR::CORTEX_M0_ (0x1) Cortex-M0+
          target::dsu::DID::PROCESSOR::CORTEX_M3 (0x2) Cortex-M3
          target::dsu::DID::PROCESSOR::CORTEX_M4 (0x3) Cortex-M4
        */
        __attribute__((always_inline)) Register& setPROCESSOR(target::dsu::DID::PROCESSOR value) volatile {
          raw = (raw & ~(0xF << 28)) | (((static_cast<unsigned long>(value)) << 28) & (0xF << 28));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Device Configuration
    */
    namespace DCFG {
      class Register {
        volatile unsigned long raw;
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
          Gets Device Configuration
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDCFG() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Device Configuration
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setDCFG(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CoreSight ROM Table Entry 0
    */
    namespace ENTRY0 {
      class Register {
        volatile unsigned long raw;
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
          Gets Entry Present
          @return boolean value
        */
        __attribute__((always_inline)) bool getEPRES() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Entry Present
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEPRES(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Format
          @return boolean value
        */
        __attribute__((always_inline)) bool getFMT() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Format
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFMT(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Address Offset
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getADDOFF() volatile {
          return ((raw & (0xFFFFF << 12)) >> 12);
        }
        /**
          Sets Address Offset
          @param value value in range 0..1048575
        */
        __attribute__((always_inline)) Register& setADDOFF(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 12)) | ((((value)) << 12) & (0xFFFFF << 12));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CoreSight ROM Table Entry 1
    */
    namespace ENTRY1 {
      class Register {
        volatile unsigned long raw;
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
      };
    };
    
    /**
      CoreSight ROM Table End
    */
    namespace END {
      class Register {
        volatile unsigned long raw;
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
          Gets End Marker
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getEND() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets End Marker
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CoreSight ROM Table Memory Type
    */
    namespace MEMTYPE {
      class Register {
        volatile unsigned long raw;
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
          Gets System Memory Present
          @return boolean value
        */
        __attribute__((always_inline)) bool getSMEMP() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets System Memory Present
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSMEMP(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Peripheral Identification 4
    */
    namespace PID4 {
      class Register {
        volatile unsigned long raw;
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
          Gets JEP-106 Continuation Code
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getJEPCC() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets JEP-106 Continuation Code
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setJEPCC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets 4KB count
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getFKBC() volatile {
          return ((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets 4KB count
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setFKBC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((((value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Peripheral Identification 5
    */
    namespace PID5 {
      class Register {
        volatile unsigned long raw;
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
      };
    };
    
    /**
      Peripheral Identification 6
    */
    namespace PID6 {
      class Register {
        volatile unsigned long raw;
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
      };
    };
    
    /**
      Peripheral Identification 7
    */
    namespace PID7 {
      class Register {
        volatile unsigned long raw;
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
      };
    };
    
    /**
      Peripheral Identification 0
    */
    namespace PID0 {
      class Register {
        volatile unsigned long raw;
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
          Gets Part Number Low
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPARTNBL() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Part Number Low
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPARTNBL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Peripheral Identification 1
    */
    namespace PID1 {
      class Register {
        volatile unsigned long raw;
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
          Gets Part Number High
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPARTNBH() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Part Number High
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setPARTNBH(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Low part of the JEP-106 Identity Code
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getJEPIDCL() volatile {
          return ((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets Low part of the JEP-106 Identity Code
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setJEPIDCL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((((value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Peripheral Identification 2
    */
    namespace PID2 {
      class Register {
        volatile unsigned long raw;
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
          Gets JEP-106 Identity Code High
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getJEPIDCH() volatile {
          return ((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets JEP-106 Identity Code High
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setJEPIDCH(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets JEP-106 Identity Code is used
          @return boolean value
        */
        __attribute__((always_inline)) bool getJEPU() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets JEP-106 Identity Code is used
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setJEPU(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Revision Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getREVISION() volatile {
          return ((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets Revision Number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setREVISION(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((((value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Peripheral Identification 3
    */
    namespace PID3 {
      class Register {
        volatile unsigned long raw;
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
          Gets ARM CUSMOD
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCUSMOD() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets ARM CUSMOD
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setCUSMOD(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Revision Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getREVAND() volatile {
          return ((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets Revision Number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setREVAND(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((((value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Component Identification 0
    */
    namespace CID0 {
      class Register {
        volatile unsigned long raw;
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
          Gets Preamble Byte 0
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPREAMBLEB0() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Preamble Byte 0
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPREAMBLEB0(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Component Identification 1
    */
    namespace CID1 {
      class Register {
        volatile unsigned long raw;
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
          Gets Preamble
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPREAMBLE() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Preamble
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setPREAMBLE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Component Class
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCCLASS() volatile {
          return ((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets Component Class
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setCCLASS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((((value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Component Identification 2
    */
    namespace CID2 {
      class Register {
        volatile unsigned long raw;
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
          Gets Preamble Byte 2
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPREAMBLEB2() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Preamble Byte 2
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPREAMBLEB2(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Component Identification 3
    */
    namespace CID3 {
      class Register {
        volatile unsigned long raw;
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
          Gets Preamble Byte 3
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPREAMBLEB3() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Preamble Byte 3
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPREAMBLEB3(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Control
          */
          CTRL::Register CTRL;
        };
        struct {
          char _space_STATUSA[0x1];
          /**
            Status A
          */
          STATUSA::Register STATUSA;
        };
        struct {
          char _space_STATUSB[0x2];
          /**
            Status B
          */
          STATUSB::Register STATUSB;
        };
        struct {
          char _space_ADDR[0x4];
          /**
            Address
          */
          ADDR::Register ADDR;
        };
        struct {
          char _space_LENGTH[0x8];
          /**
            Length
          */
          LENGTH::Register LENGTH;
        };
        struct {
          char _space_DATA[0xc];
          /**
            Data
          */
          DATA::Register DATA;
        };
        struct {
          char _space_DCC[0x10];
          /**
            Debug Communication Channel n
          */
          DCC::Register DCC[2];
        };
        struct {
          char _space_DID[0x18];
          /**
            Device Identification
          */
          DID::Register DID;
        };
        struct {
          char _space_DCFG[0xf0];
          /**
            Device Configuration
          */
          DCFG::Register DCFG[2];
        };
        struct {
          char _space_ENTRY0[0x1000];
          /**
            CoreSight ROM Table Entry 0
          */
          ENTRY0::Register ENTRY0;
        };
        struct {
          char _space_ENTRY1[0x1004];
          /**
            CoreSight ROM Table Entry 1
          */
          ENTRY1::Register ENTRY1;
        };
        struct {
          char _space_END[0x1008];
          /**
            CoreSight ROM Table End
          */
          END::Register END;
        };
        struct {
          char _space_MEMTYPE[0x1fcc];
          /**
            CoreSight ROM Table Memory Type
          */
          MEMTYPE::Register MEMTYPE;
        };
        struct {
          char _space_PID4[0x1fd0];
          /**
            Peripheral Identification 4
          */
          PID4::Register PID4;
        };
        struct {
          char _space_PID5[0x1fd4];
          /**
            Peripheral Identification 5
          */
          PID5::Register PID5;
        };
        struct {
          char _space_PID6[0x1fd8];
          /**
            Peripheral Identification 6
          */
          PID6::Register PID6;
        };
        struct {
          char _space_PID7[0x1fdc];
          /**
            Peripheral Identification 7
          */
          PID7::Register PID7;
        };
        struct {
          char _space_PID0[0x1fe0];
          /**
            Peripheral Identification 0
          */
          PID0::Register PID0;
        };
        struct {
          char _space_PID1[0x1fe4];
          /**
            Peripheral Identification 1
          */
          PID1::Register PID1;
        };
        struct {
          char _space_PID2[0x1fe8];
          /**
            Peripheral Identification 2
          */
          PID2::Register PID2;
        };
        struct {
          char _space_PID3[0x1fec];
          /**
            Peripheral Identification 3
          */
          PID3::Register PID3;
        };
        struct {
          char _space_CID0[0x1ff0];
          /**
            Component Identification 0
          */
          CID0::Register CID0;
        };
        struct {
          char _space_CID1[0x1ff4];
          /**
            Component Identification 1
          */
          CID1::Register CID1;
        };
        struct {
          char _space_CID2[0x1ff8];
          /**
            Component Identification 2
          */
          CID2::Register CID2;
        };
        struct {
          char _space_CID3[0x1ffc];
          /**
            Component Identification 3
          */
          CID3::Register CID3;
        };
      };
    };
  }
  
  extern volatile dsu::Peripheral DSU;
}