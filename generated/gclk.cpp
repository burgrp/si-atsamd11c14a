namespace target {
  namespace gclk {
    
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
      Generic Clock Control
    */
    namespace CLKCTRL {
      enum class ID {
        // DFLL48
        DFLL48 = 0x0,
        // FDPLL
        FDPLL = 0x1,
        // FDPLL32K
        FDPLL32K = 0x2,
        // WDT
        WDT = 0x3,
        // RTC
        RTC = 0x4,
        // EIC
        EIC = 0x5,
        // USB
        USB = 0x6,
        // EVSYS_0
        EVSYS_0 = 0x7,
        // EVSYS_1
        EVSYS_1 = 0x8,
        // EVSYS_2
        EVSYS_2 = 0x9,
        // EVSYS_3
        EVSYS_3 = 0xa,
        // EVSYS_4
        EVSYS_4 = 0xb,
        // EVSYS_5
        EVSYS_5 = 0xc,
        // SERCOMX_SLOW
        SERCOMX_SLOW = 0xd,
        // SERCOM0_CORE
        SERCOM0_CORE = 0xe,
        // SERCOM1_CORE
        SERCOM1_CORE = 0xf,
        // SERCOM2_CORE
        SERCOM2_CORE = 0x10,
        // TCC0
        TCC0 = 0x11,
        // TC1_TC2
        TC1_TC2 = 0x12,
        // ADC
        ADC = 0x13,
        // AC_DIG
        AC_DIG = 0x14,
        // AC_ANA
        AC_ANA = 0x15,
        // DAC
        DAC = 0x16,
      };
      
      enum class GEN {
        // Generic clock generator 0
        GCLK0 = 0x0,
        // Generic clock generator 1
        GCLK1 = 0x1,
        // Generic clock generator 2
        GCLK2 = 0x2,
        // Generic clock generator 3
        GCLK3 = 0x3,
        // Generic clock generator 4
        GCLK4 = 0x4,
        // Generic clock generator 5
        GCLK5 = 0x5,
      };
      
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
          Gets Generic Clock Selection ID
          @return enumeration value:
          target::gclk::CLKCTRL::ID::DFLL48 (0x0) DFLL48
          target::gclk::CLKCTRL::ID::FDPLL (0x1) FDPLL
          target::gclk::CLKCTRL::ID::FDPLL32K (0x2) FDPLL32K
          target::gclk::CLKCTRL::ID::WDT (0x3) WDT
          target::gclk::CLKCTRL::ID::RTC (0x4) RTC
          target::gclk::CLKCTRL::ID::EIC (0x5) EIC
          target::gclk::CLKCTRL::ID::USB (0x6) USB
          target::gclk::CLKCTRL::ID::EVSYS_0 (0x7) EVSYS_0
          target::gclk::CLKCTRL::ID::EVSYS_1 (0x8) EVSYS_1
          target::gclk::CLKCTRL::ID::EVSYS_2 (0x9) EVSYS_2
          target::gclk::CLKCTRL::ID::EVSYS_3 (0xa) EVSYS_3
          target::gclk::CLKCTRL::ID::EVSYS_4 (0xb) EVSYS_4
          target::gclk::CLKCTRL::ID::EVSYS_5 (0xc) EVSYS_5
          target::gclk::CLKCTRL::ID::SERCOMX_SLOW (0xd) SERCOMX_SLOW
          target::gclk::CLKCTRL::ID::SERCOM0_CORE (0xe) SERCOM0_CORE
          target::gclk::CLKCTRL::ID::SERCOM1_CORE (0xf) SERCOM1_CORE
          target::gclk::CLKCTRL::ID::SERCOM2_CORE (0x10) SERCOM2_CORE
          target::gclk::CLKCTRL::ID::TCC0 (0x11) TCC0
          target::gclk::CLKCTRL::ID::TC1_TC2 (0x12) TC1_TC2
          target::gclk::CLKCTRL::ID::ADC (0x13) ADC
          target::gclk::CLKCTRL::ID::AC_DIG (0x14) AC_DIG
          target::gclk::CLKCTRL::ID::AC_ANA (0x15) AC_ANA
          target::gclk::CLKCTRL::ID::DAC (0x16) DAC
        */
        __attribute__((always_inline)) target::gclk::CLKCTRL::ID getID() volatile {
          return static_cast<target::gclk::CLKCTRL::ID>((raw & (0x3F << 0)) >> 0);
        }
        /**
          Sets Generic Clock Selection ID
          @param value enumeration value:
          target::gclk::CLKCTRL::ID::DFLL48 (0x0) DFLL48
          target::gclk::CLKCTRL::ID::FDPLL (0x1) FDPLL
          target::gclk::CLKCTRL::ID::FDPLL32K (0x2) FDPLL32K
          target::gclk::CLKCTRL::ID::WDT (0x3) WDT
          target::gclk::CLKCTRL::ID::RTC (0x4) RTC
          target::gclk::CLKCTRL::ID::EIC (0x5) EIC
          target::gclk::CLKCTRL::ID::USB (0x6) USB
          target::gclk::CLKCTRL::ID::EVSYS_0 (0x7) EVSYS_0
          target::gclk::CLKCTRL::ID::EVSYS_1 (0x8) EVSYS_1
          target::gclk::CLKCTRL::ID::EVSYS_2 (0x9) EVSYS_2
          target::gclk::CLKCTRL::ID::EVSYS_3 (0xa) EVSYS_3
          target::gclk::CLKCTRL::ID::EVSYS_4 (0xb) EVSYS_4
          target::gclk::CLKCTRL::ID::EVSYS_5 (0xc) EVSYS_5
          target::gclk::CLKCTRL::ID::SERCOMX_SLOW (0xd) SERCOMX_SLOW
          target::gclk::CLKCTRL::ID::SERCOM0_CORE (0xe) SERCOM0_CORE
          target::gclk::CLKCTRL::ID::SERCOM1_CORE (0xf) SERCOM1_CORE
          target::gclk::CLKCTRL::ID::SERCOM2_CORE (0x10) SERCOM2_CORE
          target::gclk::CLKCTRL::ID::TCC0 (0x11) TCC0
          target::gclk::CLKCTRL::ID::TC1_TC2 (0x12) TC1_TC2
          target::gclk::CLKCTRL::ID::ADC (0x13) ADC
          target::gclk::CLKCTRL::ID::AC_DIG (0x14) AC_DIG
          target::gclk::CLKCTRL::ID::AC_ANA (0x15) AC_ANA
          target::gclk::CLKCTRL::ID::DAC (0x16) DAC
        */
        __attribute__((always_inline)) Register& setID(target::gclk::CLKCTRL::ID value) volatile {
          raw = (raw & ~(0x3F << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x3F << 0));
          return *(Register*)this;
        }
        /**
          Gets Generic Clock Generator
          @return enumeration value:
          target::gclk::CLKCTRL::GEN::GCLK0 (0x0) Generic clock generator 0
          target::gclk::CLKCTRL::GEN::GCLK1 (0x1) Generic clock generator 1
          target::gclk::CLKCTRL::GEN::GCLK2 (0x2) Generic clock generator 2
          target::gclk::CLKCTRL::GEN::GCLK3 (0x3) Generic clock generator 3
          target::gclk::CLKCTRL::GEN::GCLK4 (0x4) Generic clock generator 4
          target::gclk::CLKCTRL::GEN::GCLK5 (0x5) Generic clock generator 5
        */
        __attribute__((always_inline)) target::gclk::CLKCTRL::GEN getGEN() volatile {
          return static_cast<target::gclk::CLKCTRL::GEN>((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Generic Clock Generator
          @param value enumeration value:
          target::gclk::CLKCTRL::GEN::GCLK0 (0x0) Generic clock generator 0
          target::gclk::CLKCTRL::GEN::GCLK1 (0x1) Generic clock generator 1
          target::gclk::CLKCTRL::GEN::GCLK2 (0x2) Generic clock generator 2
          target::gclk::CLKCTRL::GEN::GCLK3 (0x3) Generic clock generator 3
          target::gclk::CLKCTRL::GEN::GCLK4 (0x4) Generic clock generator 4
          target::gclk::CLKCTRL::GEN::GCLK5 (0x5) Generic clock generator 5
        */
        __attribute__((always_inline)) Register& setGEN(target::gclk::CLKCTRL::GEN value) volatile {
          raw = (raw & ~(0xF << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCLKEN() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCLKEN(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Write Lock
          @return boolean value
        */
        __attribute__((always_inline)) bool getWRTLOCK() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Write Lock
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWRTLOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Generic Clock Generator Control
    */
    namespace GENCTRL {
      enum class SRC {
        // XOSC oscillator output
        XOSC = 0x0,
        // Generator input pad
        GCLKIN = 0x1,
        // Generic clock generator 1 output
        GCLKGEN1 = 0x2,
        // OSCULP32K oscillator output
        OSCULP32K = 0x3,
        // OSC32K oscillator output
        OSC32K = 0x4,
        // XOSC32K oscillator output
        XOSC32K = 0x5,
        // OSC8M oscillator output
        OSC8M = 0x6,
        // DFLL48M output
        DFLL48M = 0x7,
        // DPLL96M output
        DPLL96M = 0x8,
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
          Gets Generic Clock Generator Selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Generic Clock Generator Selection
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Source Select
          @return enumeration value:
          target::gclk::GENCTRL::SRC::XOSC (0x0) XOSC oscillator output
          target::gclk::GENCTRL::SRC::GCLKIN (0x1) Generator input pad
          target::gclk::GENCTRL::SRC::GCLKGEN1 (0x2) Generic clock generator 1 output
          target::gclk::GENCTRL::SRC::OSCULP32K (0x3) OSCULP32K oscillator output
          target::gclk::GENCTRL::SRC::OSC32K (0x4) OSC32K oscillator output
          target::gclk::GENCTRL::SRC::XOSC32K (0x5) XOSC32K oscillator output
          target::gclk::GENCTRL::SRC::OSC8M (0x6) OSC8M oscillator output
          target::gclk::GENCTRL::SRC::DFLL48M (0x7) DFLL48M output
          target::gclk::GENCTRL::SRC::DPLL96M (0x8) DPLL96M output
        */
        __attribute__((always_inline)) target::gclk::GENCTRL::SRC getSRC() volatile {
          return static_cast<target::gclk::GENCTRL::SRC>((raw & (0x1F << 8)) >> 8);
        }
        /**
          Sets Source Select
          @param value enumeration value:
          target::gclk::GENCTRL::SRC::XOSC (0x0) XOSC oscillator output
          target::gclk::GENCTRL::SRC::GCLKIN (0x1) Generator input pad
          target::gclk::GENCTRL::SRC::GCLKGEN1 (0x2) Generic clock generator 1 output
          target::gclk::GENCTRL::SRC::OSCULP32K (0x3) OSCULP32K oscillator output
          target::gclk::GENCTRL::SRC::OSC32K (0x4) OSC32K oscillator output
          target::gclk::GENCTRL::SRC::XOSC32K (0x5) XOSC32K oscillator output
          target::gclk::GENCTRL::SRC::OSC8M (0x6) OSC8M oscillator output
          target::gclk::GENCTRL::SRC::DFLL48M (0x7) DFLL48M output
          target::gclk::GENCTRL::SRC::DPLL96M (0x8) DPLL96M output
        */
        __attribute__((always_inline)) Register& setSRC(target::gclk::GENCTRL::SRC value) volatile {
          raw = (raw & ~(0x1F << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x1F << 8));
          return *(Register*)this;
        }
        /**
          Gets Generic Clock Generator Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getGENEN() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Generic Clock Generator Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setGENEN(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Improve Duty Cycle
          @return boolean value
        */
        __attribute__((always_inline)) bool getIDC() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets Improve Duty Cycle
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIDC(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets Output Off Value
          @return boolean value
        */
        __attribute__((always_inline)) bool getOOV() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Output Off Value
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOOV(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOE() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOE(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets Divide Selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIVSEL() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets Divide Selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIVSEL(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 21)) >> 21);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((((value)) << 21) & (0x1 << 21));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Generic Clock Generator Division
    */
    namespace GENDIV {
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
          Gets Generic Clock Generator Selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Generic Clock Generator Selection
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Division Factor
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDIV() volatile {
          return ((raw & (0xFFFF << 8)) >> 8);
        }
        /**
          Sets Division Factor
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setDIV(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 8)) | ((((value)) << 8) & (0xFFFF << 8));
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
          char _space_STATUS[0x1];
          /**
            Status
          */
          STATUS::Register STATUS;
        };
        struct {
          char _space_CLKCTRL[0x2];
          /**
            Generic Clock Control
          */
          CLKCTRL::Register CLKCTRL;
        };
        struct {
          char _space_GENCTRL[0x4];
          /**
            Generic Clock Generator Control
          */
          GENCTRL::Register GENCTRL;
        };
        struct {
          char _space_GENDIV[0x8];
          /**
            Generic Clock Generator Division
          */
          GENDIV::Register GENDIV;
        };
      };
    };
  }
  
  extern volatile gclk::Peripheral GCLK;
}