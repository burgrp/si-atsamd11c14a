namespace target {
  namespace rtc {
    namespace reg {
      namespace MODE0 {
        
        /**
          MODE0 Control
        */
        class CTRL {
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
            Gets Operating Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Operating Mode
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Clear on Match
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMATCHCLR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Clear on Match
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMATCHCLR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Prescaler
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getPRESCALER() volatile {
            return (raw & (0xF << 8)) >> 8;
          }
          /**
            Sets Prescaler
            @param value in range 0..15
          */
          __attribute__((always_inline)) unsigned long setPRESCALER(unsigned long value) volatile {
            raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
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
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0x3F << 0)) >> 0;
          }
          /**
            Sets Address
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
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
          MODE0 Event Control
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
            Gets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPEREO(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPEREO(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Periodic Interval 0 Event Output Enable
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getPEREO() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setPEREO(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
          /**
            Gets Compare 0 Event Output Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMPEO0() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Compare 0 Event Output Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMPEO0(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Overflow Event Output Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVFEO() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Overflow Event Output Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVFEO(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
          }
        };
        
        /**
          MODE0 Interrupt Enable Clear
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
            Gets Compare 0 Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMP0() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMP0(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE0 Interrupt Enable Set
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
            Gets Compare 0 Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMP0() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMP0(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE0 Interrupt Flag Status and Clear
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
            Gets Compare 0
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMP0() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Compare 0
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMP0(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Synchronization Ready
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
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
            Gets Run During Debug
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGRUN() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Run During Debug
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGRUN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
        };
        
        /**
          Frequency Correction
        */
        class FREQCORR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Correction Value
            @return value in range 0..127
          */
          __attribute__((always_inline)) unsigned long getVALUE() volatile {
            return (raw & (0x7F << 0)) >> 0;
          }
          /**
            Sets Correction Value
            @param value in range 0..127
          */
          __attribute__((always_inline)) unsigned long setVALUE(unsigned long value) volatile {
            raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
          }
          /**
            Gets Correction Sign
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSIGN() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Correction Sign
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSIGN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE0 Counter Value
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
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return (raw & (0xFFFFFFFF << 0)) >> 0;
          }
          /**
            Sets Counter Value
            @param value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
          }
        };
        
        /**
          MODE0 Compare n Value
        */
        class COMP {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Compare Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getCOMP() volatile {
            return (raw & (0xFFFFFFFF << 0)) >> 0;
          }
          /**
            Sets Compare Value
            @param value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long setCOMP(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
          }
        };
      };
      namespace MODE1 {
        
        /**
          MODE1 Control
        */
        class CTRL {
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
            Gets Operating Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Operating Mode
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Prescaler
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getPRESCALER() volatile {
            return (raw & (0xF << 8)) >> 8;
          }
          /**
            Sets Prescaler
            @param value in range 0..15
          */
          __attribute__((always_inline)) unsigned long setPRESCALER(unsigned long value) volatile {
            raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
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
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0x3F << 0)) >> 0;
          }
          /**
            Sets Address
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
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
          MODE1 Event Control
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
            Gets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPEREO(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPEREO(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Periodic Interval 0 Event Output Enable
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getPEREO() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setPEREO(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
          /**
            Gets Compare 0 Event Output Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMPEO(int index) volatile {
            return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
          }
          /**
            Sets Compare 0 Event Output Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMPEO(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          }
          /**
            Gets Compare 0 Event Output Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMPEO() volatile {
            return (raw & (0x3 << 8)) >> 8;
          }
          /**
            Sets Compare 0 Event Output Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMPEO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
          }
          /**
            Gets Overflow Event Output Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVFEO() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Overflow Event Output Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVFEO(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
          }
        };
        
        /**
          MODE1 Interrupt Enable Clear
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
            Gets Compare 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMP(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMP(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Compare 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMP() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMP(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE1 Interrupt Enable Set
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
            Gets Compare 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMP(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMP(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Compare 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMP() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMP(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE1 Interrupt Flag Status and Clear
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
            Gets Compare 0
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMP(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Compare 0
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMP(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Compare 0
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMP() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Compare 0
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMP(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Synchronization Ready
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
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
            Gets Run During Debug
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGRUN() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Run During Debug
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGRUN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
        };
        
        /**
          Frequency Correction
        */
        class FREQCORR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Correction Value
            @return value in range 0..127
          */
          __attribute__((always_inline)) unsigned long getVALUE() volatile {
            return (raw & (0x7F << 0)) >> 0;
          }
          /**
            Sets Correction Value
            @param value in range 0..127
          */
          __attribute__((always_inline)) unsigned long setVALUE(unsigned long value) volatile {
            raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
          }
          /**
            Gets Correction Sign
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSIGN() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Correction Sign
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSIGN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE1 Counter Value
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
            Gets Counter Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return (raw & (0xFFFF << 0)) >> 0;
          }
          /**
            Sets Counter Value
            @param value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
          }
        };
        
        /**
          MODE1 Counter Period
        */
        class PER {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Counter Period
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getPER() volatile {
            return (raw & (0xFFFF << 0)) >> 0;
          }
          /**
            Sets Counter Period
            @param value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
          }
        };
        
        /**
          MODE1 Compare n Value
        */
        class COMP {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Compare Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getCOMP() volatile {
            return (raw & (0xFFFF << 0)) >> 0;
          }
          /**
            Sets Compare Value
            @param value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long setCOMP(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
          }
        };
      };
      namespace MODE2 {
        
        /**
          MODE2 Control
        */
        class CTRL {
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
            Gets Operating Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Operating Mode
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Clock Representation
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCLKREP() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Clock Representation
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCLKREP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Clear on Match
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMATCHCLR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Clear on Match
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMATCHCLR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Prescaler
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getPRESCALER() volatile {
            return (raw & (0xF << 8)) >> 8;
          }
          /**
            Sets Prescaler
            @param value in range 0..15
          */
          __attribute__((always_inline)) unsigned long setPRESCALER(unsigned long value) volatile {
            raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
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
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0x3F << 0)) >> 0;
          }
          /**
            Sets Address
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
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
          MODE2 Event Control
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
            Gets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPEREO(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPEREO(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Periodic Interval 0 Event Output Enable
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getPEREO() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setPEREO(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
          /**
            Gets Alarm 0 Event Output Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getALARMEO0() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Alarm 0 Event Output Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setALARMEO0(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Overflow Event Output Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVFEO() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Overflow Event Output Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVFEO(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
          }
        };
        
        /**
          MODE2 Interrupt Enable Clear
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
            Gets Alarm 0 Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getALARM0() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Alarm 0 Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setALARM0(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE2 Interrupt Enable Set
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
            Gets Alarm 0 Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getALARM0() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Alarm 0 Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setALARM0(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE2 Interrupt Flag Status and Clear
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
            Gets Alarm 0
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getALARM0() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Alarm 0
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setALARM0(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Synchronization Ready
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYNCRDY() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Synchronization Ready
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYNCRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Overflow
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOVF() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Overflow
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
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
            Gets Run During Debug
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGRUN() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Run During Debug
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGRUN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
        };
        
        /**
          Frequency Correction
        */
        class FREQCORR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Correction Value
            @return value in range 0..127
          */
          __attribute__((always_inline)) unsigned long getVALUE() volatile {
            return (raw & (0x7F << 0)) >> 0;
          }
          /**
            Sets Correction Value
            @param value in range 0..127
          */
          __attribute__((always_inline)) unsigned long setVALUE(unsigned long value) volatile {
            raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
          }
          /**
            Gets Correction Sign
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSIGN() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Correction Sign
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSIGN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          MODE2 Clock Value
        */
        class CLOCK {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Second
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getSECOND() volatile {
            return (raw & (0x3F << 0)) >> 0;
          }
          /**
            Sets Second
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setSECOND(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
          }
          /**
            Gets Minute
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getMINUTE() volatile {
            return (raw & (0x3F << 6)) >> 6;
          }
          /**
            Sets Minute
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setMINUTE(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 6)) | ((value << 6) & (0x3F << 6));
          }
          /**
            Gets Hour
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getHOUR() volatile {
            return (raw & (0x1F << 12)) >> 12;
          }
          /**
            Sets Hour
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setHOUR(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 12)) | ((value << 12) & (0x1F << 12));
          }
          /**
            Gets Day
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getDAY() volatile {
            return (raw & (0x1F << 17)) >> 17;
          }
          /**
            Sets Day
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setDAY(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 17)) | ((value << 17) & (0x1F << 17));
          }
          /**
            Gets Month
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getMONTH() volatile {
            return (raw & (0xF << 22)) >> 22;
          }
          /**
            Sets Month
            @param value in range 0..15
          */
          __attribute__((always_inline)) unsigned long setMONTH(unsigned long value) volatile {
            raw = (raw & ~(0xF << 22)) | ((value << 22) & (0xF << 22));
          }
          /**
            Gets Year
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getYEAR() volatile {
            return (raw & (0x3F << 26)) >> 26;
          }
          /**
            Sets Year
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setYEAR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 26)) | ((value << 26) & (0x3F << 26));
          }
        };
        
        /**
          MODE2 Alarm n Value
        */
        class ALARM {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Second
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getSECOND() volatile {
            return (raw & (0x3F << 0)) >> 0;
          }
          /**
            Sets Second
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setSECOND(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
          }
          /**
            Gets Minute
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getMINUTE() volatile {
            return (raw & (0x3F << 6)) >> 6;
          }
          /**
            Sets Minute
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setMINUTE(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 6)) | ((value << 6) & (0x3F << 6));
          }
          /**
            Gets Hour
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getHOUR() volatile {
            return (raw & (0x1F << 12)) >> 12;
          }
          /**
            Sets Hour
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setHOUR(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 12)) | ((value << 12) & (0x1F << 12));
          }
          /**
            Gets Day
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getDAY() volatile {
            return (raw & (0x1F << 17)) >> 17;
          }
          /**
            Sets Day
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setDAY(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 17)) | ((value << 17) & (0x1F << 17));
          }
          /**
            Gets Month
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getMONTH() volatile {
            return (raw & (0xF << 22)) >> 22;
          }
          /**
            Sets Month
            @param value in range 0..15
          */
          __attribute__((always_inline)) unsigned long setMONTH(unsigned long value) volatile {
            raw = (raw & ~(0xF << 22)) | ((value << 22) & (0xF << 22));
          }
          /**
            Gets Year
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getYEAR() volatile {
            return (raw & (0x3F << 26)) >> 26;
          }
          /**
            Sets Year
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setYEAR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 26)) | ((value << 26) & (0x3F << 26));
          }
        };
        
        /**
          MODE2 Alarm n Mask
        */
        class MASK {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Alarm Mask Selection
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getSEL() volatile {
            return (raw & (0x7 << 0)) >> 0;
          }
          /**
            Sets Alarm Mask Selection
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setSEL(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
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
              MODE0 Control
            */
            volatile reg::MODE0::CTRL CTRL;
          };
          struct {
            volatile char _space_READREQ[0x2];
            /**
              Read Request
            */
            volatile reg::MODE0::READREQ READREQ;
          };
          struct {
            volatile char _space_EVCTRL[0x4];
            /**
              MODE0 Event Control
            */
            volatile reg::MODE0::EVCTRL EVCTRL;
          };
          struct {
            volatile char _space_INTENCLR[0x6];
            /**
              MODE0 Interrupt Enable Clear
            */
            volatile reg::MODE0::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0x7];
            /**
              MODE0 Interrupt Enable Set
            */
            volatile reg::MODE0::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0x8];
            /**
              MODE0 Interrupt Flag Status and Clear
            */
            volatile reg::MODE0::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0xa];
            /**
              Status
            */
            volatile reg::MODE0::STATUS STATUS;
          };
          struct {
            volatile char _space_DBGCTRL[0xb];
            /**
              Debug Control
            */
            volatile reg::MODE0::DBGCTRL DBGCTRL;
          };
          struct {
            volatile char _space_FREQCORR[0xc];
            /**
              Frequency Correction
            */
            volatile reg::MODE0::FREQCORR FREQCORR;
          };
          struct {
            volatile char _space_COUNT[0x10];
            /**
              MODE0 Counter Value
            */
            volatile reg::MODE0::COUNT COUNT;
          };
          struct {
            volatile char _space_COMP[0x18];
            /**
              MODE0 Compare n Value
            */
            volatile reg::MODE0::COMP COMP;
          };
        } MODE0;
        union {
          struct {
            /**
              MODE1 Control
            */
            volatile reg::MODE1::CTRL CTRL;
          };
          struct {
            volatile char _space_READREQ[0x2];
            /**
              Read Request
            */
            volatile reg::MODE1::READREQ READREQ;
          };
          struct {
            volatile char _space_EVCTRL[0x4];
            /**
              MODE1 Event Control
            */
            volatile reg::MODE1::EVCTRL EVCTRL;
          };
          struct {
            volatile char _space_INTENCLR[0x6];
            /**
              MODE1 Interrupt Enable Clear
            */
            volatile reg::MODE1::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0x7];
            /**
              MODE1 Interrupt Enable Set
            */
            volatile reg::MODE1::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0x8];
            /**
              MODE1 Interrupt Flag Status and Clear
            */
            volatile reg::MODE1::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0xa];
            /**
              Status
            */
            volatile reg::MODE1::STATUS STATUS;
          };
          struct {
            volatile char _space_DBGCTRL[0xb];
            /**
              Debug Control
            */
            volatile reg::MODE1::DBGCTRL DBGCTRL;
          };
          struct {
            volatile char _space_FREQCORR[0xc];
            /**
              Frequency Correction
            */
            volatile reg::MODE1::FREQCORR FREQCORR;
          };
          struct {
            volatile char _space_COUNT[0x10];
            /**
              MODE1 Counter Value
            */
            volatile reg::MODE1::COUNT COUNT;
          };
          struct {
            volatile char _space_PER[0x14];
            /**
              MODE1 Counter Period
            */
            volatile reg::MODE1::PER PER;
          };
          struct {
            volatile char _space_COMP[0x18];
            /**
              MODE1 Compare n Value
            */
            volatile reg::MODE1::COMP COMP[2];
          };
        } MODE1;
        union {
          struct {
            /**
              MODE2 Control
            */
            volatile reg::MODE2::CTRL CTRL;
          };
          struct {
            volatile char _space_READREQ[0x2];
            /**
              Read Request
            */
            volatile reg::MODE2::READREQ READREQ;
          };
          struct {
            volatile char _space_EVCTRL[0x4];
            /**
              MODE2 Event Control
            */
            volatile reg::MODE2::EVCTRL EVCTRL;
          };
          struct {
            volatile char _space_INTENCLR[0x6];
            /**
              MODE2 Interrupt Enable Clear
            */
            volatile reg::MODE2::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0x7];
            /**
              MODE2 Interrupt Enable Set
            */
            volatile reg::MODE2::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0x8];
            /**
              MODE2 Interrupt Flag Status and Clear
            */
            volatile reg::MODE2::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0xa];
            /**
              Status
            */
            volatile reg::MODE2::STATUS STATUS;
          };
          struct {
            volatile char _space_DBGCTRL[0xb];
            /**
              Debug Control
            */
            volatile reg::MODE2::DBGCTRL DBGCTRL;
          };
          struct {
            volatile char _space_FREQCORR[0xc];
            /**
              Frequency Correction
            */
            volatile reg::MODE2::FREQCORR FREQCORR;
          };
          struct {
            volatile char _space_CLOCK[0x10];
            /**
              MODE2 Clock Value
            */
            volatile reg::MODE2::CLOCK CLOCK;
          };
          struct {
            volatile char _space_ALARM[0x18];
            /**
              MODE2 Alarm n Value
            */
            volatile reg::MODE2::ALARM ALARM;
          };
          struct {
            volatile char _space_MASK[0x1c];
            /**
              MODE2 Alarm n Mask
            */
            volatile reg::MODE2::MASK MASK;
          };
        } MODE2;
      };
    };
  }
  
  extern rtc::Peripheral RTC;
}