namespace target {
  namespace dmac {
    
    /**
      Control
    */
    namespace CTRL {
      class Register {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Priority Level 0 Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getLVLEN(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Priority Level 0 Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLVLEN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Software Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWRST() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Software Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets DMA Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDMAENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets DMA Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDMAENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets CRC Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRCENABLE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets CRC Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRCENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CRC Control
    */
    namespace CRCCTRL {
      enum class CRCBEATSIZE {
        // 8-bit bus transfer
        BYTE = 0x0,
        // 16-bit bus transfer
        HWORD = 0x1,
        // 32-bit bus transfer
        WORD = 0x2,
      };
      
      enum class CRCPOLY {
        // CRC-16 (CRC-CCITT)
        CRC16 = 0x0,
        // CRC32 (IEEE 802.3)
        CRC32 = 0x1,
      };
      
      enum class CRCSRC {
        // No action
        NOACT = 0x0,
        // I/O interface
        IO = 0x1,
      };
      
      class Register {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets CRC Beat Size
          @return enumeration value:
          target::dmac::CRCCTRL::CRCBEATSIZE::BYTE (0x0) 8-bit bus transfer
          target::dmac::CRCCTRL::CRCBEATSIZE::HWORD (0x1) 16-bit bus transfer
          target::dmac::CRCCTRL::CRCBEATSIZE::WORD (0x2) 32-bit bus transfer
        */
        __attribute__((always_inline)) target::dmac::CRCCTRL::CRCBEATSIZE getCRCBEATSIZE() volatile {
          return static_cast<target::dmac::CRCCTRL::CRCBEATSIZE>((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets CRC Beat Size
          @param value enumeration value:
          target::dmac::CRCCTRL::CRCBEATSIZE::BYTE (0x0) 8-bit bus transfer
          target::dmac::CRCCTRL::CRCBEATSIZE::HWORD (0x1) 16-bit bus transfer
          target::dmac::CRCCTRL::CRCBEATSIZE::WORD (0x2) 32-bit bus transfer
        */
        __attribute__((always_inline)) Register& setCRCBEATSIZE(target::dmac::CRCCTRL::CRCBEATSIZE value) volatile {
          raw = (raw & ~(0x3 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets CRC Polynomial Type
          @return enumeration value:
          target::dmac::CRCCTRL::CRCPOLY::CRC16 (0x0) CRC-16 (CRC-CCITT)
          target::dmac::CRCCTRL::CRCPOLY::CRC32 (0x1) CRC32 (IEEE 802.3)
        */
        __attribute__((always_inline)) target::dmac::CRCCTRL::CRCPOLY getCRCPOLY() volatile {
          return static_cast<target::dmac::CRCCTRL::CRCPOLY>((raw & (0x3 << 2)) >> 2);
        }
        /**
          Sets CRC Polynomial Type
          @param value enumeration value:
          target::dmac::CRCCTRL::CRCPOLY::CRC16 (0x0) CRC-16 (CRC-CCITT)
          target::dmac::CRCCTRL::CRCPOLY::CRC32 (0x1) CRC32 (IEEE 802.3)
        */
        __attribute__((always_inline)) Register& setCRCPOLY(target::dmac::CRCCTRL::CRCPOLY value) volatile {
          raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
          return *(Register*)this;
        }
        /**
          Gets CRC Input Source
          @return enumeration value:
          target::dmac::CRCCTRL::CRCSRC::NOACT (0x0) No action
          target::dmac::CRCCTRL::CRCSRC::IO (0x1) I/O interface
        */
        __attribute__((always_inline)) target::dmac::CRCCTRL::CRCSRC getCRCSRC() volatile {
          return static_cast<target::dmac::CRCCTRL::CRCSRC>((raw & (0x3F << 8)) >> 8);
        }
        /**
          Sets CRC Input Source
          @param value enumeration value:
          target::dmac::CRCCTRL::CRCSRC::NOACT (0x0) No action
          target::dmac::CRCCTRL::CRCSRC::IO (0x1) I/O interface
        */
        __attribute__((always_inline)) Register& setCRCSRC(target::dmac::CRCCTRL::CRCSRC value) volatile {
          raw = (raw & ~(0x3F << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x3F << 8));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CRC Data Input
    */
    namespace CRCDATAIN {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets CRC Data Input
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCRCDATAIN() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets CRC Data Input
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setCRCDATAIN(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CRC Checksum
    */
    namespace CRCCHKSUM {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets CRC Checksum
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCRCCHKSUM() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets CRC Checksum
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setCRCCHKSUM(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CRC Status
    */
    namespace CRCSTATUS {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets CRC Module Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRCBUSY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets CRC Module Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRCBUSY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets CRC Zero
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRCZERO() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets CRC Zero
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRCZERO(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Debug Control
    */
    namespace DBGCTRL {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Debug Run
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBGRUN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Debug Run
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      QOS Control
    */
    namespace QOSCTRL {
      enum class WRBQOS {
        // Background (no sensitive operation)
        DISABLE = 0x0,
        // Sensitive Bandwidth
        LOW = 0x1,
        // Sensitive Latency
        MEDIUM = 0x2,
        // Critical Latency
        HIGH = 0x3,
      };
      
      enum class FQOS {
        // Background (no sensitive operation)
        DISABLE = 0x0,
        // Sensitive Bandwidth
        LOW = 0x1,
        // Sensitive Latency
        MEDIUM = 0x2,
        // Critical Latency
        HIGH = 0x3,
      };
      
      enum class DQOS {
        // Background (no sensitive operation)
        DISABLE = 0x0,
        // Sensitive Bandwidth
        LOW = 0x1,
        // Sensitive Latency
        MEDIUM = 0x2,
        // Critical Latency
        HIGH = 0x3,
      };
      
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Write-Back Quality of Service
          @return enumeration value:
          target::dmac::QOSCTRL::WRBQOS::DISABLE (0x0) Background (no sensitive operation)
          target::dmac::QOSCTRL::WRBQOS::LOW (0x1) Sensitive Bandwidth
          target::dmac::QOSCTRL::WRBQOS::MEDIUM (0x2) Sensitive Latency
          target::dmac::QOSCTRL::WRBQOS::HIGH (0x3) Critical Latency
        */
        __attribute__((always_inline)) target::dmac::QOSCTRL::WRBQOS getWRBQOS() volatile {
          return static_cast<target::dmac::QOSCTRL::WRBQOS>((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Write-Back Quality of Service
          @param value enumeration value:
          target::dmac::QOSCTRL::WRBQOS::DISABLE (0x0) Background (no sensitive operation)
          target::dmac::QOSCTRL::WRBQOS::LOW (0x1) Sensitive Bandwidth
          target::dmac::QOSCTRL::WRBQOS::MEDIUM (0x2) Sensitive Latency
          target::dmac::QOSCTRL::WRBQOS::HIGH (0x3) Critical Latency
        */
        __attribute__((always_inline)) Register& setWRBQOS(target::dmac::QOSCTRL::WRBQOS value) volatile {
          raw = (raw & ~(0x3 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets Fetch Quality of Service
          @return enumeration value:
          target::dmac::QOSCTRL::FQOS::DISABLE (0x0) Background (no sensitive operation)
          target::dmac::QOSCTRL::FQOS::LOW (0x1) Sensitive Bandwidth
          target::dmac::QOSCTRL::FQOS::MEDIUM (0x2) Sensitive Latency
          target::dmac::QOSCTRL::FQOS::HIGH (0x3) Critical Latency
        */
        __attribute__((always_inline)) target::dmac::QOSCTRL::FQOS getFQOS() volatile {
          return static_cast<target::dmac::QOSCTRL::FQOS>((raw & (0x3 << 2)) >> 2);
        }
        /**
          Sets Fetch Quality of Service
          @param value enumeration value:
          target::dmac::QOSCTRL::FQOS::DISABLE (0x0) Background (no sensitive operation)
          target::dmac::QOSCTRL::FQOS::LOW (0x1) Sensitive Bandwidth
          target::dmac::QOSCTRL::FQOS::MEDIUM (0x2) Sensitive Latency
          target::dmac::QOSCTRL::FQOS::HIGH (0x3) Critical Latency
        */
        __attribute__((always_inline)) Register& setFQOS(target::dmac::QOSCTRL::FQOS value) volatile {
          raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
          return *(Register*)this;
        }
        /**
          Gets Data Transfer Quality of Service
          @return enumeration value:
          target::dmac::QOSCTRL::DQOS::DISABLE (0x0) Background (no sensitive operation)
          target::dmac::QOSCTRL::DQOS::LOW (0x1) Sensitive Bandwidth
          target::dmac::QOSCTRL::DQOS::MEDIUM (0x2) Sensitive Latency
          target::dmac::QOSCTRL::DQOS::HIGH (0x3) Critical Latency
        */
        __attribute__((always_inline)) target::dmac::QOSCTRL::DQOS getDQOS() volatile {
          return static_cast<target::dmac::QOSCTRL::DQOS>((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Data Transfer Quality of Service
          @param value enumeration value:
          target::dmac::QOSCTRL::DQOS::DISABLE (0x0) Background (no sensitive operation)
          target::dmac::QOSCTRL::DQOS::LOW (0x1) Sensitive Bandwidth
          target::dmac::QOSCTRL::DQOS::MEDIUM (0x2) Sensitive Latency
          target::dmac::QOSCTRL::DQOS::HIGH (0x3) Critical Latency
        */
        __attribute__((always_inline)) Register& setDQOS(target::dmac::QOSCTRL::DQOS value) volatile {
          raw = (raw & ~(0x3 << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Software Trigger Control
    */
    namespace SWTRIGCTRL {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel 0 Software Trigger
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWTRIG(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Software Trigger
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWTRIG(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Priority Control 0
    */
    namespace PRICTRL0 {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Level 0 Channel Priority Number
          @param index in range 0..3
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getLVLPRI(int index) volatile {
          return ((raw & (0x7 << (0 + 8 * (index - 0)))) >> (0 + 8 * (index - 0)));
        }
        /**
          Sets Level 0 Channel Priority Number
          @param index in range 0..3
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setLVLPRI(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (0 + 8 * (index - 0)))) | ((((value)) << (0 + 8 * (index - 0))) & (0x7 << (0 + 8 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Level 0 Round-Robin Scheduling Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getRRLVLEN(int index) volatile {
          return ((raw & (0x1 << (7 + 8 * (index - 0)))) >> (7 + 8 * (index - 0)));
        }
        /**
          Sets Level 0 Round-Robin Scheduling Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRRLVLEN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 0)))) | ((((value)) << (7 + 8 * (index - 0))) & (0x1 << (7 + 8 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Pending
    */
    namespace INTPEND {
      class Register {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel ID
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return ((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Channel ID
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setID(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transfer Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getTERR() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Transfer Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTERR(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Transfer Complete
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCMPL() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Transfer Complete
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCMPL(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Channel Suspend
          @return boolean value
        */
        __attribute__((always_inline)) bool getSUSP() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Channel Suspend
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSUSP(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Fetch Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getFERR() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Fetch Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFERR(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getBUSY() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBUSY(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Pending
          @return boolean value
        */
        __attribute__((always_inline)) bool getPEND() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Pending
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPEND(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Status
    */
    namespace INTSTATUS {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel 0 Pending Interrupt
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getCHINT(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Pending Interrupt
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCHINT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Busy Channels
    */
    namespace BUSYCH {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Busy Channel 0
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getBUSYCH(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Busy Channel 0
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBUSYCH(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Pending Channels
    */
    namespace PENDCH {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Pending Channel 0
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getPENDCH(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Pending Channel 0
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPENDCH(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Active Channel and Levels
    */
    namespace ACTIVE {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Level 0 Channel Trigger Request Executing
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getLVLEX(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Level 0 Channel Trigger Request Executing
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLVLEX(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Active Channel ID
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return ((raw & (0x1F << 8)) >> 8);
        }
        /**
          Sets Active Channel ID
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setID(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((((value)) << 8) & (0x1F << 8));
          return *(Register*)this;
        }
        /**
          Gets Active Channel Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getABUSY() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Active Channel Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setABUSY(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Active Channel Block Transfer Count
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getBTCNT() volatile {
          return ((raw & (0xFFFF << 16)) >> 16);
        }
        /**
          Sets Active Channel Block Transfer Count
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setBTCNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((((value)) << 16) & (0xFFFF << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Descriptor Memory Section Base Address
    */
    namespace BASEADDR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Descriptor Memory Base Address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBASEADDR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Descriptor Memory Base Address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setBASEADDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Write-Back Memory Section Base Address
    */
    namespace WRBADDR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Write-Back Memory Base Address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getWRBADDR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Write-Back Memory Base Address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setWRBADDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel ID
    */
    namespace CHID {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel ID
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getID() volatile {
          return ((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Channel ID
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setID(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel Control A
    */
    namespace CHCTRLA {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel Software Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWRST() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel Software Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Channel Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel Control B
    */
    namespace CHCTRLB {
      enum class EVACT {
        // No action
        NOACT = 0x0,
        // Transfer and periodic transfer trigger
        TRIG = 0x1,
        // Conditional transfer trigger
        CTRIG = 0x2,
        // Conditional block transfer
        CBLOCK = 0x3,
        // Channel suspend operation
        SUSPEND = 0x4,
        // Channel resume operation
        RESUME = 0x5,
        // Skip next block suspend action
        SSKIP = 0x6,
      };
      
      enum class LVL {
        // Channel Priority Level 0
        LVL0 = 0x0,
        // Channel Priority Level 1
        LVL1 = 0x1,
        // Channel Priority Level 2
        LVL2 = 0x2,
        // Channel Priority Level 3
        LVL3 = 0x3,
      };
      
      enum class TRIGSRC {
        // Only software/event triggers
        DISABLE = 0x0,
      };
      
      enum class TRIGACT {
        // One trigger required for each block transfer
        BLOCK = 0x0,
        // One trigger required for each beat transfer
        BEAT = 0x2,
        // One trigger required for each transaction
        TRANSACTION = 0x3,
      };
      
      enum class CMD {
        // No action
        NOACT = 0x0,
        // Channel suspend operation
        SUSPEND = 0x1,
        // Channel resume operation
        RESUME = 0x2,
      };
      
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Event Input Action
          @return enumeration value:
          target::dmac::CHCTRLB::EVACT::NOACT (0x0) No action
          target::dmac::CHCTRLB::EVACT::TRIG (0x1) Transfer and periodic transfer trigger
          target::dmac::CHCTRLB::EVACT::CTRIG (0x2) Conditional transfer trigger
          target::dmac::CHCTRLB::EVACT::CBLOCK (0x3) Conditional block transfer
          target::dmac::CHCTRLB::EVACT::SUSPEND (0x4) Channel suspend operation
          target::dmac::CHCTRLB::EVACT::RESUME (0x5) Channel resume operation
          target::dmac::CHCTRLB::EVACT::SSKIP (0x6) Skip next block suspend action
        */
        __attribute__((always_inline)) target::dmac::CHCTRLB::EVACT getEVACT() volatile {
          return static_cast<target::dmac::CHCTRLB::EVACT>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Event Input Action
          @param value enumeration value:
          target::dmac::CHCTRLB::EVACT::NOACT (0x0) No action
          target::dmac::CHCTRLB::EVACT::TRIG (0x1) Transfer and periodic transfer trigger
          target::dmac::CHCTRLB::EVACT::CTRIG (0x2) Conditional transfer trigger
          target::dmac::CHCTRLB::EVACT::CBLOCK (0x3) Conditional block transfer
          target::dmac::CHCTRLB::EVACT::SUSPEND (0x4) Channel suspend operation
          target::dmac::CHCTRLB::EVACT::RESUME (0x5) Channel resume operation
          target::dmac::CHCTRLB::EVACT::SSKIP (0x6) Skip next block suspend action
        */
        __attribute__((always_inline)) Register& setEVACT(target::dmac::CHCTRLB::EVACT value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Event Input Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEVIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Channel Event Input Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEVIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Channel Event Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEVOE() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Channel Event Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEVOE(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Channel Arbitration Level
          @return enumeration value:
          target::dmac::CHCTRLB::LVL::LVL0 (0x0) Channel Priority Level 0
          target::dmac::CHCTRLB::LVL::LVL1 (0x1) Channel Priority Level 1
          target::dmac::CHCTRLB::LVL::LVL2 (0x2) Channel Priority Level 2
          target::dmac::CHCTRLB::LVL::LVL3 (0x3) Channel Priority Level 3
        */
        __attribute__((always_inline)) target::dmac::CHCTRLB::LVL getLVL() volatile {
          return static_cast<target::dmac::CHCTRLB::LVL>((raw & (0x3 << 5)) >> 5);
        }
        /**
          Sets Channel Arbitration Level
          @param value enumeration value:
          target::dmac::CHCTRLB::LVL::LVL0 (0x0) Channel Priority Level 0
          target::dmac::CHCTRLB::LVL::LVL1 (0x1) Channel Priority Level 1
          target::dmac::CHCTRLB::LVL::LVL2 (0x2) Channel Priority Level 2
          target::dmac::CHCTRLB::LVL::LVL3 (0x3) Channel Priority Level 3
        */
        __attribute__((always_inline)) Register& setLVL(target::dmac::CHCTRLB::LVL value) volatile {
          raw = (raw & ~(0x3 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x3 << 5));
          return *(Register*)this;
        }
        /**
          Gets Trigger Source
          @return enumeration value:
          target::dmac::CHCTRLB::TRIGSRC::DISABLE (0x0) Only software/event triggers
        */
        __attribute__((always_inline)) target::dmac::CHCTRLB::TRIGSRC getTRIGSRC() volatile {
          return static_cast<target::dmac::CHCTRLB::TRIGSRC>((raw & (0x1F << 8)) >> 8);
        }
        /**
          Sets Trigger Source
          @param value enumeration value:
          target::dmac::CHCTRLB::TRIGSRC::DISABLE (0x0) Only software/event triggers
        */
        __attribute__((always_inline)) Register& setTRIGSRC(target::dmac::CHCTRLB::TRIGSRC value) volatile {
          raw = (raw & ~(0x1F << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x1F << 8));
          return *(Register*)this;
        }
        /**
          Gets Trigger Action
          @return enumeration value:
          target::dmac::CHCTRLB::TRIGACT::BLOCK (0x0) One trigger required for each block transfer
          target::dmac::CHCTRLB::TRIGACT::BEAT (0x2) One trigger required for each beat transfer
          target::dmac::CHCTRLB::TRIGACT::TRANSACTION (0x3) One trigger required for each transaction
        */
        __attribute__((always_inline)) target::dmac::CHCTRLB::TRIGACT getTRIGACT() volatile {
          return static_cast<target::dmac::CHCTRLB::TRIGACT>((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets Trigger Action
          @param value enumeration value:
          target::dmac::CHCTRLB::TRIGACT::BLOCK (0x0) One trigger required for each block transfer
          target::dmac::CHCTRLB::TRIGACT::BEAT (0x2) One trigger required for each beat transfer
          target::dmac::CHCTRLB::TRIGACT::TRANSACTION (0x3) One trigger required for each transaction
        */
        __attribute__((always_inline)) Register& setTRIGACT(target::dmac::CHCTRLB::TRIGACT value) volatile {
          raw = (raw & ~(0x3 << 22)) | (((static_cast<unsigned long>(value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets Software Command
          @return enumeration value:
          target::dmac::CHCTRLB::CMD::NOACT (0x0) No action
          target::dmac::CHCTRLB::CMD::SUSPEND (0x1) Channel suspend operation
          target::dmac::CHCTRLB::CMD::RESUME (0x2) Channel resume operation
        */
        __attribute__((always_inline)) target::dmac::CHCTRLB::CMD getCMD() volatile {
          return static_cast<target::dmac::CHCTRLB::CMD>((raw & (0x3 << 24)) >> 24);
        }
        /**
          Sets Software Command
          @param value enumeration value:
          target::dmac::CHCTRLB::CMD::NOACT (0x0) No action
          target::dmac::CHCTRLB::CMD::SUSPEND (0x1) Channel suspend operation
          target::dmac::CHCTRLB::CMD::RESUME (0x2) Channel resume operation
        */
        __attribute__((always_inline)) Register& setCMD(target::dmac::CHCTRLB::CMD value) volatile {
          raw = (raw & ~(0x3 << 24)) | (((static_cast<unsigned long>(value)) << 24) & (0x3 << 24));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel Interrupt Enable Clear
    */
    namespace CHINTENCLR {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel Transfer Error Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTERR() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel Transfer Error Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTERR(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Transfer Complete Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCMPL() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Channel Transfer Complete Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCMPL(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Channel Suspend Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSUSP() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Channel Suspend Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSUSP(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel Interrupt Enable Set
    */
    namespace CHINTENSET {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel Transfer Error Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTERR() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel Transfer Error Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTERR(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Transfer Complete Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCMPL() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Channel Transfer Complete Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCMPL(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Channel Suspend Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSUSP() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Channel Suspend Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSUSP(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel Interrupt Flag Status and Clear
    */
    namespace CHINTFLAG {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel Transfer Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getTERR() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel Transfer Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTERR(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Transfer Complete
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCMPL() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Channel Transfer Complete
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCMPL(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Channel Suspend
          @return boolean value
        */
        __attribute__((always_inline)) bool getSUSP() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Channel Suspend
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSUSP(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel Status
    */
    namespace CHSTATUS {
      class Register {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Returns copy of the register
        */
        __attribute__((always_inline)) Register copy() volatile {
          Register reg;
          reg.raw = this->raw;
          return reg;
        }
        /**
          Returns empty copy of the register
        */
        __attribute__((always_inline)) Register bare() volatile {
          Register reg;
          reg.raw = 0;
          return reg;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Channel Pending
          @return boolean value
        */
        __attribute__((always_inline)) bool getPEND() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel Pending
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPEND(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getBUSY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Channel Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBUSY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Channel Fetch Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getFERR() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Channel Fetch Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFERR(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
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
          CTRL::Register CTRL;
        };
        struct {
          char _space_CRCCTRL[0x2];
          /**
            CRC Control
          */
          CRCCTRL::Register CRCCTRL;
        };
        struct {
          char _space_CRCDATAIN[0x4];
          /**
            CRC Data Input
          */
          CRCDATAIN::Register CRCDATAIN;
        };
        struct {
          char _space_CRCCHKSUM[0x8];
          /**
            CRC Checksum
          */
          CRCCHKSUM::Register CRCCHKSUM;
        };
        struct {
          char _space_CRCSTATUS[0xc];
          /**
            CRC Status
          */
          CRCSTATUS::Register CRCSTATUS;
        };
        struct {
          char _space_DBGCTRL[0xd];
          /**
            Debug Control
          */
          DBGCTRL::Register DBGCTRL;
        };
        struct {
          char _space_QOSCTRL[0xe];
          /**
            QOS Control
          */
          QOSCTRL::Register QOSCTRL;
        };
        struct {
          char _space_SWTRIGCTRL[0x10];
          /**
            Software Trigger Control
          */
          SWTRIGCTRL::Register SWTRIGCTRL;
        };
        struct {
          char _space_PRICTRL0[0x14];
          /**
            Priority Control 0
          */
          PRICTRL0::Register PRICTRL0;
        };
        struct {
          char _space_INTPEND[0x20];
          /**
            Interrupt Pending
          */
          INTPEND::Register INTPEND;
        };
        struct {
          char _space_INTSTATUS[0x24];
          /**
            Interrupt Status
          */
          INTSTATUS::Register INTSTATUS;
        };
        struct {
          char _space_BUSYCH[0x28];
          /**
            Busy Channels
          */
          BUSYCH::Register BUSYCH;
        };
        struct {
          char _space_PENDCH[0x2c];
          /**
            Pending Channels
          */
          PENDCH::Register PENDCH;
        };
        struct {
          char _space_ACTIVE[0x30];
          /**
            Active Channel and Levels
          */
          ACTIVE::Register ACTIVE;
        };
        struct {
          char _space_BASEADDR[0x34];
          /**
            Descriptor Memory Section Base Address
          */
          BASEADDR::Register BASEADDR;
        };
        struct {
          char _space_WRBADDR[0x38];
          /**
            Write-Back Memory Section Base Address
          */
          WRBADDR::Register WRBADDR;
        };
        struct {
          char _space_CHID[0x3f];
          /**
            Channel ID
          */
          CHID::Register CHID;
        };
        struct {
          char _space_CHCTRLA[0x40];
          /**
            Channel Control A
          */
          CHCTRLA::Register CHCTRLA;
        };
        struct {
          char _space_CHCTRLB[0x44];
          /**
            Channel Control B
          */
          CHCTRLB::Register CHCTRLB;
        };
        struct {
          char _space_CHINTENCLR[0x4c];
          /**
            Channel Interrupt Enable Clear
          */
          CHINTENCLR::Register CHINTENCLR;
        };
        struct {
          char _space_CHINTENSET[0x4d];
          /**
            Channel Interrupt Enable Set
          */
          CHINTENSET::Register CHINTENSET;
        };
        struct {
          char _space_CHINTFLAG[0x4e];
          /**
            Channel Interrupt Flag Status and Clear
          */
          CHINTFLAG::Register CHINTFLAG;
        };
        struct {
          char _space_CHSTATUS[0x4f];
          /**
            Channel Status
          */
          CHSTATUS::Register CHSTATUS;
        };
      };
    };
  }
  
  extern volatile dmac::Peripheral DMAC;
}