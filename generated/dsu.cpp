namespace target {
  namespace dsu {
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
          Gets 32-bit Cyclic Redundancy Code
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRC() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets 32-bit Cyclic Redundancy Code
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Memory built-in self-test
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMBIST() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Memory built-in self-test
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMBIST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Chip-Erase
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Chip-Erase
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Auxiliary Row Read
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARR() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Auxiliary Row Read
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Start Memory Stream Access
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSMSA() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Start Memory Stream Access
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSMSA(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
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
          Gets Done
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDONE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Done
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDONE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets CPU Reset Phase Extension
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRSTEXT() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets CPU Reset Phase Extension
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRSTEXT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Bus Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBERR() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Bus Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Failure
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFAIL() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Failure
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFAIL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Protection Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPERR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Protection Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
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
          Gets Debug Communication Channel 0 Dirty
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDCCD(int index) volatile {
          return (raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0));
        }
        /**
          Sets Debug Communication Channel 0 Dirty
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDCCD(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((value << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
        }
        /**
          Gets Debug Communication Channel 0 Dirty
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDCCD() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets Debug Communication Channel 0 Dirty
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDCCD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets Protected
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPROT() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Protected
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPROT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Debugger Present
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBGPRES() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Debugger Present
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBGPRES(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Hot-Plugging Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHPE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Hot-Plugging Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        Address
      */
      class ADDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Access Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getAMOD() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Access Mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setAMOD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Address
          @return value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long getADDR() volatile {
          return (raw & (0x3FFFFFFF << 2)) >> 2;
        }
        /**
          Sets Address
          @param value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFFFFF << 2)) | ((value << 2) & (0x3FFFFFFF << 2));
        }
      };
      
      /**
        Length
      */
      class LENGTH {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Length
          @return value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long getLENGTH() volatile {
          return (raw & (0x3FFFFFFF << 2)) >> 2;
        }
        /**
          Sets Length
          @param value in range 0..1073741823
        */
        __attribute__((always_inline)) unsigned long setLENGTH(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFFFFF << 2)) | ((value << 2) & (0x3FFFFFFF << 2));
        }
      };
      
      /**
        Data
      */
      class DATA {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Data
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Debug Communication Channel n
      */
      class DCC {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Data
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Device Identification
      */
      class DID {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Device Select
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDEVSEL() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Device Select
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDEVSEL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets Revision Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getREVISION() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Revision Number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setREVISION(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Die Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDIE() volatile {
          return (raw & (0xF << 12)) >> 12;
        }
        /**
          Sets Die Number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDIE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((value << 12) & (0xF << 12));
        }
        /**
          Gets Series
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getSERIES() volatile {
          return (raw & (0x3F << 16)) >> 16;
        }
        /**
          Sets Series
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setSERIES(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 16)) | ((value << 16) & (0x3F << 16));
        }
        /**
          Gets Family
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getFAMILY() volatile {
          return (raw & (0x1F << 23)) >> 23;
        }
        /**
          Sets Family
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setFAMILY(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 23)) | ((value << 23) & (0x1F << 23));
        }
        /**
          Gets Processor
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPROCESSOR() volatile {
          return (raw & (0xF << 28)) >> 28;
        }
        /**
          Sets Processor
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPROCESSOR(unsigned long value) volatile {
          raw = (raw & ~(0xF << 28)) | ((value << 28) & (0xF << 28));
        }
      };
      
      /**
        Device Configuration
      */
      class DCFG {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Device Configuration
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDCFG() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Device Configuration
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDCFG(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        CoreSight ROM Table Entry 0
      */
      class ENTRY0 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Entry Present
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEPRES() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Entry Present
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEPRES(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFMT() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFMT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Address Offset
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getADDOFF() volatile {
          return (raw & (0xFFFFF << 12)) >> 12;
        }
        /**
          Sets Address Offset
          @param value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long setADDOFF(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 12)) | ((value << 12) & (0xFFFFF << 12));
        }
      };
      
      /**
        CoreSight ROM Table Entry 1
      */
      class ENTRY1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
      };
      
      /**
        CoreSight ROM Table End
      */
      class END {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets End Marker
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getEND() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets End Marker
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        CoreSight ROM Table Memory Type
      */
      class MEMTYPE {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets System Memory Present
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSMEMP() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets System Memory Present
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSMEMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Peripheral Identification 4
      */
      class PID4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets JEP-106 Continuation Code
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getJEPCC() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets JEP-106 Continuation Code
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setJEPCC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets 4KB count
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getFKBC() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets 4KB count
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setFKBC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
      };
      
      /**
        Peripheral Identification 5
      */
      class PID5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
      };
      
      /**
        Peripheral Identification 6
      */
      class PID6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
      };
      
      /**
        Peripheral Identification 7
      */
      class PID7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
      };
      
      /**
        Peripheral Identification 0
      */
      class PID0 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Part Number Low
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPARTNBL() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Part Number Low
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPARTNBL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Peripheral Identification 1
      */
      class PID1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Part Number High
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPARTNBH() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Part Number High
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPARTNBH(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Low part of the JEP-106 Identity Code
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getJEPIDCL() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets Low part of the JEP-106 Identity Code
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setJEPIDCL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
      };
      
      /**
        Peripheral Identification 2
      */
      class PID2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets JEP-106 Identity Code High
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getJEPIDCH() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets JEP-106 Identity Code High
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setJEPIDCH(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets JEP-106 Identity Code is used
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getJEPU() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets JEP-106 Identity Code is used
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setJEPU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Revision Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getREVISION() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets Revision Number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setREVISION(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
      };
      
      /**
        Peripheral Identification 3
      */
      class PID3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets ARM CUSMOD
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCUSMOD() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets ARM CUSMOD
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCUSMOD(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Revision Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getREVAND() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets Revision Number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setREVAND(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
      };
      
      /**
        Component Identification 0
      */
      class CID0 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Preamble Byte 0
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPREAMBLEB0() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Preamble Byte 0
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPREAMBLEB0(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Component Identification 1
      */
      class CID1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Preamble
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPREAMBLE() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Preamble
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPREAMBLE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Component Class
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCCLASS() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets Component Class
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCCLASS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
      };
      
      /**
        Component Identification 2
      */
      class CID2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Preamble Byte 2
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPREAMBLEB2() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Preamble Byte 2
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPREAMBLEB2(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Component Identification 3
      */
      class CID3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Preamble Byte 3
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPREAMBLEB3() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Preamble Byte 3
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPREAMBLEB3(unsigned long value) volatile {
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
          volatile char _space_STATUSA[0x1];
          /**
            Status A
          */
          volatile reg::STATUSA STATUSA;
        };
        struct {
          volatile char _space_STATUSB[0x2];
          /**
            Status B
          */
          volatile reg::STATUSB STATUSB;
        };
        struct {
          volatile char _space_ADDR[0x4];
          /**
            Address
          */
          volatile reg::ADDR ADDR;
        };
        struct {
          volatile char _space_LENGTH[0x8];
          /**
            Length
          */
          volatile reg::LENGTH LENGTH;
        };
        struct {
          volatile char _space_DATA[0xc];
          /**
            Data
          */
          volatile reg::DATA DATA;
        };
        struct {
          volatile char _space_DCC[0x10];
          /**
            Debug Communication Channel n
          */
          volatile reg::DCC DCC[2];
        };
        struct {
          volatile char _space_DID[0x18];
          /**
            Device Identification
          */
          volatile reg::DID DID;
        };
        struct {
          volatile char _space_DCFG[0xf0];
          /**
            Device Configuration
          */
          volatile reg::DCFG DCFG[2];
        };
        struct {
          volatile char _space_ENTRY0[0x1000];
          /**
            CoreSight ROM Table Entry 0
          */
          volatile reg::ENTRY0 ENTRY0;
        };
        struct {
          volatile char _space_ENTRY1[0x1004];
          /**
            CoreSight ROM Table Entry 1
          */
          volatile reg::ENTRY1 ENTRY1;
        };
        struct {
          volatile char _space_END[0x1008];
          /**
            CoreSight ROM Table End
          */
          volatile reg::END END;
        };
        struct {
          volatile char _space_MEMTYPE[0x1fcc];
          /**
            CoreSight ROM Table Memory Type
          */
          volatile reg::MEMTYPE MEMTYPE;
        };
        struct {
          volatile char _space_PID4[0x1fd0];
          /**
            Peripheral Identification 4
          */
          volatile reg::PID4 PID4;
        };
        struct {
          volatile char _space_PID5[0x1fd4];
          /**
            Peripheral Identification 5
          */
          volatile reg::PID5 PID5;
        };
        struct {
          volatile char _space_PID6[0x1fd8];
          /**
            Peripheral Identification 6
          */
          volatile reg::PID6 PID6;
        };
        struct {
          volatile char _space_PID7[0x1fdc];
          /**
            Peripheral Identification 7
          */
          volatile reg::PID7 PID7;
        };
        struct {
          volatile char _space_PID0[0x1fe0];
          /**
            Peripheral Identification 0
          */
          volatile reg::PID0 PID0;
        };
        struct {
          volatile char _space_PID1[0x1fe4];
          /**
            Peripheral Identification 1
          */
          volatile reg::PID1 PID1;
        };
        struct {
          volatile char _space_PID2[0x1fe8];
          /**
            Peripheral Identification 2
          */
          volatile reg::PID2 PID2;
        };
        struct {
          volatile char _space_PID3[0x1fec];
          /**
            Peripheral Identification 3
          */
          volatile reg::PID3 PID3;
        };
        struct {
          volatile char _space_CID0[0x1ff0];
          /**
            Component Identification 0
          */
          volatile reg::CID0 CID0;
        };
        struct {
          volatile char _space_CID1[0x1ff4];
          /**
            Component Identification 1
          */
          volatile reg::CID1 CID1;
        };
        struct {
          volatile char _space_CID2[0x1ff8];
          /**
            Component Identification 2
          */
          volatile reg::CID2 CID2;
        };
        struct {
          volatile char _space_CID3[0x1ffc];
          /**
            Component Identification 3
          */
          volatile reg::CID3 CID3;
        };
      };
    };
  }
  
  extern dsu::Peripheral DSU;
}