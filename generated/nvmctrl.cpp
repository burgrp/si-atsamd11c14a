namespace target {
  namespace nvmctrl {
    namespace reg {
      
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
          Gets Command
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getCMD() volatile {
          return (raw & (0x7F << 0)) >> 0;
        }
        /**
          Sets Command
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
        }
        /**
          Gets Command Execution
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getCMDEX() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets Command Execution
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setCMDEX(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
      };
      
      /**
        Control B
      */
      class CTRLB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets NVM Read Wait States
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getRWS() volatile {
          return (raw & (0xF << 1)) >> 1;
        }
        /**
          Sets NVM Read Wait States
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setRWS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 1)) | ((value << 1) & (0xF << 1));
        }
        /**
          Gets Manual Write
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMANW() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Manual Write
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMANW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Power Reduction Mode during Sleep
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSLEEPPRM() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Power Reduction Mode during Sleep
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSLEEPPRM(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets NVMCTRL Read Mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getREADMODE() volatile {
          return (raw & (0x3 << 16)) >> 16;
        }
        /**
          Sets NVMCTRL Read Mode
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setREADMODE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 16)) | ((value << 16) & (0x3 << 16));
        }
        /**
          Gets Cache Disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCACHEDIS() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Cache Disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCACHEDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
      };
      
      /**
        NVM Parameter
      */
      class PARAM {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets NVM Pages
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNVMP() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets NVM Pages
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNVMP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
        /**
          Gets Page Size
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPSZ() volatile {
          return (raw & (0x7 << 16)) >> 16;
        }
        /**
          Sets Page Size
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPSZ(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 16)) | ((value << 16) & (0x7 << 16));
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
          Gets NVM Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREADY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets NVM Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREADY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERROR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
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
          Gets NVM Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREADY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets NVM Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREADY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERROR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
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
          Gets NVM Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREADY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets NVM Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREADY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERROR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        Status
      */
      class STATUS {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Power Reduction Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPRM() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Power Reduction Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets NVM Page Buffer Active Loading
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLOAD() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets NVM Page Buffer Active Loading
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLOAD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Programming Error Status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPROGE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Programming Error Status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPROGE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Lock Error Status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLOCKE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Lock Error Status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLOCKE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets NVM Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNVME() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets NVM Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNVME(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Security Bit Status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSB() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Security Bit Status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
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
          Gets NVM Address
          @return value in range 0..4194303
        */
        __attribute__((always_inline)) unsigned long getADDR() volatile {
          return (raw & (0x3FFFFF << 0)) >> 0;
        }
        /**
          Sets NVM Address
          @param value in range 0..4194303
        */
        __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFFF << 0)) | ((value << 0) & (0x3FFFFF << 0));
        }
      };
      
      /**
        Lock Section
      */
      class LOCK {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Region Lock Bits
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getLOCK() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Region Lock Bits
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setLOCK(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
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
          volatile char _space_CTRLB[0x4];
          /**
            Control B
          */
          volatile reg::CTRLB CTRLB;
        };
        struct {
          volatile char _space_PARAM[0x8];
          /**
            NVM Parameter
          */
          volatile reg::PARAM PARAM;
        };
        struct {
          volatile char _space_INTENCLR[0xc];
          /**
            Interrupt Enable Clear
          */
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0x10];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x14];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
        struct {
          volatile char _space_STATUS[0x18];
          /**
            Status
          */
          volatile reg::STATUS STATUS;
        };
        struct {
          volatile char _space_ADDR[0x1c];
          /**
            Address
          */
          volatile reg::ADDR ADDR;
        };
        struct {
          volatile char _space_LOCK[0x20];
          /**
            Lock Section
          */
          volatile reg::LOCK LOCK;
        };
      };
    };
  }
  
  extern nvmctrl::Peripheral NVMCTRL;
}