namespace target {
  namespace mtb {
    namespace reg {
      
      /**
        MTB Position
      */
      class POSITION {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Pointer Value Wraps
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRAP() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Pointer Value Wraps
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRAP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Trace Packet Location Pointer
          @return value in range 0..536870911
        */
        __attribute__((always_inline)) unsigned long getPOINTER() volatile {
          return (raw & (0x1FFFFFFF << 3)) >> 3;
        }
        /**
          Sets Trace Packet Location Pointer
          @param value in range 0..536870911
        */
        __attribute__((always_inline)) unsigned long setPOINTER(unsigned long value) volatile {
          raw = (raw & ~(0x1FFFFFFF << 3)) | ((value << 3) & (0x1FFFFFFF << 3));
        }
      };
      
      /**
        MTB Master
      */
      class MASTER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Maximum Value of the Trace Buffer in SRAM
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getMASK() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets Maximum Value of the Trace Buffer in SRAM
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setMASK(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
        /**
          Gets Trace Start Input Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSTARTEN() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Trace Start Input Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSTARTEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Trace Stop Input Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSTOPEN() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Trace Stop Input Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSTOPEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Special Function Register Write Privilege
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSFRWPRIV() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Special Function Register Write Privilege
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSFRWPRIV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets SRAM Privilege
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRAMPRIV() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets SRAM Privilege
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRAMPRIV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Halt Request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHALTREQ() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Halt Request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHALTREQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Main Trace Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Main Trace Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        MTB Flow
      */
      class FLOW {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Auto Stop Tracing
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAUTOSTOP() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Auto Stop Tracing
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAUTOSTOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Auto Halt Request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAUTOHALT() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Auto Halt Request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAUTOHALT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Watermark value
          @return value in range 0..536870911
        */
        __attribute__((always_inline)) unsigned long getWATERMARK() volatile {
          return (raw & (0x1FFFFFFF << 3)) >> 3;
        }
        /**
          Sets Watermark value
          @param value in range 0..536870911
        */
        __attribute__((always_inline)) unsigned long setWATERMARK(unsigned long value) volatile {
          raw = (raw & ~(0x1FFFFFFF << 3)) | ((value << 3) & (0x1FFFFFFF << 3));
        }
      };
      
      /**
        MTB Base
      */
      class BASE {
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
        MTB Integration Mode Control
      */
      class ITCTRL {
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
        MTB Claim Set
      */
      class CLAIMSET {
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
        MTB Claim Clear
      */
      class CLAIMCLR {
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
        MTB Lock Access
      */
      class LOCKACCESS {
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
        MTB Lock Status
      */
      class LOCKSTATUS {
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
        MTB Authentication Status
      */
      class AUTHSTATUS {
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
        MTB Device Architecture
      */
      class DEVARCH {
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
        MTB Device Configuration
      */
      class DEVID {
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
        MTB Device Type
      */
      class DEVTYPE {
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
        CoreSight
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
      };
      
      /**
        CoreSight
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
        CoreSight
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
        CoreSight
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
        CoreSight
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
      };
      
      /**
        CoreSight
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
      };
      
      /**
        CoreSight
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
      };
      
      /**
        CoreSight
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
      };
      
      /**
        CoreSight
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
      };
      
      /**
        CoreSight
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
      };
      
      /**
        CoreSight
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
      };
      
      /**
        CoreSight
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
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            MTB Position
          */
          volatile reg::POSITION POSITION;
        };
        struct {
          volatile char _space_MASTER[0x4];
          /**
            MTB Master
          */
          volatile reg::MASTER MASTER;
        };
        struct {
          volatile char _space_FLOW[0x8];
          /**
            MTB Flow
          */
          volatile reg::FLOW FLOW;
        };
        struct {
          volatile char _space_BASE[0xc];
          /**
            MTB Base
          */
          volatile reg::BASE BASE;
        };
        struct {
          volatile char _space_ITCTRL[0xf00];
          /**
            MTB Integration Mode Control
          */
          volatile reg::ITCTRL ITCTRL;
        };
        struct {
          volatile char _space_CLAIMSET[0xfa0];
          /**
            MTB Claim Set
          */
          volatile reg::CLAIMSET CLAIMSET;
        };
        struct {
          volatile char _space_CLAIMCLR[0xfa4];
          /**
            MTB Claim Clear
          */
          volatile reg::CLAIMCLR CLAIMCLR;
        };
        struct {
          volatile char _space_LOCKACCESS[0xfb0];
          /**
            MTB Lock Access
          */
          volatile reg::LOCKACCESS LOCKACCESS;
        };
        struct {
          volatile char _space_LOCKSTATUS[0xfb4];
          /**
            MTB Lock Status
          */
          volatile reg::LOCKSTATUS LOCKSTATUS;
        };
        struct {
          volatile char _space_AUTHSTATUS[0xfb8];
          /**
            MTB Authentication Status
          */
          volatile reg::AUTHSTATUS AUTHSTATUS;
        };
        struct {
          volatile char _space_DEVARCH[0xfbc];
          /**
            MTB Device Architecture
          */
          volatile reg::DEVARCH DEVARCH;
        };
        struct {
          volatile char _space_DEVID[0xfc8];
          /**
            MTB Device Configuration
          */
          volatile reg::DEVID DEVID;
        };
        struct {
          volatile char _space_DEVTYPE[0xfcc];
          /**
            MTB Device Type
          */
          volatile reg::DEVTYPE DEVTYPE;
        };
        struct {
          volatile char _space_PID4[0xfd0];
          /**
            CoreSight
          */
          volatile reg::PID4 PID4;
        };
        struct {
          volatile char _space_PID5[0xfd4];
          /**
            CoreSight
          */
          volatile reg::PID5 PID5;
        };
        struct {
          volatile char _space_PID6[0xfd8];
          /**
            CoreSight
          */
          volatile reg::PID6 PID6;
        };
        struct {
          volatile char _space_PID7[0xfdc];
          /**
            CoreSight
          */
          volatile reg::PID7 PID7;
        };
        struct {
          volatile char _space_PID0[0xfe0];
          /**
            CoreSight
          */
          volatile reg::PID0 PID0;
        };
        struct {
          volatile char _space_PID1[0xfe4];
          /**
            CoreSight
          */
          volatile reg::PID1 PID1;
        };
        struct {
          volatile char _space_PID2[0xfe8];
          /**
            CoreSight
          */
          volatile reg::PID2 PID2;
        };
        struct {
          volatile char _space_PID3[0xfec];
          /**
            CoreSight
          */
          volatile reg::PID3 PID3;
        };
        struct {
          volatile char _space_CID0[0xff0];
          /**
            CoreSight
          */
          volatile reg::CID0 CID0;
        };
        struct {
          volatile char _space_CID1[0xff4];
          /**
            CoreSight
          */
          volatile reg::CID1 CID1;
        };
        struct {
          volatile char _space_CID2[0xff8];
          /**
            CoreSight
          */
          volatile reg::CID2 CID2;
        };
        struct {
          volatile char _space_CID3[0xffc];
          /**
            CoreSight
          */
          volatile reg::CID3 CID3;
        };
      };
    };
  }
  
  extern mtb::Peripheral MTB;
}