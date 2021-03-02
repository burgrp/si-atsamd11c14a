namespace target {
  namespace hmatrixb {
    
    /**
      Priority A for Slave
    */
    namespace PRAS {
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
          Gets Master 0 Priority
          @param index in range 0..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getM_PR(int index) volatile {
          return ((raw & (0xF << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0)));
        }
        /**
          Sets Master 0 Priority
          @param index in range 0..7
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setM_PR(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 0)))) | ((((value)) << (0 + 4 * (index - 0))) & (0xF << (0 + 4 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Priority B for Slave
    */
    namespace PRBS {
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
          Gets Master 8 Priority
          @param index in range 8..15
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getM_PR(int index) volatile {
          return ((raw & (0xF << (0 + 4 * (index - 8)))) >> (0 + 4 * (index - 8)));
        }
        /**
          Sets Master 8 Priority
          @param index in range 8..15
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setM_PR(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 8)))) | ((((value)) << (0 + 4 * (index - 8))) & (0xF << (0 + 4 * (index - 8))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Special Function
    */
    namespace SFR {
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
          Gets Special Function Register
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSFR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Special Function Register
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setSFR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          char _space_PRAS[0x80];
          /**
            Priority A for Slave
          */
          struct {
            PRAS::Register reg;
            char _space[4];
          } PRAS[16];
        };
        struct {
          char _space_PRBS[0x84];
          /**
            Priority B for Slave
          */
          struct {
            PRBS::Register reg;
            char _space[4];
          } PRBS[16];
        };
        struct {
          char _space_SFR[0x110];
          /**
            Special Function
          */
          SFR::Register SFR[16];
        };
      };
    };
  }
  
  extern volatile hmatrixb::Peripheral HMATRIX;
}