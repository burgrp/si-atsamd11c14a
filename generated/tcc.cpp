namespace target {
  namespace tcc {
    namespace reg {
      
      /**
        Control A
      */
      class CTRLA {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture Channel 0 Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCPTEN(int index) volatile {
          return (raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0));
        }
        /**
          Sets Capture Channel 0 Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCPTEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((value << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
        }
        /**
          Gets Capture Channel 0 Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCPTEN() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Capture Channel 0 Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCPTEN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
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
          Gets Enhanced Resolution
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRESOLUTION() volatile {
          return (raw & (0x3 << 5)) >> 5;
        }
        /**
          Sets Enhanced Resolution
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRESOLUTION(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
        }
        /**
          Gets Prescaler
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPRESCALER() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Prescaler
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPRESCALER(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Prescaler and Counter Synchronization Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRESCSYNC() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Prescaler and Counter Synchronization Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRESCSYNC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Auto Lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALOCK() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Auto Lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        Control B Clear
      */
      class CTRLBCLR {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter Direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Counter Direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Lock Update
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLUPD() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Lock Update
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLUPD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets One-Shot
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getONESHOT() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets One-Shot
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setONESHOT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Ramp Index Command
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getIDXCMD() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Ramp Index Command
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setIDXCMD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets TCC Command
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCMD() volatile {
          return (raw & (0x7 << 5)) >> 5;
        }
        /**
          Sets TCC Command
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 5)) | ((value << 5) & (0x7 << 5));
        }
      };
      
      /**
        Control B Set
      */
      class CTRLBSET {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter Direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Counter Direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Lock Update
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLUPD() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Lock Update
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLUPD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets One-Shot
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getONESHOT() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets One-Shot
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setONESHOT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Ramp Index Command
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getIDXCMD() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets Ramp Index Command
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setIDXCMD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets TCC Command
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCMD() volatile {
          return (raw & (0x7 << 5)) >> 5;
        }
        /**
          Sets TCC Command
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 5)) | ((value << 5) & (0x7 << 5));
        }
      };
      
      /**
        Synchronization Busy
      */
      class SYNCBUSY {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Compare Channel 0 Busy
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Compare Channel 0 Busy
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Compare Channel 0 Busy
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Compare Channel 0 Busy
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Compare Channel Buffer 0 Busy
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCB(int index) volatile {
          return (raw & (0x1 << (19 + 1 * (index - 0)))) >> (19 + 1 * (index - 0));
        }
        /**
          Sets Compare Channel Buffer 0 Busy
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (19 + 1 * (index - 0)))) | ((value << (19 + 1 * (index - 0))) & (0x1 << (19 + 1 * (index - 0))));
        }
        /**
          Gets Compare Channel Buffer 0 Busy
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return (raw & (0xF << 19)) >> 19;
        }
        /**
          Sets Compare Channel Buffer 0 Busy
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCCB(unsigned long value) volatile {
          raw = (raw & ~(0xF << 19)) | ((value << 19) & (0xF << 19));
        }
        /**
          Gets Swrst Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWRST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Swrst Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Enable Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Enable Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Ctrlb Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTRLB() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Ctrlb Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTRLB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Status Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTATUS() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Status Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTATUS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Count Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Count Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Pattern Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPATT() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Pattern Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPATT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Wave Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWAVE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Wave Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWAVE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Period busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Period busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Pattern Buffer Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPATTB() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Pattern Buffer Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPATTB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Wave Buffer Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWAVEB() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Wave Buffer Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWAVEB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Period Buffer Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Period Buffer Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPERB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
      };
      
      /**
        Recoverable Fault A Configuration
      */
      class FCTRLA {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Fault A Source
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSRC() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Fault A Source
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSRC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Fault A Keeper
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getKEEP() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Fault A Keeper
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setKEEP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Fault A Qualification
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getQUAL() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Fault A Qualification
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setQUAL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Fault A Blanking Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getBLANK() volatile {
          return (raw & (0x3 << 5)) >> 5;
        }
        /**
          Sets Fault A Blanking Mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setBLANK(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
        }
        /**
          Gets Fault A Restart
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESTART() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Fault A Restart
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESTART(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Fault A Halt Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHALT() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Fault A Halt Mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHALT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Fault A Capture Channel
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCHSEL() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Fault A Capture Channel
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCHSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Fault A Capture Action
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCAPTURE() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Fault A Capture Action
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCAPTURE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Fault A Blanking Prescaler
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBLANKPRESC() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Fault A Blanking Prescaler
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBLANKPRESC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Fault A Blanking Time
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getBLANKVAL() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets Fault A Blanking Time
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setBLANKVAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets Fault A Filter Value
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getFILTERVAL() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Fault A Filter Value
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setFILTERVAL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
      };
      
      /**
        Recoverable Fault B Configuration
      */
      class FCTRLB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Fault B Source
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSRC() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Fault B Source
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSRC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Fault B Keeper
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getKEEP() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Fault B Keeper
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setKEEP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Fault B Qualification
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getQUAL() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Fault B Qualification
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setQUAL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Fault B Blanking Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getBLANK() volatile {
          return (raw & (0x3 << 5)) >> 5;
        }
        /**
          Sets Fault B Blanking Mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setBLANK(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
        }
        /**
          Gets Fault B Restart
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESTART() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Fault B Restart
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESTART(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Fault B Halt Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHALT() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Fault B Halt Mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHALT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Fault B Capture Channel
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCHSEL() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Fault B Capture Channel
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCHSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Fault B Capture Action
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCAPTURE() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Fault B Capture Action
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCAPTURE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Fault B Blanking Prescaler
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBLANKPRESC() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Fault B Blanking Prescaler
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBLANKPRESC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Fault B Blanking Time
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getBLANKVAL() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets Fault B Blanking Time
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setBLANKVAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets Fault B Filter Value
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getFILTERVAL() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Fault B Filter Value
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setFILTERVAL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
      };
      
      /**
        Waveform Extension Configuration
      */
      class WEXCTRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dead-time Insertion Generator 0 Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTIEN(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Dead-time Insertion Generator 0 Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTIEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Dead-time Insertion Generator 0 Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDTIEN() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Dead-time Insertion Generator 0 Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDTIEN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Output Matrix
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOTMX() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Output Matrix
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOTMX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Dead-time Low Side Outputs Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDTLS() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets Dead-time Low Side Outputs Value
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDTLS(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets Dead-time High Side Outputs Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDTHS() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets Dead-time High Side Outputs Value
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDTHS(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Driver Control
      */
      class DRVCTRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Non-Recoverable State 0 Output Enable
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNRE(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Non-Recoverable State 0 Output Enable
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNRE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Non-Recoverable State 0 Output Enable
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getNRE() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Non-Recoverable State 0 Output Enable
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setNRE(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets Non-Recoverable State 0 Output Value
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNRV(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Non-Recoverable State 0 Output Value
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNRV(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Non-Recoverable State 0 Output Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getNRV() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets Non-Recoverable State 0 Output Value
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setNRV(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets Output Waveform 0 Inversion
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINVEN(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Output Waveform 0 Inversion
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINVEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Output Waveform 0 Inversion
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getINVEN() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets Output Waveform 0 Inversion
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setINVEN(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets Non-Recoverable Fault Input 0 Filter Value
          @param index in range 0..1
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getFILTERVAL(int index) volatile {
          return (raw & (0xF << (24 + 4 * (index - 0)))) >> (24 + 4 * (index - 0));
        }
        /**
          Sets Non-Recoverable Fault Input 0 Filter Value
          @param index in range 0..1
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setFILTERVAL(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (24 + 4 * (index - 0)))) | ((value << (24 + 4 * (index - 0))) & (0xF << (24 + 4 * (index - 0))));
        }
        /**
          Gets Non-Recoverable Fault Input 0 Filter Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getFILTERVAL() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets Non-Recoverable Fault Input 0 Filter Value
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setFILTERVAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Debug Control
      */
      class DBGCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Debug Running Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBGRUN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Debug Running Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBGRUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Fault Detection on Debug Break Detection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFDDBD() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Fault Detection on Debug Break Detection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFDDBD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
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
          Gets Timer/counter Input Event0 Action
          @param index in range 0..1
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getEVACT(int index) volatile {
          return (raw & (0x7 << (0 + 3 * (index - 0)))) >> (0 + 3 * (index - 0));
        }
        /**
          Sets Timer/counter Input Event0 Action
          @param index in range 0..1
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setEVACT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (0 + 3 * (index - 0)))) | ((value << (0 + 3 * (index - 0))) & (0x7 << (0 + 3 * (index - 0))));
        }
        /**
          Gets Timer/counter Input Event0 Action
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getEVACT() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Timer/counter Input Event0 Action
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setEVACT(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Inverted Event 0 Input Enable
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCINV(int index) volatile {
          return (raw & (0x1 << (12 + 1 * (index - 0)))) >> (12 + 1 * (index - 0));
        }
        /**
          Sets Inverted Event 0 Input Enable
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCINV(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (12 + 1 * (index - 0)))) | ((value << (12 + 1 * (index - 0))) & (0x1 << (12 + 1 * (index - 0))));
        }
        /**
          Gets Inverted Event 0 Input Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTCINV() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Inverted Event 0 Input Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTCINV(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Timer/counter Event 0 Input Enable
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCEI(int index) volatile {
          return (raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0));
        }
        /**
          Sets Timer/counter Event 0 Input Enable
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCEI(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((value << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
        }
        /**
          Gets Timer/counter Event 0 Input Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTCEI() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets Timer/counter Event 0 Input Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTCEI(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets Match or Capture Channel 0 Event Input Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMCEI(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Match or Capture Channel 0 Event Input Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMCEI(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Match or Capture Channel 0 Event Input Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMCEI() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Match or Capture Channel 0 Event Input Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMCEI(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Match or Capture Channel 0 Event Output Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMCEO(int index) volatile {
          return (raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0));
        }
        /**
          Sets Match or Capture Channel 0 Event Output Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMCEO(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((value << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
        }
        /**
          Gets Match or Capture Channel 0 Event Output Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMCEO() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Match or Capture Channel 0 Event Output Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMCEO(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Timer/counter Output Event Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCNTSEL() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets Timer/counter Output Event Mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCNTSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets Overflow/Underflow Output Event Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVFEO() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Overflow/Underflow Output Event Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVFEO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Retrigger Output Event Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTRGEO() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Retrigger Output Event Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTRGEO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Timer/counter Output Event Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCNTEO() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Timer/counter Output Event Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCNTEO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
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
          Gets Non-Recoverable Fault 0 Interrupt Enable
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULT(int index) volatile {
          return (raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0));
        }
        /**
          Sets Non-Recoverable Fault 0 Interrupt Enable
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((value << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
        }
        /**
          Gets Non-Recoverable Fault 0 Interrupt Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFAULT() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets Non-Recoverable Fault 0 Interrupt Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFAULT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets Match or Capture Channel 0 Interrupt Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMC(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Match or Capture Channel 0 Interrupt Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Match or Capture Channel 0 Interrupt Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMC() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Match or Capture Channel 0 Interrupt Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Overflow Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Overflow Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Retrigger Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTRG() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Retrigger Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTRG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Counter Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Counter Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERR() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Non-Recoverable Debug Fault Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFS() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Non-Recoverable Debug Fault Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Recoverable Fault A Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTA() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Recoverable Fault A Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Recoverable Fault B Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTB() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Recoverable Fault B Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
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
          Gets Non-Recoverable Fault 0 Interrupt Enable
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULT(int index) volatile {
          return (raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0));
        }
        /**
          Sets Non-Recoverable Fault 0 Interrupt Enable
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((value << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
        }
        /**
          Gets Non-Recoverable Fault 0 Interrupt Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFAULT() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets Non-Recoverable Fault 0 Interrupt Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFAULT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets Match or Capture Channel 0 Interrupt Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMC(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Match or Capture Channel 0 Interrupt Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Match or Capture Channel 0 Interrupt Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMC() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Match or Capture Channel 0 Interrupt Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Overflow Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Overflow Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Retrigger Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTRG() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Retrigger Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTRG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Counter Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Counter Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERR() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Non-Recoverable Debug Fault Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFS() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Non-Recoverable Debug Fault Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Recoverable Fault A Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTA() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Recoverable Fault A Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Recoverable Fault B Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTB() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Recoverable Fault B Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
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
          Gets Non-Recoverable Fault 0
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULT(int index) volatile {
          return (raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0));
        }
        /**
          Sets Non-Recoverable Fault 0
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((value << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
        }
        /**
          Gets Non-Recoverable Fault 0
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFAULT() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets Non-Recoverable Fault 0
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFAULT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets Match or Capture 0
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMC(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Match or Capture 0
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Match or Capture 0
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMC() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Match or Capture 0
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Overflow
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Overflow
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Retrigger
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTRG() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Retrigger
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTRG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Counter
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Counter
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERR() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Non-Recoverable Debug Fault
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFS() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Non-Recoverable Debug Fault
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Recoverable Fault A
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTA() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Recoverable Fault A
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Recoverable Fault B
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTB() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Recoverable Fault B
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
      };
      
      /**
        Status
      */
      class STATUS {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Non-Recoverable Fault0 Input
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULT_IN(int index) volatile {
          return (raw & (0x1 << (10 + 1 * (index - 0)))) >> (10 + 1 * (index - 0));
        }
        /**
          Sets Non-Recoverable Fault0 Input
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULT_IN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (10 + 1 * (index - 0)))) | ((value << (10 + 1 * (index - 0))) & (0x1 << (10 + 1 * (index - 0))));
        }
        /**
          Gets Non-Recoverable Fault0 Input
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFAULT_IN() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Non-Recoverable Fault0 Input
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFAULT_IN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Non-Recoverable Fault 0 State
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULT(int index) volatile {
          return (raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0));
        }
        /**
          Sets Non-Recoverable Fault 0 State
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((value << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
        }
        /**
          Gets Non-Recoverable Fault 0 State
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFAULT() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets Non-Recoverable Fault 0 State
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFAULT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets Compare Channel 0 Buffer Valid
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCBV(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Compare Channel 0 Buffer Valid
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCBV(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Compare Channel 0 Buffer Valid
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCCBV() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Compare Channel 0 Buffer Valid
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCCBV(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Compare Channel 0 Value
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCMP(int index) volatile {
          return (raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0));
        }
        /**
          Sets Compare Channel 0 Value
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCMP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((value << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
        }
        /**
          Gets Compare Channel 0 Value
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCMP() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Compare Channel 0 Value
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCMP(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Stop
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTOP() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Stop
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Ramp
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDX() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Ramp
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Non-Recoverable Debug Fault State
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFS() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Non-Recoverable Debug Fault State
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Slave
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSLAVE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Slave
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSLAVE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Pattern Buffer Valid
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPATTBV() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Pattern Buffer Valid
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPATTBV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Wave Buffer Valid
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWAVEBV() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Wave Buffer Valid
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWAVEBV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Period Buffer Valid
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPERBV() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Period Buffer Valid
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPERBV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Recoverable Fault A Input
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTAIN() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Recoverable Fault A Input
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTAIN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Recoverable Fault B Input
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTBIN() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Recoverable Fault B Input
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTBIN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Recoverable Fault A State
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTA() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Recoverable Fault A State
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Recoverable Fault B State
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAULTB() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Recoverable Fault B State
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAULTB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
      };
      
      /**
        Count
      */
      class COUNT {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Counter Value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        Count
      */
      class COUNT_DITH4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return (raw & (0xFFFFF << 4)) >> 4;
        }
        /**
          Sets Counter Value
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((value << 4) & (0xFFFFF << 4));
        }
      };
      
      /**
        Count
      */
      class COUNT_DITH5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return (raw & (0x7FFFF << 5)) >> 5;
        }
        /**
          Sets Counter Value
          @param value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((value << 5) & (0x7FFFF << 5));
        }
      };
      
      /**
        Count
      */
      class COUNT_DITH6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return (raw & (0x3FFFF << 6)) >> 6;
        }
        /**
          Sets Counter Value
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((value << 6) & (0x3FFFF << 6));
        }
      };
      
      /**
        Pattern
      */
      class PATT {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Pattern Generator 0 Output Enable
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPGE(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Pattern Generator 0 Output Enable
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPGE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Pattern Generator 0 Output Enable
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPGE() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Pattern Generator 0 Output Enable
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPGE(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets Pattern Generator 0 Output Value
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPGV(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Pattern Generator 0 Output Value
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPGV(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Pattern Generator 0 Output Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPGV() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets Pattern Generator 0 Output Value
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPGV(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
      };
      
      /**
        Waveform Control
      */
      class WAVE {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Circular Channel 0 Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCICCEN(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Circular Channel 0 Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCICCEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Circular Channel 0 Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCICCEN() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Circular Channel 0 Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCICCEN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Channel 0 Polarity
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPOL(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Polarity
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPOL(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Polarity
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPOL() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Channel 0 Polarity
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPOL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Swap DTI Output Pair 0
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWAP(int index) volatile {
          return (raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0));
        }
        /**
          Sets Swap DTI Output Pair 0
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWAP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((value << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
        }
        /**
          Gets Swap DTI Output Pair 0
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSWAP() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Swap DTI Output Pair 0
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSWAP(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Waveform Generation
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWAVEGEN() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Waveform Generation
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setWAVEGEN(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets Ramp Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRAMP() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Ramp Mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRAMP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Circular period Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIPEREN() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Circular period Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIPEREN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Period
      */
      class PER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Period Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Period Value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        Period
      */
      class PER_DITH4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Cycle Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Dithering Cycle Number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Period Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return (raw & (0xFFFFF << 4)) >> 4;
        }
        /**
          Sets Period Value
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((value << 4) & (0xFFFFF << 4));
        }
      };
      
      /**
        Period
      */
      class PER_DITH5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Cycle Number
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets Dithering Cycle Number
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
        /**
          Gets Period Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return (raw & (0x7FFFF << 5)) >> 5;
        }
        /**
          Sets Period Value
          @param value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((value << 5) & (0x7FFFF << 5));
        }
      };
      
      /**
        Period
      */
      class PER_DITH6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Cycle Number
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Dithering Cycle Number
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Period Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return (raw & (0x3FFFF << 6)) >> 6;
        }
        /**
          Sets Period Value
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((value << 6) & (0x3FFFF << 6));
        }
      };
      
      /**
        Compare and Capture
      */
      class CC {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel Compare/Capture Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Channel Compare/Capture Value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setCC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        Compare and Capture
      */
      class CC_DITH4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Cycle Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Dithering Cycle Number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Channel Compare/Capture Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return (raw & (0xFFFFF << 4)) >> 4;
        }
        /**
          Sets Channel Compare/Capture Value
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setCC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((value << 4) & (0xFFFFF << 4));
        }
      };
      
      /**
        Compare and Capture
      */
      class CC_DITH5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Cycle Number
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets Dithering Cycle Number
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
        /**
          Gets Channel Compare/Capture Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return (raw & (0x7FFFF << 5)) >> 5;
        }
        /**
          Sets Channel Compare/Capture Value
          @param value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long setCC(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((value << 5) & (0x7FFFF << 5));
        }
      };
      
      /**
        Compare and Capture
      */
      class CC_DITH6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Cycle Number
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Dithering Cycle Number
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Channel Compare/Capture Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return (raw & (0x3FFFF << 6)) >> 6;
        }
        /**
          Sets Channel Compare/Capture Value
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setCC(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((value << 6) & (0x3FFFF << 6));
        }
      };
      
      /**
        Pattern Buffer
      */
      class PATTB {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Pattern Generator 0 Output Enable Buffer
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPGEB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Pattern Generator 0 Output Enable Buffer
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPGEB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Pattern Generator 0 Output Enable Buffer
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPGEB() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Pattern Generator 0 Output Enable Buffer
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPGEB(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets Pattern Generator 0 Output Enable
          @param index in range 0..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPGVB(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Pattern Generator 0 Output Enable
          @param index in range 0..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPGVB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Pattern Generator 0 Output Enable
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPGVB() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets Pattern Generator 0 Output Enable
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPGVB(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
      };
      
      /**
        Waveform Control Buffer
      */
      class WAVEB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Circular Channel 0 Enable Buffer
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCICCENB(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Circular Channel 0 Enable Buffer
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCICCENB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Circular Channel 0 Enable Buffer
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCICCENB() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Circular Channel 0 Enable Buffer
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCICCENB(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Channel 0 Polarity Buffer
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPOLB(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Polarity Buffer
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPOLB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Polarity Buffer
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPOLB() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Channel 0 Polarity Buffer
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPOLB(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Swap DTI Output Pair 0 Buffer
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWAPB(int index) volatile {
          return (raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0));
        }
        /**
          Sets Swap DTI Output Pair 0 Buffer
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWAPB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((value << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
        }
        /**
          Gets Swap DTI Output Pair 0 Buffer
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSWAPB() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Swap DTI Output Pair 0 Buffer
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSWAPB(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Waveform Generation Buffer
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWAVEGENB() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Waveform Generation Buffer
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setWAVEGENB(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets Ramp Mode Buffer
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRAMPB() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Ramp Mode Buffer
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRAMPB(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Circular Period Enable Buffer
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIPERENB() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Circular Period Enable Buffer
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIPERENB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Period Buffer
      */
      class PERB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Period Buffer Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Period Buffer Value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setPERB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        Period Buffer
      */
      class PERB_DITH4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Buffer Cycle Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Period Buffer Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return (raw & (0xFFFFF << 4)) >> 4;
        }
        /**
          Sets Period Buffer Value
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setPERB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((value << 4) & (0xFFFFF << 4));
        }
      };
      
      /**
        Period Buffer
      */
      class PERB_DITH5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Buffer Cycle Number
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
        /**
          Gets Period Buffer Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return (raw & (0x7FFFF << 5)) >> 5;
        }
        /**
          Sets Period Buffer Value
          @param value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long setPERB(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((value << 5) & (0x7FFFF << 5));
        }
      };
      
      /**
        Period Buffer
      */
      class PERB_DITH6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Buffer Cycle Number
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Period Buffer Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return (raw & (0x3FFFF << 6)) >> 6;
        }
        /**
          Sets Period Buffer Value
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setPERB(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((value << 6) & (0x3FFFF << 6));
        }
      };
      
      /**
        Compare and Capture Buffer
      */
      class CCB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel Compare/Capture Buffer Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets Channel Compare/Capture Buffer Value
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setCCB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        Compare and Capture Buffer
      */
      class CCB_DITH4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Buffer Cycle Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Channel Compare/Capture Buffer Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return (raw & (0xFFFFF << 4)) >> 4;
        }
        /**
          Sets Channel Compare/Capture Buffer Value
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setCCB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((value << 4) & (0xFFFFF << 4));
        }
      };
      
      /**
        Compare and Capture Buffer
      */
      class CCB_DITH5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Buffer Cycle Number
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
        /**
          Gets Channel Compare/Capture Buffer Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return (raw & (0x7FFFF << 5)) >> 5;
        }
        /**
          Sets Channel Compare/Capture Buffer Value
          @param value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long setCCB(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((value << 5) & (0x7FFFF << 5));
        }
      };
      
      /**
        Compare and Capture Buffer
      */
      class CCB_DITH6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Dithering Buffer Cycle Number
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Channel Compare/Capture Buffer Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return (raw & (0x3FFFF << 6)) >> 6;
        }
        /**
          Sets Channel Compare/Capture Buffer Value
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setCCB(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((value << 6) & (0x3FFFF << 6));
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
          volatile char _space_CTRLBCLR[0x4];
          /**
            Control B Clear
          */
          volatile reg::CTRLBCLR CTRLBCLR;
        };
        struct {
          volatile char _space_CTRLBSET[0x5];
          /**
            Control B Set
          */
          volatile reg::CTRLBSET CTRLBSET;
        };
        struct {
          volatile char _space_SYNCBUSY[0x8];
          /**
            Synchronization Busy
          */
          volatile reg::SYNCBUSY SYNCBUSY;
        };
        struct {
          volatile char _space_FCTRLA[0xc];
          /**
            Recoverable Fault A Configuration
          */
          volatile reg::FCTRLA FCTRLA;
        };
        struct {
          volatile char _space_FCTRLB[0x10];
          /**
            Recoverable Fault B Configuration
          */
          volatile reg::FCTRLB FCTRLB;
        };
        struct {
          volatile char _space_WEXCTRL[0x14];
          /**
            Waveform Extension Configuration
          */
          volatile reg::WEXCTRL WEXCTRL;
        };
        struct {
          volatile char _space_DRVCTRL[0x18];
          /**
            Driver Control
          */
          volatile reg::DRVCTRL DRVCTRL;
        };
        struct {
          volatile char _space_DBGCTRL[0x1e];
          /**
            Debug Control
          */
          volatile reg::DBGCTRL DBGCTRL;
        };
        struct {
          volatile char _space_EVCTRL[0x20];
          /**
            Event Control
          */
          volatile reg::EVCTRL EVCTRL;
        };
        struct {
          volatile char _space_INTENCLR[0x24];
          /**
            Interrupt Enable Clear
          */
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0x28];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x2c];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
        struct {
          volatile char _space_STATUS[0x30];
          /**
            Status
          */
          volatile reg::STATUS STATUS;
        };
        struct {
          volatile char _space_COUNT[0x34];
          /**
            Count
          */
          volatile reg::COUNT COUNT;
        };
        struct {
          volatile char _space_COUNT_DITH4[0x34];
          /**
            Count
          */
          volatile reg::COUNT_DITH4 COUNT_DITH4;
        };
        struct {
          volatile char _space_COUNT_DITH5[0x34];
          /**
            Count
          */
          volatile reg::COUNT_DITH5 COUNT_DITH5;
        };
        struct {
          volatile char _space_COUNT_DITH6[0x34];
          /**
            Count
          */
          volatile reg::COUNT_DITH6 COUNT_DITH6;
        };
        struct {
          volatile char _space_PATT[0x38];
          /**
            Pattern
          */
          volatile reg::PATT PATT;
        };
        struct {
          volatile char _space_WAVE[0x3c];
          /**
            Waveform Control
          */
          volatile reg::WAVE WAVE;
        };
        struct {
          volatile char _space_PER[0x40];
          /**
            Period
          */
          volatile reg::PER PER;
        };
        struct {
          volatile char _space_PER_DITH4[0x40];
          /**
            Period
          */
          volatile reg::PER_DITH4 PER_DITH4;
        };
        struct {
          volatile char _space_PER_DITH5[0x40];
          /**
            Period
          */
          volatile reg::PER_DITH5 PER_DITH5;
        };
        struct {
          volatile char _space_PER_DITH6[0x40];
          /**
            Period
          */
          volatile reg::PER_DITH6 PER_DITH6;
        };
        struct {
          volatile char _space_CC[0x44];
          /**
            Compare and Capture
          */
          volatile reg::CC CC[4];
        };
        struct {
          volatile char _space_CC_DITH4[0x44];
          /**
            Compare and Capture
          */
          volatile reg::CC_DITH4 CC_DITH4[4];
        };
        struct {
          volatile char _space_CC_DITH5[0x44];
          /**
            Compare and Capture
          */
          volatile reg::CC_DITH5 CC_DITH5[4];
        };
        struct {
          volatile char _space_CC_DITH6[0x44];
          /**
            Compare and Capture
          */
          volatile reg::CC_DITH6 CC_DITH6[4];
        };
        struct {
          volatile char _space_PATTB[0x64];
          /**
            Pattern Buffer
          */
          volatile reg::PATTB PATTB;
        };
        struct {
          volatile char _space_WAVEB[0x68];
          /**
            Waveform Control Buffer
          */
          volatile reg::WAVEB WAVEB;
        };
        struct {
          volatile char _space_PERB[0x6c];
          /**
            Period Buffer
          */
          volatile reg::PERB PERB;
        };
        struct {
          volatile char _space_PERB_DITH4[0x6c];
          /**
            Period Buffer
          */
          volatile reg::PERB_DITH4 PERB_DITH4;
        };
        struct {
          volatile char _space_PERB_DITH5[0x6c];
          /**
            Period Buffer
          */
          volatile reg::PERB_DITH5 PERB_DITH5;
        };
        struct {
          volatile char _space_PERB_DITH6[0x6c];
          /**
            Period Buffer
          */
          volatile reg::PERB_DITH6 PERB_DITH6;
        };
        struct {
          volatile char _space_CCB[0x70];
          /**
            Compare and Capture Buffer
          */
          volatile reg::CCB CCB[4];
        };
        struct {
          volatile char _space_CCB_DITH4[0x70];
          /**
            Compare and Capture Buffer
          */
          volatile reg::CCB_DITH4 CCB_DITH4[4];
        };
        struct {
          volatile char _space_CCB_DITH5[0x70];
          /**
            Compare and Capture Buffer
          */
          volatile reg::CCB_DITH5 CCB_DITH5[4];
        };
        struct {
          volatile char _space_CCB_DITH6[0x70];
          /**
            Compare and Capture Buffer
          */
          volatile reg::CCB_DITH6 CCB_DITH6[4];
        };
      };
    };
  }
  
  extern tcc::Peripheral TCC0;
}