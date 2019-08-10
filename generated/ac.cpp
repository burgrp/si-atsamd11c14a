namespace target {
  namespace ac {
    namespace reg {
      
      /**
        Control A
      */
      class CTRLA {
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
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Low-Power Mux
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPMUX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Low-Power Mux
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPMUX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Control B
      */
      class CTRLB {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Comparator 0 Start Comparison
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTART(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0 Start Comparison
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTART(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0 Start Comparison
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTART() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 0 Start Comparison
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTART(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
      };
      
      /**
        Event Control
      */
      class EVCTRL {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Comparator 0 Event Output Enable
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMPEO(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0 Event Output Enable
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMPEO(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0 Event Output Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMPEO() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 0 Event Output Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMPEO(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Comparator 0 Event Input
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMPEI(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0 Event Input
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMPEI(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0 Event Input
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMPEI() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Comparator 0 Event Input
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMPEI(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Window 0 Event Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWINEO0() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Window 0 Event Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWINEO0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
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
          Gets Comparator 0 Interrupt Enable
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0 Interrupt Enable
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0 Interrupt Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 0 Interrupt Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Window 0 Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWIN0() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Window 0 Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWIN0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
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
          Gets Comparator 0 Interrupt Enable
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0 Interrupt Enable
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0 Interrupt Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 0 Interrupt Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Window 0 Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWIN0() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Window 0 Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWIN0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
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
          Gets Comparator 0
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 0
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Window 0
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWIN0() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Window 0
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWIN0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        Status A
      */
      class STATUSA {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Comparator 0 Current State
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTATE(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0 Current State
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTATE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0 Current State
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTATE() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 0 Current State
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTATE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Window 0 Current State
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWSTATE0() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Window 0 Current State
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setWSTATE0(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
      };
      
      /**
        Status B
      */
      class STATUSB {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Comparator 0 Ready
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREADY(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0 Ready
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREADY(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0 Ready
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getREADY() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 0 Ready
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setREADY(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
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
        Status C
      */
      class STATUSC {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Comparator 0 Current State
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTATE(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Comparator 0 Current State
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTATE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Comparator 0 Current State
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTATE() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 0 Current State
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTATE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Window 0 Current State
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWSTATE0() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Window 0 Current State
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setWSTATE0(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
      };
      
      /**
        Window Control
      */
      class WINCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Window 0 Mode Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWEN0() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Window 0 Mode Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWEN0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Window 0 Interrupt Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWINTSEL0() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Window 0 Interrupt Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setWINTSEL0(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
        }
      };
      
      /**
        Comparator Control n
      */
      class COMPCTRL {
        volatile unsigned long raw;
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
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Single-Shot Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSINGLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Single-Shot Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSINGLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Speed Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSPEED() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets Speed Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSPEED(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets Interrupt Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getINTSEL() volatile {
          return (raw & (0x3 << 5)) >> 5;
        }
        /**
          Sets Interrupt Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setINTSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
        }
        /**
          Gets Negative Input Mux Selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMUXNEG() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Negative Input Mux Selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMUXNEG(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Positive Input Mux Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMUXPOS() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Positive Input Mux Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMUXPOS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Swap Inputs and Invert
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWAP() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Swap Inputs and Invert
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWAP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Output
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOUT() volatile {
          return (raw & (0x3 << 16)) >> 16;
        }
        /**
          Sets Output
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOUT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 16)) | ((value << 16) & (0x3 << 16));
        }
        /**
          Gets Hysteresis Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHYST() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Hysteresis Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHYST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets Filter Length
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getFLEN() volatile {
          return (raw & (0x7 << 24)) >> 24;
        }
        /**
          Sets Filter Length
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setFLEN(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 24)) | ((value << 24) & (0x7 << 24));
        }
      };
      
      /**
        Scaler n
      */
      class SCALER {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Scaler Value
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getVALUE() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Scaler Value
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setVALUE(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Control A
          */
          volatile reg::CTRLA CTRLA;
        };
        struct {
          volatile char _space_CTRLB[0x1];
          /**
            Control B
          */
          volatile reg::CTRLB CTRLB;
        };
        struct {
          volatile char _space_EVCTRL[0x2];
          /**
            Event Control
          */
          volatile reg::EVCTRL EVCTRL;
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
          volatile char _space_STATUSA[0x8];
          /**
            Status A
          */
          volatile reg::STATUSA STATUSA;
        };
        struct {
          volatile char _space_STATUSB[0x9];
          /**
            Status B
          */
          volatile reg::STATUSB STATUSB;
        };
        struct {
          volatile char _space_STATUSC[0xa];
          /**
            Status C
          */
          volatile reg::STATUSC STATUSC;
        };
        struct {
          volatile char _space_WINCTRL[0xc];
          /**
            Window Control
          */
          volatile reg::WINCTRL WINCTRL;
        };
        struct {
          volatile char _space_COMPCTRL[0x10];
          /**
            Comparator Control n
          */
          volatile reg::COMPCTRL COMPCTRL[2];
        };
        struct {
          volatile char _space_SCALER[0x20];
          /**
            Scaler n
          */
          volatile reg::SCALER SCALER[2];
        };
      };
    };
  }
  
  extern ac::Peripheral AC;
}