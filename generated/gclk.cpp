namespace target {
  namespace gclk {
    namespace reg {
      
      /**
        Control
      */
      class CTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Software Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWRST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Software Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Status
      */
      class STATUS {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Synchronization Busy Status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCBUSY() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Synchronization Busy Status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Generic Clock Control
      */
      class CLKCTRL {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Generic Clock Selection ID
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Generic Clock Selection ID
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setID(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Generic Clock Generator
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getGEN() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Generic Clock Generator
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setGEN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCLKEN() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCLKEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Write Lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRTLOCK() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Write Lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRTLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        Generic Clock Generator Control
      */
      class GENCTRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Generic Clock Generator Selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Generic Clock Generator Selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Source Select
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getSRC() volatile {
          return (raw & (0x1F << 8)) >> 8;
        }
        /**
          Sets Source Select
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setSRC(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((value << 8) & (0x1F << 8));
        }
        /**
          Gets Generic Clock Generator Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getGENEN() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Generic Clock Generator Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setGENEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Improve Duty Cycle
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDC() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Improve Duty Cycle
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Output Off Value
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOOV() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Output Off Value
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOOV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOE() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets Divide Selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIVSEL() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets Divide Selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIVSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
      };
      
      /**
        Generic Clock Generator Division
      */
      class GENDIV {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Generic Clock Generator Selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Generic Clock Generator Selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Division Factor
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDIV() volatile {
          return (raw & (0xFFFF << 8)) >> 8;
        }
        /**
          Sets Division Factor
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDIV(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 8)) | ((value << 8) & (0xFFFF << 8));
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
          volatile reg::CTRL CTRL;
        };
        struct {
          volatile char _space_STATUS[0x1];
          /**
            Status
          */
          volatile reg::STATUS STATUS;
        };
        struct {
          volatile char _space_CLKCTRL[0x2];
          /**
            Generic Clock Control
          */
          volatile reg::CLKCTRL CLKCTRL;
        };
        struct {
          volatile char _space_GENCTRL[0x4];
          /**
            Generic Clock Generator Control
          */
          volatile reg::GENCTRL GENCTRL;
        };
        struct {
          volatile char _space_GENDIV[0x8];
          /**
            Generic Clock Generator Division
          */
          volatile reg::GENDIV GENDIV;
        };
      };
    };
  }
  
  extern gclk::Peripheral GCLK;
}