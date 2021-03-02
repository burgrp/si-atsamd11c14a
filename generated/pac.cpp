namespace target {
  namespace pac {
    
    /**
      Write Protection Clear
    */
    namespace WPCLR {
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
          Gets Write Protection Clear
          @return value in range 0..2147483647
        */
        __attribute__((always_inline)) unsigned long getWP() volatile {
          return ((raw & (0x7FFFFFFF << 1)) >> 1);
        }
        /**
          Sets Write Protection Clear
          @param value value in range 0..2147483647
        */
        __attribute__((always_inline)) Register& setWP(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFFFF << 1)) | ((((value)) << 1) & (0x7FFFFFFF << 1));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Write Protection Set
    */
    namespace WPSET {
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
          Gets Write Protection Set
          @return value in range 0..2147483647
        */
        __attribute__((always_inline)) unsigned long getWP() volatile {
          return ((raw & (0x7FFFFFFF << 1)) >> 1);
        }
        /**
          Sets Write Protection Set
          @param value value in range 0..2147483647
        */
        __attribute__((always_inline)) Register& setWP(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFFFFF << 1)) | ((((value)) << 1) & (0x7FFFFFFF << 1));
          return *(Register*)this;
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
          WPCLR::Register WPCLR;
        };
        struct {
          char _space_WPSET[0x4];
          /**
            Write Protection Set
          */
          WPSET::Register WPSET;
        };
      };
    };
  }
  
  extern volatile pac::Peripheral PAC0;
  extern volatile pac::Peripheral PAC1;
  extern volatile pac::Peripheral PAC2;
}