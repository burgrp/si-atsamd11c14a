namespace target {
  namespace systick {
    namespace reg {
      
      /**
        SysTick Control and Status Register
      */
      class CSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Enable SysTick Timer
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Enable SysTick Timer
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Generate Tick Interrupt
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTICKINT() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Generate Tick Interrupt
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTICKINT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Source to count from
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCLKSOURCE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Source to count from
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCLKSOURCE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets SysTick counted to zero
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOUNTFLAG() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets SysTick counted to zero
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOUNTFLAG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
      };
      
      /**
        SysTick Reload Value Register
      */
      class RVR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Value to auto reload SysTick after reaching zero
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getRELOAD() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Value to auto reload SysTick after reaching zero
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setRELOAD(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        SysTick Current Value Register
      */
      class CVR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Current value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCURRENT() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Current value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setCURRENT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        SysTick Calibration Value Register
      */
      class CALIB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Reload value to use for 10ms timing
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getTENMS() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Reload value to use for 10ms timing
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setTENMS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
        /**
          Gets Clock Skew
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSKEW() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Clock Skew
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSKEW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets No Ref
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNOREF() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets No Ref
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNOREF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
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
          volatile reg::CSR CSR;
        };
        struct {
          volatile char _space_RVR[0x4];
          /**
            SysTick Reload Value Register
          */
          volatile reg::RVR RVR;
        };
        struct {
          volatile char _space_CVR[0x8];
          /**
            SysTick Current Value Register
          */
          volatile reg::CVR CVR;
        };
        struct {
          volatile char _space_CALIB[0xc];
          /**
            SysTick Calibration Value Register
          */
          volatile reg::CALIB CALIB;
        };
      };
    };
  }
  
  extern systick::Peripheral SYSTICK;
}