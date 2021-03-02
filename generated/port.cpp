namespace target {
  namespace port {
    
    /**
      Data Direction
    */
    namespace DIR {
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
          Gets Port Data Direction
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Direction
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setDIR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Direction Clear
    */
    namespace DIRCLR {
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
          Gets Port Data Direction Clear
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDIRCLR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Direction Clear
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setDIRCLR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Direction Set
    */
    namespace DIRSET {
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
          Gets Port Data Direction Set
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDIRSET() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Direction Set
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setDIRSET(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Direction Toggle
    */
    namespace DIRTGL {
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
          Gets Port Data Direction Toggle
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDIRTGL() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Direction Toggle
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setDIRTGL(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Output Value
    */
    namespace OUT {
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
          Gets Port Data Output Value
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOUT() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Output Value
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setOUT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Output Value Clear
    */
    namespace OUTCLR {
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
          Gets Port Data Output Value Clear
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOUTCLR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Output Value Clear
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setOUTCLR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Output Value Set
    */
    namespace OUTSET {
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
          Gets Port Data Output Value Set
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOUTSET() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Output Value Set
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setOUTSET(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Output Value Toggle
    */
    namespace OUTTGL {
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
          Gets Port Data Output Value Toggle
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOUTTGL() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Output Value Toggle
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setOUTTGL(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Data Input Value
    */
    namespace IN {
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
          Gets Port Data Input Value
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getIN() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Port Data Input Value
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setIN(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control
    */
    namespace CTRL {
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
          Gets Input Sampling Mode
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSAMPLING() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Input Sampling Mode
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setSAMPLING(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Write Configuration
    */
    namespace WRCONFIG {
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
          Gets Pin Mask for Multiple Pin Configuration
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getPINMASK() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Pin Mask for Multiple Pin Configuration
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setPINMASK(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Peripheral Multiplexer Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPMUXEN() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Peripheral Multiplexer Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPMUXEN(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Input Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getINEN() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets Input Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setINEN(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets Pull Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPULLEN() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Pull Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPULLEN(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets Output Driver Strength Selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getDRVSTR() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets Output Driver Strength Selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDRVSTR(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets Peripheral Multiplexing
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPMUX() volatile {
          return ((raw & (0xF << 24)) >> 24);
        }
        /**
          Sets Peripheral Multiplexing
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setPMUX(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((((value)) << 24) & (0xF << 24));
          return *(Register*)this;
        }
        /**
          Gets Write PMUX
          @return boolean value
        */
        __attribute__((always_inline)) bool getWRPMUX() volatile {
          return ((raw & (0x1 << 28)) >> 28);
        }
        /**
          Sets Write PMUX
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWRPMUX(bool value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
          return *(Register*)this;
        }
        /**
          Gets Write PINCFG
          @return boolean value
        */
        __attribute__((always_inline)) bool getWRPINCFG() volatile {
          return ((raw & (0x1 << 30)) >> 30);
        }
        /**
          Sets Write PINCFG
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWRPINCFG(bool value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
          return *(Register*)this;
        }
        /**
          Gets Half-Word Select
          @return boolean value
        */
        __attribute__((always_inline)) bool getHWSEL() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets Half-Word Select
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHWSEL(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Peripheral Multiplexing n - Group 0
    */
    namespace PMUX {
      enum class PMUXE {
        // Peripheral function A selected
        A = 0x0,
        // Peripheral function B selected
        B = 0x1,
        // Peripheral function C selected
        C = 0x2,
        // Peripheral function D selected
        D = 0x3,
        // Peripheral function E selected
        E = 0x4,
        // Peripheral function F selected
        F = 0x5,
        // Peripheral function G selected
        G = 0x6,
        // Peripheral function H selected
        H = 0x7,
      };
      
      enum class PMUXO {
        // Peripheral function A selected
        A = 0x0,
        // Peripheral function B selected
        B = 0x1,
        // Peripheral function C selected
        C = 0x2,
        // Peripheral function D selected
        D = 0x3,
        // Peripheral function E selected
        E = 0x4,
        // Peripheral function F selected
        F = 0x5,
        // Peripheral function G selected
        G = 0x6,
        // Peripheral function H selected
        H = 0x7,
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
          Gets Peripheral Multiplexing Even
          @return enumeration value:
          target::port::PMUX::PMUXE::A (0x0) Peripheral function A selected
          target::port::PMUX::PMUXE::B (0x1) Peripheral function B selected
          target::port::PMUX::PMUXE::C (0x2) Peripheral function C selected
          target::port::PMUX::PMUXE::D (0x3) Peripheral function D selected
          target::port::PMUX::PMUXE::E (0x4) Peripheral function E selected
          target::port::PMUX::PMUXE::F (0x5) Peripheral function F selected
          target::port::PMUX::PMUXE::G (0x6) Peripheral function G selected
          target::port::PMUX::PMUXE::H (0x7) Peripheral function H selected
        */
        __attribute__((always_inline)) target::port::PMUX::PMUXE getPMUXE() volatile {
          return static_cast<target::port::PMUX::PMUXE>((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Peripheral Multiplexing Even
          @param value enumeration value:
          target::port::PMUX::PMUXE::A (0x0) Peripheral function A selected
          target::port::PMUX::PMUXE::B (0x1) Peripheral function B selected
          target::port::PMUX::PMUXE::C (0x2) Peripheral function C selected
          target::port::PMUX::PMUXE::D (0x3) Peripheral function D selected
          target::port::PMUX::PMUXE::E (0x4) Peripheral function E selected
          target::port::PMUX::PMUXE::F (0x5) Peripheral function F selected
          target::port::PMUX::PMUXE::G (0x6) Peripheral function G selected
          target::port::PMUX::PMUXE::H (0x7) Peripheral function H selected
        */
        __attribute__((always_inline)) Register& setPMUXE(target::port::PMUX::PMUXE value) volatile {
          raw = (raw & ~(0xF << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Peripheral Multiplexing Odd
          @return enumeration value:
          target::port::PMUX::PMUXO::A (0x0) Peripheral function A selected
          target::port::PMUX::PMUXO::B (0x1) Peripheral function B selected
          target::port::PMUX::PMUXO::C (0x2) Peripheral function C selected
          target::port::PMUX::PMUXO::D (0x3) Peripheral function D selected
          target::port::PMUX::PMUXO::E (0x4) Peripheral function E selected
          target::port::PMUX::PMUXO::F (0x5) Peripheral function F selected
          target::port::PMUX::PMUXO::G (0x6) Peripheral function G selected
          target::port::PMUX::PMUXO::H (0x7) Peripheral function H selected
        */
        __attribute__((always_inline)) target::port::PMUX::PMUXO getPMUXO() volatile {
          return static_cast<target::port::PMUX::PMUXO>((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets Peripheral Multiplexing Odd
          @param value enumeration value:
          target::port::PMUX::PMUXO::A (0x0) Peripheral function A selected
          target::port::PMUX::PMUXO::B (0x1) Peripheral function B selected
          target::port::PMUX::PMUXO::C (0x2) Peripheral function C selected
          target::port::PMUX::PMUXO::D (0x3) Peripheral function D selected
          target::port::PMUX::PMUXO::E (0x4) Peripheral function E selected
          target::port::PMUX::PMUXO::F (0x5) Peripheral function F selected
          target::port::PMUX::PMUXO::G (0x6) Peripheral function G selected
          target::port::PMUX::PMUXO::H (0x7) Peripheral function H selected
        */
        __attribute__((always_inline)) Register& setPMUXO(target::port::PMUX::PMUXO value) volatile {
          raw = (raw & ~(0xF << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Pin Configuration n - Group 0
    */
    namespace PINCFG {
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
          Gets Peripheral Multiplexer Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPMUXEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Peripheral Multiplexer Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPMUXEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Input Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getINEN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Input Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setINEN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Pull Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPULLEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Pull Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPULLEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Output Driver Strength Selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getDRVSTR() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Output Driver Strength Selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDRVSTR(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Data Direction
          */
          DIR::Register DIR;
        };
        struct {
          char _space_DIRCLR[0x4];
          /**
            Data Direction Clear
          */
          DIRCLR::Register DIRCLR;
        };
        struct {
          char _space_DIRSET[0x8];
          /**
            Data Direction Set
          */
          DIRSET::Register DIRSET;
        };
        struct {
          char _space_DIRTGL[0xc];
          /**
            Data Direction Toggle
          */
          DIRTGL::Register DIRTGL;
        };
        struct {
          char _space_OUT[0x10];
          /**
            Data Output Value
          */
          OUT::Register OUT;
        };
        struct {
          char _space_OUTCLR[0x14];
          /**
            Data Output Value Clear
          */
          OUTCLR::Register OUTCLR;
        };
        struct {
          char _space_OUTSET[0x18];
          /**
            Data Output Value Set
          */
          OUTSET::Register OUTSET;
        };
        struct {
          char _space_OUTTGL[0x1c];
          /**
            Data Output Value Toggle
          */
          OUTTGL::Register OUTTGL;
        };
        struct {
          char _space_IN[0x20];
          /**
            Data Input Value
          */
          IN::Register IN;
        };
        struct {
          char _space_CTRL[0x24];
          /**
            Control
          */
          CTRL::Register CTRL;
        };
        struct {
          char _space_WRCONFIG[0x28];
          /**
            Write Configuration
          */
          WRCONFIG::Register WRCONFIG;
        };
        struct {
          char _space_PMUX[0x30];
          /**
            Peripheral Multiplexing n - Group 0
          */
          PMUX::Register PMUX[16];
        };
        struct {
          char _space_PINCFG[0x40];
          /**
            Pin Configuration n - Group 0
          */
          PINCFG::Register PINCFG[32];
        };
      };
    };
  }
  
  extern volatile port::Peripheral PORT;
  extern volatile port::Peripheral PORT_IOBUS;
}