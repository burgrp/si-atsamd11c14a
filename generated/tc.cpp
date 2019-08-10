namespace target {
  namespace tc {
    namespace reg {
      namespace COUNT8 {
        
        /**
          Control A
        */
        class CTRLA {
          volatile unsigned short raw;
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
            Gets TC Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets TC Mode
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Waveform Generation Operation
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getWAVEGEN() volatile {
            return (raw & (0x3 << 5)) >> 5;
          }
          /**
            Sets Waveform Generation Operation
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setWAVEGEN(unsigned long value) volatile {
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
            Gets Prescaler and Counter Synchronization
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getPRESCSYNC() volatile {
            return (raw & (0x3 << 12)) >> 12;
          }
          /**
            Sets Prescaler and Counter Synchronization
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setPRESCSYNC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
          }
        };
        
        /**
          Read Request
        */
        class READREQ {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Address
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0x1F << 0)) >> 0;
          }
          /**
            Sets Address
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
          }
          /**
            Gets Read Continuously
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRCONT() volatile {
            return (raw & (0x1 << 14)) >> 14;
          }
          /**
            Sets Read Continuously
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRCONT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
          }
          /**
            Gets Read Request
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRREQ() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Read Request
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRREQ(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
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
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Command
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
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
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Command
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
          }
        };
        
        /**
          Control C
        */
        class CTRLC {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getINVEN(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setINVEN(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Output Waveform 0 Invert Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getINVEN() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setINVEN(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Capture Channel 0 Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCPTEN(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Capture Channel 0 Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCPTEN(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Capture Channel 0 Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCPTEN() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Capture Channel 0 Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCPTEN(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Debug Run Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGRUN() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Debug Run Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGRUN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
            Gets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMCEO(int index) volatile {
            return (raw & (0x1 << (12 + 1 * (index - 0)))) >> (12 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMCEO(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (12 + 1 * (index - 0)))) | ((value << (12 + 1 * (index - 0))) & (0x1 << (12 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Event Output Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMCEO() volatile {
            return (raw & (0x3 << 12)) >> 12;
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMCEO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
          }
          /**
            Gets Event Action
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getEVACT() volatile {
            return (raw & (0x7 << 0)) >> 0;
          }
          /**
            Sets Event Action
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setEVACT(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
          }
          /**
            Gets TC Inverted Event Input
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTCINV() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets TC Inverted Event Input
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTCINV(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets TC Event Input
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTCEI() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets TC Event Input
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTCEI(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Overflow/Underflow Event Output Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVFEO() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Overflow/Underflow Event Output Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVFEO(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Match or Capture Channel 0
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Stop
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTOP() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Stop
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTOP(unsigned long value) volatile {
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
          COUNT8 Counter Value
        */
        class COUNT {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Counter Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Counter Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
        };
        
        /**
          COUNT8 Period Value
        */
        class PER {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Period Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getPER() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Period Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
        };
        
        /**
          COUNT8 Compare/Capture
        */
        class CC {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Compare/Capture Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getCC() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Compare/Capture Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setCC(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
        };
      };
      namespace COUNT16 {
        
        /**
          Control A
        */
        class CTRLA {
          volatile unsigned short raw;
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
            Gets TC Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets TC Mode
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Waveform Generation Operation
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getWAVEGEN() volatile {
            return (raw & (0x3 << 5)) >> 5;
          }
          /**
            Sets Waveform Generation Operation
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setWAVEGEN(unsigned long value) volatile {
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
            Gets Prescaler and Counter Synchronization
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getPRESCSYNC() volatile {
            return (raw & (0x3 << 12)) >> 12;
          }
          /**
            Sets Prescaler and Counter Synchronization
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setPRESCSYNC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
          }
        };
        
        /**
          Read Request
        */
        class READREQ {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Address
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0x1F << 0)) >> 0;
          }
          /**
            Sets Address
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
          }
          /**
            Gets Read Continuously
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRCONT() volatile {
            return (raw & (0x1 << 14)) >> 14;
          }
          /**
            Sets Read Continuously
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRCONT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
          }
          /**
            Gets Read Request
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRREQ() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Read Request
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRREQ(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
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
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Command
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
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
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Command
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
          }
        };
        
        /**
          Control C
        */
        class CTRLC {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getINVEN(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setINVEN(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Output Waveform 0 Invert Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getINVEN() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setINVEN(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Capture Channel 0 Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCPTEN(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Capture Channel 0 Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCPTEN(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Capture Channel 0 Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCPTEN() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Capture Channel 0 Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCPTEN(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Debug Run Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGRUN() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Debug Run Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGRUN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
            Gets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMCEO(int index) volatile {
            return (raw & (0x1 << (12 + 1 * (index - 0)))) >> (12 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMCEO(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (12 + 1 * (index - 0)))) | ((value << (12 + 1 * (index - 0))) & (0x1 << (12 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Event Output Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMCEO() volatile {
            return (raw & (0x3 << 12)) >> 12;
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMCEO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
          }
          /**
            Gets Event Action
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getEVACT() volatile {
            return (raw & (0x7 << 0)) >> 0;
          }
          /**
            Sets Event Action
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setEVACT(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
          }
          /**
            Gets TC Inverted Event Input
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTCINV() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets TC Inverted Event Input
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTCINV(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets TC Event Input
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTCEI() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets TC Event Input
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTCEI(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Overflow/Underflow Event Output Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVFEO() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Overflow/Underflow Event Output Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVFEO(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Match or Capture Channel 0
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Stop
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTOP() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Stop
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTOP(unsigned long value) volatile {
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
          COUNT16 Counter Value
        */
        class COUNT {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Count Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return (raw & (0xFFFF << 0)) >> 0;
          }
          /**
            Sets Count Value
            @param value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
          }
        };
        
        /**
          COUNT16 Compare/Capture
        */
        class CC {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Compare/Capture Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getCC() volatile {
            return (raw & (0xFFFF << 0)) >> 0;
          }
          /**
            Sets Compare/Capture Value
            @param value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long setCC(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
          }
        };
      };
      namespace COUNT32 {
        
        /**
          Control A
        */
        class CTRLA {
          volatile unsigned short raw;
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
            Gets TC Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets TC Mode
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Waveform Generation Operation
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getWAVEGEN() volatile {
            return (raw & (0x3 << 5)) >> 5;
          }
          /**
            Sets Waveform Generation Operation
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setWAVEGEN(unsigned long value) volatile {
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
            Gets Prescaler and Counter Synchronization
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getPRESCSYNC() volatile {
            return (raw & (0x3 << 12)) >> 12;
          }
          /**
            Sets Prescaler and Counter Synchronization
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setPRESCSYNC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
          }
        };
        
        /**
          Read Request
        */
        class READREQ {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Address
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0x1F << 0)) >> 0;
          }
          /**
            Sets Address
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
          }
          /**
            Gets Read Continuously
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRCONT() volatile {
            return (raw & (0x1 << 14)) >> 14;
          }
          /**
            Sets Read Continuously
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRCONT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
          }
          /**
            Gets Read Request
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRREQ() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Read Request
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRREQ(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
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
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Command
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
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
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Command
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
          }
        };
        
        /**
          Control C
        */
        class CTRLC {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getINVEN(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setINVEN(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Output Waveform 0 Invert Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getINVEN() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setINVEN(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Capture Channel 0 Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCPTEN(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Capture Channel 0 Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCPTEN(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Capture Channel 0 Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCPTEN() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Capture Channel 0 Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCPTEN(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Debug Run Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGRUN() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Debug Run Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGRUN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
            Gets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMCEO(int index) volatile {
            return (raw & (0x1 << (12 + 1 * (index - 0)))) >> (12 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMCEO(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (12 + 1 * (index - 0)))) | ((value << (12 + 1 * (index - 0))) & (0x1 << (12 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Event Output Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMCEO() volatile {
            return (raw & (0x3 << 12)) >> 12;
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMCEO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
          }
          /**
            Gets Event Action
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getEVACT() volatile {
            return (raw & (0x7 << 0)) >> 0;
          }
          /**
            Sets Event Action
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setEVACT(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
          }
          /**
            Gets TC Inverted Event Input
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTCINV() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets TC Inverted Event Input
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTCINV(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets TC Event Input
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTCEI() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets TC Event Input
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTCEI(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Overflow/Underflow Event Output Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVFEO() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Overflow/Underflow Event Output Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVFEO(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Match or Capture Channel 0
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMC(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Match or Capture Channel 0
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMC(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Match or Capture Channel 0
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMC() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Match or Capture Channel 0
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMC(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
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
            Gets Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Synchronization Ready
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Synchronization Ready
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
            Gets Stop
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTOP() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Stop
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTOP(unsigned long value) volatile {
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
          COUNT32 Counter Value
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
            Gets Count Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return (raw & (0xFFFFFFFF << 0)) >> 0;
          }
          /**
            Sets Count Value
            @param value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
          }
        };
        
        /**
          COUNT32 Compare/Capture
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
            Gets Compare/Capture Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getCC() volatile {
            return (raw & (0xFFFFFFFF << 0)) >> 0;
          }
          /**
            Sets Compare/Capture Value
            @param value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long setCC(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
          }
        };
      };
    };
    class Peripheral {
      public:
      union {
        union {
          struct {
            /**
              Control A
            */
            volatile reg::COUNT8::CTRLA CTRLA;
          };
          struct {
            volatile char _space_READREQ[0x2];
            /**
              Read Request
            */
            volatile reg::COUNT8::READREQ READREQ;
          };
          struct {
            volatile char _space_CTRLBCLR[0x4];
            /**
              Control B Clear
            */
            volatile reg::COUNT8::CTRLBCLR CTRLBCLR;
          };
          struct {
            volatile char _space_CTRLBSET[0x5];
            /**
              Control B Set
            */
            volatile reg::COUNT8::CTRLBSET CTRLBSET;
          };
          struct {
            volatile char _space_CTRLC[0x6];
            /**
              Control C
            */
            volatile reg::COUNT8::CTRLC CTRLC;
          };
          struct {
            volatile char _space_DBGCTRL[0x8];
            /**
              Debug Control
            */
            volatile reg::COUNT8::DBGCTRL DBGCTRL;
          };
          struct {
            volatile char _space_EVCTRL[0xa];
            /**
              Event Control
            */
            volatile reg::COUNT8::EVCTRL EVCTRL;
          };
          struct {
            volatile char _space_INTENCLR[0xc];
            /**
              Interrupt Enable Clear
            */
            volatile reg::COUNT8::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0xd];
            /**
              Interrupt Enable Set
            */
            volatile reg::COUNT8::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0xe];
            /**
              Interrupt Flag Status and Clear
            */
            volatile reg::COUNT8::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0xf];
            /**
              Status
            */
            volatile reg::COUNT8::STATUS STATUS;
          };
          struct {
            volatile char _space_COUNT[0x10];
            /**
              COUNT8 Counter Value
            */
            volatile reg::COUNT8::COUNT COUNT;
          };
          struct {
            volatile char _space_PER[0x14];
            /**
              COUNT8 Period Value
            */
            volatile reg::COUNT8::PER PER;
          };
          struct {
            volatile char _space_CC[0x18];
            /**
              COUNT8 Compare/Capture
            */
            volatile reg::COUNT8::CC CC[2];
          };
        } COUNT8;
        union {
          struct {
            /**
              Control A
            */
            volatile reg::COUNT16::CTRLA CTRLA;
          };
          struct {
            volatile char _space_READREQ[0x2];
            /**
              Read Request
            */
            volatile reg::COUNT16::READREQ READREQ;
          };
          struct {
            volatile char _space_CTRLBCLR[0x4];
            /**
              Control B Clear
            */
            volatile reg::COUNT16::CTRLBCLR CTRLBCLR;
          };
          struct {
            volatile char _space_CTRLBSET[0x5];
            /**
              Control B Set
            */
            volatile reg::COUNT16::CTRLBSET CTRLBSET;
          };
          struct {
            volatile char _space_CTRLC[0x6];
            /**
              Control C
            */
            volatile reg::COUNT16::CTRLC CTRLC;
          };
          struct {
            volatile char _space_DBGCTRL[0x8];
            /**
              Debug Control
            */
            volatile reg::COUNT16::DBGCTRL DBGCTRL;
          };
          struct {
            volatile char _space_EVCTRL[0xa];
            /**
              Event Control
            */
            volatile reg::COUNT16::EVCTRL EVCTRL;
          };
          struct {
            volatile char _space_INTENCLR[0xc];
            /**
              Interrupt Enable Clear
            */
            volatile reg::COUNT16::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0xd];
            /**
              Interrupt Enable Set
            */
            volatile reg::COUNT16::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0xe];
            /**
              Interrupt Flag Status and Clear
            */
            volatile reg::COUNT16::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0xf];
            /**
              Status
            */
            volatile reg::COUNT16::STATUS STATUS;
          };
          struct {
            volatile char _space_COUNT[0x10];
            /**
              COUNT16 Counter Value
            */
            volatile reg::COUNT16::COUNT COUNT;
          };
          struct {
            volatile char _space_CC[0x18];
            /**
              COUNT16 Compare/Capture
            */
            volatile reg::COUNT16::CC CC[2];
          };
        } COUNT16;
        union {
          struct {
            /**
              Control A
            */
            volatile reg::COUNT32::CTRLA CTRLA;
          };
          struct {
            volatile char _space_READREQ[0x2];
            /**
              Read Request
            */
            volatile reg::COUNT32::READREQ READREQ;
          };
          struct {
            volatile char _space_CTRLBCLR[0x4];
            /**
              Control B Clear
            */
            volatile reg::COUNT32::CTRLBCLR CTRLBCLR;
          };
          struct {
            volatile char _space_CTRLBSET[0x5];
            /**
              Control B Set
            */
            volatile reg::COUNT32::CTRLBSET CTRLBSET;
          };
          struct {
            volatile char _space_CTRLC[0x6];
            /**
              Control C
            */
            volatile reg::COUNT32::CTRLC CTRLC;
          };
          struct {
            volatile char _space_DBGCTRL[0x8];
            /**
              Debug Control
            */
            volatile reg::COUNT32::DBGCTRL DBGCTRL;
          };
          struct {
            volatile char _space_EVCTRL[0xa];
            /**
              Event Control
            */
            volatile reg::COUNT32::EVCTRL EVCTRL;
          };
          struct {
            volatile char _space_INTENCLR[0xc];
            /**
              Interrupt Enable Clear
            */
            volatile reg::COUNT32::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0xd];
            /**
              Interrupt Enable Set
            */
            volatile reg::COUNT32::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0xe];
            /**
              Interrupt Flag Status and Clear
            */
            volatile reg::COUNT32::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0xf];
            /**
              Status
            */
            volatile reg::COUNT32::STATUS STATUS;
          };
          struct {
            volatile char _space_COUNT[0x10];
            /**
              COUNT32 Counter Value
            */
            volatile reg::COUNT32::COUNT COUNT;
          };
          struct {
            volatile char _space_CC[0x18];
            /**
              COUNT32 Compare/Capture
            */
            volatile reg::COUNT32::CC CC[2];
          };
        } COUNT32;
      };
    };
  }
  
  extern tc::Peripheral TC1;
  extern tc::Peripheral TC2;
}