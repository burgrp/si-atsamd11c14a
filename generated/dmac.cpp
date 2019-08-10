namespace target {
  namespace dmac {
    namespace reg {
      
      /**
        Control
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
          Gets Priority Level 0 Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLVLEN(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0));
        }
        /**
          Sets Priority Level 0 Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLVLEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((value << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
        }
        /**
          Gets Priority Level 0 Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getLVLEN() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Priority Level 0 Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setLVLEN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
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
          Gets DMA Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets DMA Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets CRC Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCENABLE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets CRC Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        CRC Control
      */
      class CRCCTRL {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CRC Beat Size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCRCBEATSIZE() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets CRC Beat Size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCRCBEATSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets CRC Polynomial Type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCRCPOLY() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets CRC Polynomial Type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCRCPOLY(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets CRC Input Source
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCRCSRC() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets CRC Input Source
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setCRCSRC(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
        }
      };
      
      /**
        CRC Data Input
      */
      class CRCDATAIN {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CRC Data Input
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCRCDATAIN() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets CRC Data Input
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setCRCDATAIN(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        CRC Checksum
      */
      class CRCCHKSUM {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CRC Checksum
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCRCCHKSUM() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets CRC Checksum
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setCRCCHKSUM(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        CRC Status
      */
      class CRCSTATUS {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CRC Module Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCBUSY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets CRC Module Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets CRC Zero
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCZERO() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets CRC Zero
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCZERO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
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
          Gets Debug Run
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBGRUN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Debug Run
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBGRUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        QOS Control
      */
      class QOSCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Write-Back Quality of Service
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWRBQOS() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Write-Back Quality of Service
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setWRBQOS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Fetch Quality of Service
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFQOS() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets Fetch Quality of Service
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFQOS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets Data Transfer Quality of Service
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDQOS() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Data Transfer Quality of Service
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDQOS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
      };
      
      /**
        Software Trigger Control
      */
      class SWTRIGCTRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel 0 Software Trigger
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWTRIG(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Software Trigger
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWTRIG(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Software Trigger
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getSWTRIG() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Channel 0 Software Trigger
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setSWTRIG(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
      };
      
      /**
        Priority Control 0
      */
      class PRICTRL0 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Level 0 Channel Priority Number
          @param index in range 0..3
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getLVLPRI(int index) volatile {
          return (raw & (0x7 << (0 + 8 * (index - 0)))) >> (0 + 8 * (index - 0));
        }
        /**
          Sets Level 0 Channel Priority Number
          @param index in range 0..3
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setLVLPRI(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (0 + 8 * (index - 0)))) | ((value << (0 + 8 * (index - 0))) & (0x7 << (0 + 8 * (index - 0))));
        }
        /**
          Gets Level 0 Channel Priority Number
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getLVLPRI() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Level 0 Channel Priority Number
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setLVLPRI(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
        /**
          Gets Level 0 Round-Robin Scheduling Enable
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRRLVLEN(int index) volatile {
          return (raw & (0x1 << (7 + 8 * (index - 0)))) >> (7 + 8 * (index - 0));
        }
        /**
          Sets Level 0 Round-Robin Scheduling Enable
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRRLVLEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 0)))) | ((value << (7 + 8 * (index - 0))) & (0x1 << (7 + 8 * (index - 0))));
        }
        /**
          Gets Level 0 Round-Robin Scheduling Enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getRRLVLEN() volatile {
          return (raw & (0xF << 7)) >> 7;
        }
        /**
          Sets Level 0 Round-Robin Scheduling Enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setRRLVLEN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 7)) | ((value << 7) & (0xF << 7));
        }
      };
      
      /**
        Interrupt Pending
      */
      class INTPEND {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel ID
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Channel ID
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setID(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets Transfer Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTERR() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Transfer Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Transfer Complete
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCMPL() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Transfer Complete
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCMPL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Channel Suspend
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUSP() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Channel Suspend
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUSP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Fetch Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFERR() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Fetch Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBUSY() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Pending
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPEND() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Pending
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPEND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        Interrupt Status
      */
      class INTSTATUS {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel 0 Pending Interrupt
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCHINT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Channel 0 Pending Interrupt
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCHINT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Channel 0 Pending Interrupt
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCHINT() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Channel 0 Pending Interrupt
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setCHINT(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
      };
      
      /**
        Busy Channels
      */
      class BUSYCH {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Busy Channel 0
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBUSYCH(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Busy Channel 0
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBUSYCH(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Busy Channel 0
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getBUSYCH() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Busy Channel 0
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setBUSYCH(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
      };
      
      /**
        Pending Channels
      */
      class PENDCH {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Pending Channel 0
          @param index in range 0..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPENDCH(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Pending Channel 0
          @param index in range 0..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPENDCH(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Pending Channel 0
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getPENDCH() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Pending Channel 0
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setPENDCH(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
      };
      
      /**
        Active Channel and Levels
      */
      class ACTIVE {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Level 0 Channel Trigger Request Executing
          @param index in range 0..3
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLVLEX(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Level 0 Channel Trigger Request Executing
          @param index in range 0..3
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLVLEX(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Level 0 Channel Trigger Request Executing
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getLVLEX() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Level 0 Channel Trigger Request Executing
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setLVLEX(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Active Channel ID
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return (raw & (0x1F << 8)) >> 8;
        }
        /**
          Sets Active Channel ID
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setID(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((value << 8) & (0x1F << 8));
        }
        /**
          Gets Active Channel Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getABUSY() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Active Channel Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setABUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Active Channel Block Transfer Count
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getBTCNT() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Active Channel Block Transfer Count
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setBTCNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
      };
      
      /**
        Descriptor Memory Section Base Address
      */
      class BASEADDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Descriptor Memory Base Address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBASEADDR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Descriptor Memory Base Address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBASEADDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Write-Back Memory Section Base Address
      */
      class WRBADDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Write-Back Memory Base Address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getWRBADDR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Write-Back Memory Base Address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setWRBADDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Channel ID
      */
      class CHID {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel ID
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Channel ID
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setID(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        Channel Control A
      */
      class CHCTRLA {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel Software Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWRST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel Software Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Channel Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Channel Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        Channel Control B
      */
      class CHCTRLB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Event Input Action
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getEVACT() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Event Input Action
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setEVACT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets Channel Event Input Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEVIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Channel Event Input Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEVIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Channel Event Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEVOE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Channel Event Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEVOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Channel Arbitration Level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLVL() volatile {
          return (raw & (0x3 << 5)) >> 5;
        }
        /**
          Sets Channel Arbitration Level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setLVL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
        }
        /**
          Gets Trigger Source
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getTRIGSRC() volatile {
          return (raw & (0x1F << 8)) >> 8;
        }
        /**
          Sets Trigger Source
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setTRIGSRC(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((value << 8) & (0x1F << 8));
        }
        /**
          Gets Trigger Action
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTRIGACT() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets Trigger Action
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTRIGACT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets Software Command
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCMD() volatile {
          return (raw & (0x3 << 24)) >> 24;
        }
        /**
          Sets Software Command
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 24)) | ((value << 24) & (0x3 << 24));
        }
      };
      
      /**
        Channel Interrupt Enable Clear
      */
      class CHINTENCLR {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel Transfer Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTERR() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel Transfer Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Channel Transfer Complete Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCMPL() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Channel Transfer Complete Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCMPL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel Suspend Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUSP() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Channel Suspend Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUSP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Channel Interrupt Enable Set
      */
      class CHINTENSET {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel Transfer Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTERR() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel Transfer Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Channel Transfer Complete Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCMPL() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Channel Transfer Complete Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCMPL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel Suspend Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUSP() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Channel Suspend Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUSP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Channel Interrupt Flag Status and Clear
      */
      class CHINTFLAG {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel Transfer Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTERR() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel Transfer Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Channel Transfer Complete
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCMPL() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Channel Transfer Complete
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCMPL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel Suspend
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUSP() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Channel Suspend
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUSP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Channel Status
      */
      class CHSTATUS {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel Pending
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPEND() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel Pending
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPEND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Channel Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBUSY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Channel Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBUSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Channel Fetch Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFERR() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Channel Fetch Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
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
          volatile char _space_CRCCTRL[0x2];
          /**
            CRC Control
          */
          volatile reg::CRCCTRL CRCCTRL;
        };
        struct {
          volatile char _space_CRCDATAIN[0x4];
          /**
            CRC Data Input
          */
          volatile reg::CRCDATAIN CRCDATAIN;
        };
        struct {
          volatile char _space_CRCCHKSUM[0x8];
          /**
            CRC Checksum
          */
          volatile reg::CRCCHKSUM CRCCHKSUM;
        };
        struct {
          volatile char _space_CRCSTATUS[0xc];
          /**
            CRC Status
          */
          volatile reg::CRCSTATUS CRCSTATUS;
        };
        struct {
          volatile char _space_DBGCTRL[0xd];
          /**
            Debug Control
          */
          volatile reg::DBGCTRL DBGCTRL;
        };
        struct {
          volatile char _space_QOSCTRL[0xe];
          /**
            QOS Control
          */
          volatile reg::QOSCTRL QOSCTRL;
        };
        struct {
          volatile char _space_SWTRIGCTRL[0x10];
          /**
            Software Trigger Control
          */
          volatile reg::SWTRIGCTRL SWTRIGCTRL;
        };
        struct {
          volatile char _space_PRICTRL0[0x14];
          /**
            Priority Control 0
          */
          volatile reg::PRICTRL0 PRICTRL0;
        };
        struct {
          volatile char _space_INTPEND[0x20];
          /**
            Interrupt Pending
          */
          volatile reg::INTPEND INTPEND;
        };
        struct {
          volatile char _space_INTSTATUS[0x24];
          /**
            Interrupt Status
          */
          volatile reg::INTSTATUS INTSTATUS;
        };
        struct {
          volatile char _space_BUSYCH[0x28];
          /**
            Busy Channels
          */
          volatile reg::BUSYCH BUSYCH;
        };
        struct {
          volatile char _space_PENDCH[0x2c];
          /**
            Pending Channels
          */
          volatile reg::PENDCH PENDCH;
        };
        struct {
          volatile char _space_ACTIVE[0x30];
          /**
            Active Channel and Levels
          */
          volatile reg::ACTIVE ACTIVE;
        };
        struct {
          volatile char _space_BASEADDR[0x34];
          /**
            Descriptor Memory Section Base Address
          */
          volatile reg::BASEADDR BASEADDR;
        };
        struct {
          volatile char _space_WRBADDR[0x38];
          /**
            Write-Back Memory Section Base Address
          */
          volatile reg::WRBADDR WRBADDR;
        };
        struct {
          volatile char _space_CHID[0x3f];
          /**
            Channel ID
          */
          volatile reg::CHID CHID;
        };
        struct {
          volatile char _space_CHCTRLA[0x40];
          /**
            Channel Control A
          */
          volatile reg::CHCTRLA CHCTRLA;
        };
        struct {
          volatile char _space_CHCTRLB[0x44];
          /**
            Channel Control B
          */
          volatile reg::CHCTRLB CHCTRLB;
        };
        struct {
          volatile char _space_CHINTENCLR[0x4c];
          /**
            Channel Interrupt Enable Clear
          */
          volatile reg::CHINTENCLR CHINTENCLR;
        };
        struct {
          volatile char _space_CHINTENSET[0x4d];
          /**
            Channel Interrupt Enable Set
          */
          volatile reg::CHINTENSET CHINTENSET;
        };
        struct {
          volatile char _space_CHINTFLAG[0x4e];
          /**
            Channel Interrupt Flag Status and Clear
          */
          volatile reg::CHINTFLAG CHINTFLAG;
        };
        struct {
          volatile char _space_CHSTATUS[0x4f];
          /**
            Channel Status
          */
          volatile reg::CHSTATUS CHSTATUS;
        };
      };
    };
  }
  
  extern dmac::Peripheral DMAC;
}