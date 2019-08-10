namespace target {
  namespace evsys {
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
          Gets Generic Clock Requests
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getGCLKREQ() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Generic Clock Requests
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setGCLKREQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        Channel
      */
      class CHANNEL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel Selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCHANNEL() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Channel Selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCHANNEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets Software Event
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWEVT() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Software Event
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWEVT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Event Generator Selection
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getEVGEN() volatile {
          return (raw & (0x3F << 16)) >> 16;
        }
        /**
          Sets Event Generator Selection
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setEVGEN(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 16)) | ((value << 16) & (0x3F << 16));
        }
        /**
          Gets Path Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPATH() volatile {
          return (raw & (0x3 << 24)) >> 24;
        }
        /**
          Sets Path Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPATH(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 24)) | ((value << 24) & (0x3 << 24));
        }
        /**
          Gets Edge Detection Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEDGSEL() volatile {
          return (raw & (0x3 << 26)) >> 26;
        }
        /**
          Sets Edge Detection Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEDGSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 26)) | ((value << 26) & (0x3 << 26));
        }
      };
      
      /**
        User Multiplexer
      */
      class USER {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets User Multiplexer Selection
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getUSER() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets User Multiplexer Selection
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setUSER(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
        /**
          Gets Channel Event Selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCHANNEL() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Channel Event Selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCHANNEL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
      };
      
      /**
        Channel Status
      */
      class CHSTATUS {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel 0 User Ready
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSRRDY(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 User Ready
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSRRDY(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 User Ready
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getUSRRDY() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Channel 0 User Ready
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setUSRRDY(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Channel 0 Busy
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCHBUSY(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Busy
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCHBUSY(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Busy
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCHBUSY() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets Channel 0 Busy
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setCHBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
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
          Gets Channel 0 Overrun Interrupt Enable
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Overrun Interrupt Enable
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Overrun Interrupt Enable
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getOVR() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Channel 0 Overrun Interrupt Enable
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setOVR(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Channel 0 Event Detection Interrupt Enable
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEVD(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Event Detection Interrupt Enable
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEVD(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Event Detection Interrupt Enable
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getEVD() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets Channel 0 Event Detection Interrupt Enable
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setEVD(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
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
          Gets Channel 0 Overrun Interrupt Enable
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Overrun Interrupt Enable
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Overrun Interrupt Enable
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getOVR() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Channel 0 Overrun Interrupt Enable
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setOVR(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Channel 0 Event Detection Interrupt Enable
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEVD(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Event Detection Interrupt Enable
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEVD(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Event Detection Interrupt Enable
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getEVD() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets Channel 0 Event Detection Interrupt Enable
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setEVD(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
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
          Gets Channel 0 Overrun
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Overrun
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Overrun
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getOVR() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Channel 0 Overrun
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setOVR(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Channel 0 Event Detection
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEVD(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Event Detection
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEVD(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Event Detection
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getEVD() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets Channel 0 Event Detection
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setEVD(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
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
          volatile char _space_CHANNEL[0x4];
          /**
            Channel
          */
          volatile reg::CHANNEL CHANNEL;
        };
        struct {
          volatile char _space_USER[0x8];
          /**
            User Multiplexer
          */
          volatile reg::USER USER;
        };
        struct {
          volatile char _space_CHSTATUS[0xc];
          /**
            Channel Status
          */
          volatile reg::CHSTATUS CHSTATUS;
        };
        struct {
          volatile char _space_INTENCLR[0x10];
          /**
            Interrupt Enable Clear
          */
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0x14];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x18];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
      };
    };
  }
  
  extern evsys::Peripheral EVSYS;
}