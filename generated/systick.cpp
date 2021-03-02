namespace target {
  namespace systick {
    
    /**
      SysTick Control and Status Register
    */
    namespace CSR {
      enum class ENABLE {
        // disabled
        DISABLED = 0,
        // enabled
        ENABLED = 1,
      };
      
      enum class TICKINT {
        // Enable SysTick Exception
        ENABLE_SYSTICK_EXCEPTION = 0,
        // Disable SysTick Exception
        DISABLE_SYSTICK_EXCEPTION = 1,
      };
      
      enum class CLKSOURCE {
        // External Clock
        EXTERNAL_CLOCK = 0,
        // CPU Clock
        CPU_CLOCK = 1,
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
          Gets Enable SysTick Timer
          @return enumeration value:
          target::systick::CSR::ENABLE::DISABLED (0) disabled
          target::systick::CSR::ENABLE::ENABLED (1) enabled
        */
        __attribute__((always_inline)) target::systick::CSR::ENABLE getENABLE() volatile {
          return static_cast<target::systick::CSR::ENABLE>((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Enable SysTick Timer
          @param value enumeration value:
          target::systick::CSR::ENABLE::DISABLED (0) disabled
          target::systick::CSR::ENABLE::ENABLED (1) enabled
        */
        __attribute__((always_inline)) Register& setENABLE(target::systick::CSR::ENABLE value) volatile {
          raw = (raw & ~(0x1 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Generate Tick Interrupt
          @return enumeration value:
          target::systick::CSR::TICKINT::ENABLE_SYSTICK_EXCEPTION (0) Enable SysTick Exception
          target::systick::CSR::TICKINT::DISABLE_SYSTICK_EXCEPTION (1) Disable SysTick Exception
        */
        __attribute__((always_inline)) target::systick::CSR::TICKINT getTICKINT() volatile {
          return static_cast<target::systick::CSR::TICKINT>((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Generate Tick Interrupt
          @param value enumeration value:
          target::systick::CSR::TICKINT::ENABLE_SYSTICK_EXCEPTION (0) Enable SysTick Exception
          target::systick::CSR::TICKINT::DISABLE_SYSTICK_EXCEPTION (1) Disable SysTick Exception
        */
        __attribute__((always_inline)) Register& setTICKINT(target::systick::CSR::TICKINT value) volatile {
          raw = (raw & ~(0x1 << 1)) | (((static_cast<unsigned long>(value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Source to count from
          @return enumeration value:
          target::systick::CSR::CLKSOURCE::EXTERNAL_CLOCK (0) External Clock
          target::systick::CSR::CLKSOURCE::CPU_CLOCK (1) CPU Clock
        */
        __attribute__((always_inline)) target::systick::CSR::CLKSOURCE getCLKSOURCE() volatile {
          return static_cast<target::systick::CSR::CLKSOURCE>((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Source to count from
          @param value enumeration value:
          target::systick::CSR::CLKSOURCE::EXTERNAL_CLOCK (0) External Clock
          target::systick::CSR::CLKSOURCE::CPU_CLOCK (1) CPU Clock
        */
        __attribute__((always_inline)) Register& setCLKSOURCE(target::systick::CSR::CLKSOURCE value) volatile {
          raw = (raw & ~(0x1 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets SysTick counted to zero
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOUNTFLAG() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets SysTick counted to zero
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOUNTFLAG(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      SysTick Reload Value Register
    */
    namespace RVR {
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
          Gets Value to auto reload SysTick after reaching zero
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getRELOAD() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Value to auto reload SysTick after reaching zero
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setRELOAD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      SysTick Current Value Register
    */
    namespace CVR {
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
          Gets Current value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCURRENT() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Current value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setCURRENT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      SysTick Calibration Value Register
    */
    namespace CALIB {
      enum class SKEW {
        // 10ms calibration value is exact
        _10MS_CALIBRATION_VALUE_IS_EXACT = 0,
        // 10ms calibration value is inexact, because of the clock frequency
        _10MS_CALIBRATION_VALUE_IS_INEXACT_BECAUSE_OF_THE_CLOCK_FREQUENCY = 1,
      };
      
      enum class NOREF {
        // Ref Clk available
        REF_CLK_AVAILABLE = 0,
        // Ref Clk not available
        REF_CLK_NOT_AVAILABLE = 1,
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
          Gets Reload value to use for 10ms timing
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getTENMS() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Reload value to use for 10ms timing
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setTENMS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Clock Skew
          @return enumeration value:
          target::systick::CALIB::SKEW::_10MS_CALIBRATION_VALUE_IS_EXACT (0) 10ms calibration value is exact
          target::systick::CALIB::SKEW::_10MS_CALIBRATION_VALUE_IS_INEXACT_BECAUSE_OF_THE_CLOCK_FREQUENCY (1) 10ms calibration value is inexact, because of the clock frequency
        */
        __attribute__((always_inline)) target::systick::CALIB::SKEW getSKEW() volatile {
          return static_cast<target::systick::CALIB::SKEW>((raw & (0x1 << 30)) >> 30);
        }
        /**
          Sets Clock Skew
          @param value enumeration value:
          target::systick::CALIB::SKEW::_10MS_CALIBRATION_VALUE_IS_EXACT (0) 10ms calibration value is exact
          target::systick::CALIB::SKEW::_10MS_CALIBRATION_VALUE_IS_INEXACT_BECAUSE_OF_THE_CLOCK_FREQUENCY (1) 10ms calibration value is inexact, because of the clock frequency
        */
        __attribute__((always_inline)) Register& setSKEW(target::systick::CALIB::SKEW value) volatile {
          raw = (raw & ~(0x1 << 30)) | (((static_cast<unsigned long>(value)) << 30) & (0x1 << 30));
          return *(Register*)this;
        }
        /**
          Gets No Ref
          @return enumeration value:
          target::systick::CALIB::NOREF::REF_CLK_AVAILABLE (0) Ref Clk available
          target::systick::CALIB::NOREF::REF_CLK_NOT_AVAILABLE (1) Ref Clk not available
        */
        __attribute__((always_inline)) target::systick::CALIB::NOREF getNOREF() volatile {
          return static_cast<target::systick::CALIB::NOREF>((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets No Ref
          @param value enumeration value:
          target::systick::CALIB::NOREF::REF_CLK_AVAILABLE (0) Ref Clk available
          target::systick::CALIB::NOREF::REF_CLK_NOT_AVAILABLE (1) Ref Clk not available
        */
        __attribute__((always_inline)) Register& setNOREF(target::systick::CALIB::NOREF value) volatile {
          raw = (raw & ~(0x1 << 31)) | (((static_cast<unsigned long>(value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            SysTick Control and Status Register
          */
          CSR::Register CSR;
        };
        struct {
          char _space_RVR[0x4];
          /**
            SysTick Reload Value Register
          */
          RVR::Register RVR;
        };
        struct {
          char _space_CVR[0x8];
          /**
            SysTick Current Value Register
          */
          CVR::Register CVR;
        };
        struct {
          char _space_CALIB[0xc];
          /**
            SysTick Calibration Value Register
          */
          CALIB::Register CALIB;
        };
      };
    };
  }
  
  extern volatile systick::Peripheral SYSTICK;
}