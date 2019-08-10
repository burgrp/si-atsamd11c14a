namespace target {
  namespace wdt {
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
          Gets Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Watchdog Timer Window Mode Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Watchdog Timer Window Mode Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Always-On
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALWAYSON() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Always-On
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALWAYSON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Configuration
      */
      class CONFIG {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Time-Out Period
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Time-Out Period
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Window Mode Time-Out Period
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getWINDOW() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets Window Mode Time-Out Period
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setWINDOW(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
      };
      
      /**
        Early Warning Interrupt Control
      */
      class EWCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Early Warning Interrupt Time Offset
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEWOFFSET() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Early Warning Interrupt Time Offset
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEWOFFSET(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        Interrupt Enable Clear
      */
      class INTENCLR {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Early Warning Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEW() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Early Warning Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Interrupt Enable Set
      */
      class INTENSET {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Early Warning Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEW() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Early Warning Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Interrupt Flag Status and Clear
      */
      class INTFLAG {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Early Warning
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEW() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Early Warning
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEW(unsigned long value) volatile {
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
          Gets Synchronization Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCBUSY() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Synchronization Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Clear
      */
      class CLEAR {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Watchdog Clear
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getCLEAR() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Watchdog Clear
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setCLEAR(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
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
          volatile char _space_CONFIG[0x1];
          /**
            Configuration
          */
          volatile reg::CONFIG CONFIG;
        };
        struct {
          volatile char _space_EWCTRL[0x2];
          /**
            Early Warning Interrupt Control
          */
          volatile reg::EWCTRL EWCTRL;
        };
        struct {
          volatile char _space_INTENCLR[0x4];
          /**
            Interrupt Enable Clear
          */
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0x5];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x6];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
        struct {
          volatile char _space_STATUS[0x7];
          /**
            Status
          */
          volatile reg::STATUS STATUS;
        };
        struct {
          volatile char _space_CLEAR[0x8];
          /**
            Clear
          */
          volatile reg::CLEAR CLEAR;
        };
      };
    };
  }
  
  extern wdt::Peripheral WDT;
}