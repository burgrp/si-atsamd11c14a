namespace target {
  namespace hmatrixb {
    namespace reg {
      
      /**
        Priority A for Slave
      */
      class PRAS {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Master 0 Priority
          @param index in range 0..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getM_PR(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0));
        }
        /**
          Sets Master 0 Priority
          @param index in range 0..7
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setM_PR(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 0)))) | ((value << (0 + 4 * (index - 0))) & (0xF << (0 + 4 * (index - 0))));
        }
        /**
          Gets Master 0 Priority
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getM_PR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Master 0 Priority
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setM_PR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Priority B for Slave
      */
      class PRBS {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Master 8 Priority
          @param index in range 8..15
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getM_PR(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 8)))) >> (0 + 4 * (index - 8));
        }
        /**
          Sets Master 8 Priority
          @param index in range 8..15
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setM_PR(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 8)))) | ((value << (0 + 4 * (index - 8))) & (0xF << (0 + 4 * (index - 8))));
        }
        /**
          Gets Master 8 Priority
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getM_PR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Master 8 Priority
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setM_PR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Special Function
      */
      class SFR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Special Function Register
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSFR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Special Function Register
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setSFR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          volatile char _space_PRAS[0x80];
          /**
            Priority A for Slave
          */
          struct {
            volatile reg::PRAS reg;
            volatile char _space[4];
          } PRAS[16];
        };
        struct {
          volatile char _space_PRBS[0x84];
          /**
            Priority B for Slave
          */
          struct {
            volatile reg::PRBS reg;
            volatile char _space[4];
          } PRBS[16];
        };
        struct {
          volatile char _space_SFR[0x110];
          /**
            Special Function
          */
          volatile reg::SFR SFR[16];
        };
      };
    };
  }
  
  extern hmatrixb::Peripheral HMATRIX;
}