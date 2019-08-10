namespace target {
  namespace pac {
    namespace reg {
      
      /**
        Write Protection Clear
      */
      class WPCLR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Write Protection Clear
          @return value in range 0..2147483647
        */
        __attribute__((always_inline)) unsigned long getWP() volatile {
          return (raw & (0x7FFFFFFF << 1)) >> 1;
        }
        /**
          Sets Write Protection Clear
          @param value in range 0..2147483647
        */
        __attribute__((always_inline)) unsigned long setWP(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFFFF << 1)) | ((value << 1) & (0x7FFFFFFF << 1));
        }
      };
      
      /**
        Write Protection Set
      */
      class WPSET {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Write Protection Set
          @return value in range 0..2147483647
        */
        __attribute__((always_inline)) unsigned long getWP() volatile {
          return (raw & (0x7FFFFFFF << 1)) >> 1;
        }
        /**
          Sets Write Protection Set
          @param value in range 0..2147483647
        */
        __attribute__((always_inline)) unsigned long setWP(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFFFF << 1)) | ((value << 1) & (0x7FFFFFFF << 1));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Write Protection Clear
          */
          volatile reg::WPCLR WPCLR;
        };
        struct {
          volatile char _space_WPSET[0x4];
          /**
            Write Protection Set
          */
          volatile reg::WPSET WPSET;
        };
      };
    };
  }
  
  extern pac::Peripheral PAC0;
  extern pac::Peripheral PAC1;
  extern pac::Peripheral PAC2;
}