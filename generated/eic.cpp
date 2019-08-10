namespace target {
  namespace eic {
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
        Non-Maskable Interrupt Control
      */
      class NMICTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Non-Maskable Interrupt Sense
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getNMISENSE() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Non-Maskable Interrupt Sense
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setNMISENSE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets Non-Maskable Interrupt Filter Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNMIFILTEN() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Non-Maskable Interrupt Filter Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNMIFILTEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
      };
      
      /**
        Non-Maskable Interrupt Flag Status and Clear
      */
      class NMIFLAG {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Non-Maskable Interrupt
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNMI() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Non-Maskable Interrupt
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNMI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Event Control
      */
      class EVCTRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External Interrupt 0 Event Output Enable
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEXTINTEO(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets External Interrupt 0 Event Output Enable
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEXTINTEO(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets External Interrupt 0 Event Output Enable
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getEXTINTEO() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets External Interrupt 0 Event Output Enable
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setEXTINTEO(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Interrupt Enable Clear
      */
      class INTENCLR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External Interrupt 0 Enable
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEXTINT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets External Interrupt 0 Enable
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEXTINT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets External Interrupt 0 Enable
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getEXTINT() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets External Interrupt 0 Enable
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setEXTINT(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Interrupt Enable Set
      */
      class INTENSET {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External Interrupt 0 Enable
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEXTINT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets External Interrupt 0 Enable
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEXTINT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets External Interrupt 0 Enable
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getEXTINT() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets External Interrupt 0 Enable
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setEXTINT(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Interrupt Flag Status and Clear
      */
      class INTFLAG {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External Interrupt 0
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEXTINT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets External Interrupt 0
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEXTINT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets External Interrupt 0
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getEXTINT() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets External Interrupt 0
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setEXTINT(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Wake-Up Enable
      */
      class WAKEUP {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External Interrupt 0 Wake-up Enable
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWAKEUPEN(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets External Interrupt 0 Wake-up Enable
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWAKEUPEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets External Interrupt 0 Wake-up Enable
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getWAKEUPEN() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets External Interrupt 0 Wake-up Enable
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setWAKEUPEN(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Configuration n
      */
      class CONFIG {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Input Sense 0 Configuration
          @param index in range 0..7
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSENSE(int index) volatile {
          return (raw & (0x7 << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0));
        }
        /**
          Sets Input Sense 0 Configuration
          @param index in range 0..7
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setSENSE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (0 + 4 * (index - 0)))) | ((value << (0 + 4 * (index - 0))) & (0x7 << (0 + 4 * (index - 0))));
        }
        /**
          Gets Input Sense 0 Configuration
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getSENSE() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Input Sense 0 Configuration
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setSENSE(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
        /**
          Gets Filter 0 Enable
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFILTEN(int index) volatile {
          return (raw & (0x1 << (3 + 4 * (index - 0)))) >> (3 + 4 * (index - 0));
        }
        /**
          Sets Filter 0 Enable
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFILTEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 0)))) | ((value << (3 + 4 * (index - 0))) & (0x1 << (3 + 4 * (index - 0))));
        }
        /**
          Gets Filter 0 Enable
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getFILTEN() volatile {
          return (raw & (0xFF << 3)) >> 3;
        }
        /**
          Sets Filter 0 Enable
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setFILTEN(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 3)) | ((value << 3) & (0xFF << 3));
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
          volatile char _space_NMICTRL[0x2];
          /**
            Non-Maskable Interrupt Control
          */
          volatile reg::NMICTRL NMICTRL;
        };
        struct {
          volatile char _space_NMIFLAG[0x3];
          /**
            Non-Maskable Interrupt Flag Status and Clear
          */
          volatile reg::NMIFLAG NMIFLAG;
        };
        struct {
          volatile char _space_EVCTRL[0x4];
          /**
            Event Control
          */
          volatile reg::EVCTRL EVCTRL;
        };
        struct {
          volatile char _space_INTENCLR[0x8];
          /**
            Interrupt Enable Clear
          */
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0xc];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x10];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
        struct {
          volatile char _space_WAKEUP[0x14];
          /**
            Wake-Up Enable
          */
          volatile reg::WAKEUP WAKEUP;
        };
        struct {
          volatile char _space_CONFIG[0x18];
          /**
            Configuration n
          */
          volatile reg::CONFIG CONFIG;
        };
      };
    };
  }
  
  extern eic::Peripheral EIC;
}