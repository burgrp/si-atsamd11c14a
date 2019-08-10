namespace target {
  namespace port {
    namespace reg {
      
      /**
        Data Direction
      */
      class DIR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Direction
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Direction
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Data Direction Clear
      */
      class DIRCLR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Direction Clear
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDIRCLR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Direction Clear
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDIRCLR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Data Direction Set
      */
      class DIRSET {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Direction Set
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDIRSET() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Direction Set
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDIRSET(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Data Direction Toggle
      */
      class DIRTGL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Direction Toggle
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDIRTGL() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Direction Toggle
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDIRTGL(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Data Output Value
      */
      class OUT {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Output Value
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOUT() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Output Value
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setOUT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Data Output Value Clear
      */
      class OUTCLR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Output Value Clear
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOUTCLR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Output Value Clear
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setOUTCLR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Data Output Value Set
      */
      class OUTSET {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Output Value Set
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOUTSET() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Output Value Set
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setOUTSET(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Data Output Value Toggle
      */
      class OUTTGL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Output Value Toggle
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOUTTGL() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Output Value Toggle
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setOUTTGL(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Data Input Value
      */
      class IN {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port Data Input Value
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getIN() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Port Data Input Value
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setIN(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Control
      */
      class CTRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Input Sampling Mode
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSAMPLING() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Input Sampling Mode
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setSAMPLING(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Write Configuration
      */
      class WRCONFIG {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Pin Mask for Multiple Pin Configuration
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getPINMASK() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Pin Mask for Multiple Pin Configuration
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setPINMASK(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
        /**
          Gets Peripheral Multiplexer Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPMUXEN() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Peripheral Multiplexer Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPMUXEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Input Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINEN() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Input Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Pull Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPULLEN() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Pull Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPULLEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets Output Driver Strength Selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDRVSTR() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets Output Driver Strength Selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDRVSTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Peripheral Multiplexing
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPMUX() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Peripheral Multiplexing
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPMUX(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Write PMUX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRPMUX() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Write PMUX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRPMUX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets Write PINCFG
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRPINCFG() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Write PINCFG
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRPINCFG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets Half-Word Select
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHWSEL() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Half-Word Select
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHWSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        Peripheral Multiplexing n - Group 0
      */
      class PMUX {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral Multiplexing Even
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPMUXE() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Peripheral Multiplexing Even
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPMUXE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Peripheral Multiplexing Odd
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPMUXO() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets Peripheral Multiplexing Odd
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPMUXO(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
      };
      
      /**
        Pin Configuration n - Group 0
      */
      class PINCFG {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral Multiplexer Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPMUXEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Peripheral Multiplexer Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPMUXEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Input Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Input Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Pull Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPULLEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Pull Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPULLEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Output Driver Strength Selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDRVSTR() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Output Driver Strength Selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDRVSTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Data Direction
          */
          volatile reg::DIR DIR;
        };
        struct {
          volatile char _space_DIRCLR[0x4];
          /**
            Data Direction Clear
          */
          volatile reg::DIRCLR DIRCLR;
        };
        struct {
          volatile char _space_DIRSET[0x8];
          /**
            Data Direction Set
          */
          volatile reg::DIRSET DIRSET;
        };
        struct {
          volatile char _space_DIRTGL[0xc];
          /**
            Data Direction Toggle
          */
          volatile reg::DIRTGL DIRTGL;
        };
        struct {
          volatile char _space_OUT[0x10];
          /**
            Data Output Value
          */
          volatile reg::OUT OUT;
        };
        struct {
          volatile char _space_OUTCLR[0x14];
          /**
            Data Output Value Clear
          */
          volatile reg::OUTCLR OUTCLR;
        };
        struct {
          volatile char _space_OUTSET[0x18];
          /**
            Data Output Value Set
          */
          volatile reg::OUTSET OUTSET;
        };
        struct {
          volatile char _space_OUTTGL[0x1c];
          /**
            Data Output Value Toggle
          */
          volatile reg::OUTTGL OUTTGL;
        };
        struct {
          volatile char _space_IN[0x20];
          /**
            Data Input Value
          */
          volatile reg::IN IN;
        };
        struct {
          volatile char _space_CTRL[0x24];
          /**
            Control
          */
          volatile reg::CTRL CTRL;
        };
        struct {
          volatile char _space_WRCONFIG[0x28];
          /**
            Write Configuration
          */
          volatile reg::WRCONFIG WRCONFIG;
        };
        struct {
          volatile char _space_PMUX[0x30];
          /**
            Peripheral Multiplexing n - Group 0
          */
          volatile reg::PMUX PMUX[16];
        };
        struct {
          volatile char _space_PINCFG[0x40];
          /**
            Pin Configuration n - Group 0
          */
          volatile reg::PINCFG PINCFG[32];
        };
      };
    };
  }
  
  extern port::Peripheral PORT;
  extern port::Peripheral PORT_IOBUS;
}