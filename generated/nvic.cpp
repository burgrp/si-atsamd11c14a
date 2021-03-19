namespace target {
  namespace nvic {
    
    /**
      Interrupt Set Enable Register
    */
    namespace ISER {
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
          Gets SETENA
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSETENA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets SETENA
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setSETENA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Clear Enable Register
    */
    namespace ICER {
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
          Gets CLRENA
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCLRENA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets CLRENA
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setCLRENA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Set-Pending Register
    */
    namespace ISPR {
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
          Gets SETPEND
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSETPEND() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets SETPEND
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setSETPEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Clear-Pending Register
    */
    namespace ICPR {
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
          Gets CLRPEND
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCLRPEND() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets CLRPEND
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setCLRPEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register
    */
    namespace IPR {
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
          Gets PRI0
          @param index in range 0..3
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI(int index) volatile {
          return ((raw & (0x3 << (6 + 8 * (index - 0)))) >> (6 + 8 * (index - 0)));
        }
        /**
          Sets PRI0
          @param index in range 0..3
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (6 + 8 * (index - 0)))) | ((((value)) << (6 + 8 * (index - 0))) & (0x3 << (6 + 8 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Interrupt Set Enable Register
          */
          ISER::Register ISER;
        };
        struct {
          char _space_ICER[0x80];
          /**
            Interrupt Clear Enable Register
          */
          ICER::Register ICER;
        };
        struct {
          char _space_ISPR[0x100];
          /**
            Interrupt Set-Pending Register
          */
          ISPR::Register ISPR;
        };
        struct {
          char _space_ICPR[0x180];
          /**
            Interrupt Clear-Pending Register
          */
          ICPR::Register ICPR;
        };
        struct {
          char _space_IPR[0x300];
          /**
            Interrupt Priority Register
          */
          IPR::Register IPR[8];
        };
      };
    };
  }
  
  extern volatile nvic::Peripheral NVIC;
}