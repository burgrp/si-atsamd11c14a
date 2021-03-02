namespace target {
  namespace mtb {
    
    /**
      MTB Position
    */
    namespace POSITION {
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
          Gets Pointer Value Wraps
          @return boolean value
        */
        __attribute__((always_inline)) bool getWRAP() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Pointer Value Wraps
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWRAP(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Trace Packet Location Pointer
          @return value in range 0..536870911
        */
        __attribute__((always_inline)) unsigned long getPOINTER() volatile {
          return ((raw & (0x1FFFFFFF << 3)) >> 3);
        }
        /**
          Sets Trace Packet Location Pointer
          @param value value in range 0..536870911
        */
        __attribute__((always_inline)) Register& setPOINTER(unsigned long value) volatile {
          raw = (raw & ~(0x1FFFFFFF << 3)) | ((((value)) << 3) & (0x1FFFFFFF << 3));
          return *(Register*)this;
        }
      };
    };
    
    /**
      MTB Master
    */
    namespace MASTER {
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
          Gets Maximum Value of the Trace Buffer in SRAM
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getMASK() volatile {
          return ((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets Maximum Value of the Trace Buffer in SRAM
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setMASK(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
        /**
          Gets Trace Start Input Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSTARTEN() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Trace Start Input Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSTARTEN(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Trace Stop Input Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSTOPEN() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Trace Stop Input Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSTOPEN(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Special Function Register Write Privilege
          @return boolean value
        */
        __attribute__((always_inline)) bool getSFRWPRIV() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Special Function Register Write Privilege
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSFRWPRIV(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets SRAM Privilege
          @return boolean value
        */
        __attribute__((always_inline)) bool getRAMPRIV() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets SRAM Privilege
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRAMPRIV(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Halt Request
          @return boolean value
        */
        __attribute__((always_inline)) bool getHALTREQ() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Halt Request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHALTREQ(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Main Trace Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets Main Trace Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
      };
    };
    
    /**
      MTB Flow
    */
    namespace FLOW {
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
          Gets Auto Stop Tracing
          @return boolean value
        */
        __attribute__((always_inline)) bool getAUTOSTOP() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Auto Stop Tracing
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAUTOSTOP(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Auto Halt Request
          @return boolean value
        */
        __attribute__((always_inline)) bool getAUTOHALT() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Auto Halt Request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAUTOHALT(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Watermark value
          @return value in range 0..536870911
        */
        __attribute__((always_inline)) unsigned long getWATERMARK() volatile {
          return ((raw & (0x1FFFFFFF << 3)) >> 3);
        }
        /**
          Sets Watermark value
          @param value value in range 0..536870911
        */
        __attribute__((always_inline)) Register& setWATERMARK(unsigned long value) volatile {
          raw = (raw & ~(0x1FFFFFFF << 3)) | ((((value)) << 3) & (0x1FFFFFFF << 3));
          return *(Register*)this;
        }
      };
    };
    
    /**
      MTB Base
    */
    namespace BASE {
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
      };
    };
    
    /**
      MTB Integration Mode Control
    */
    namespace ITCTRL {
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
      };
    };
    
    /**
      MTB Claim Set
    */
    namespace CLAIMSET {
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
      };
    };
    
    /**
      MTB Claim Clear
    */
    namespace CLAIMCLR {
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
      };
    };
    
    /**
      MTB Lock Access
    */
    namespace LOCKACCESS {
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
      };
    };
    
    /**
      MTB Lock Status
    */
    namespace LOCKSTATUS {
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
      };
    };
    
    /**
      MTB Authentication Status
    */
    namespace AUTHSTATUS {
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
      };
    };
    
    /**
      MTB Device Architecture
    */
    namespace DEVARCH {
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
      };
    };
    
    /**
      MTB Device Configuration
    */
    namespace DEVID {
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
      };
    };
    
    /**
      MTB Device Type
    */
    namespace DEVTYPE {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace PID4 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace PID5 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace PID6 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace PID7 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace PID0 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace PID1 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace PID2 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace PID3 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace CID0 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace CID1 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace CID2 {
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
      };
    };
    
    /**
      CoreSight
    */
    namespace CID3 {
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
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            MTB Position
          */
          POSITION::Register POSITION;
        };
        struct {
          char _space_MASTER[0x4];
          /**
            MTB Master
          */
          MASTER::Register MASTER;
        };
        struct {
          char _space_FLOW[0x8];
          /**
            MTB Flow
          */
          FLOW::Register FLOW;
        };
        struct {
          char _space_BASE[0xc];
          /**
            MTB Base
          */
          BASE::Register BASE;
        };
        struct {
          char _space_ITCTRL[0xf00];
          /**
            MTB Integration Mode Control
          */
          ITCTRL::Register ITCTRL;
        };
        struct {
          char _space_CLAIMSET[0xfa0];
          /**
            MTB Claim Set
          */
          CLAIMSET::Register CLAIMSET;
        };
        struct {
          char _space_CLAIMCLR[0xfa4];
          /**
            MTB Claim Clear
          */
          CLAIMCLR::Register CLAIMCLR;
        };
        struct {
          char _space_LOCKACCESS[0xfb0];
          /**
            MTB Lock Access
          */
          LOCKACCESS::Register LOCKACCESS;
        };
        struct {
          char _space_LOCKSTATUS[0xfb4];
          /**
            MTB Lock Status
          */
          LOCKSTATUS::Register LOCKSTATUS;
        };
        struct {
          char _space_AUTHSTATUS[0xfb8];
          /**
            MTB Authentication Status
          */
          AUTHSTATUS::Register AUTHSTATUS;
        };
        struct {
          char _space_DEVARCH[0xfbc];
          /**
            MTB Device Architecture
          */
          DEVARCH::Register DEVARCH;
        };
        struct {
          char _space_DEVID[0xfc8];
          /**
            MTB Device Configuration
          */
          DEVID::Register DEVID;
        };
        struct {
          char _space_DEVTYPE[0xfcc];
          /**
            MTB Device Type
          */
          DEVTYPE::Register DEVTYPE;
        };
        struct {
          char _space_PID4[0xfd0];
          /**
            CoreSight
          */
          PID4::Register PID4;
        };
        struct {
          char _space_PID5[0xfd4];
          /**
            CoreSight
          */
          PID5::Register PID5;
        };
        struct {
          char _space_PID6[0xfd8];
          /**
            CoreSight
          */
          PID6::Register PID6;
        };
        struct {
          char _space_PID7[0xfdc];
          /**
            CoreSight
          */
          PID7::Register PID7;
        };
        struct {
          char _space_PID0[0xfe0];
          /**
            CoreSight
          */
          PID0::Register PID0;
        };
        struct {
          char _space_PID1[0xfe4];
          /**
            CoreSight
          */
          PID1::Register PID1;
        };
        struct {
          char _space_PID2[0xfe8];
          /**
            CoreSight
          */
          PID2::Register PID2;
        };
        struct {
          char _space_PID3[0xfec];
          /**
            CoreSight
          */
          PID3::Register PID3;
        };
        struct {
          char _space_CID0[0xff0];
          /**
            CoreSight
          */
          CID0::Register CID0;
        };
        struct {
          char _space_CID1[0xff4];
          /**
            CoreSight
          */
          CID1::Register CID1;
        };
        struct {
          char _space_CID2[0xff8];
          /**
            CoreSight
          */
          CID2::Register CID2;
        };
        struct {
          char _space_CID3[0xffc];
          /**
            CoreSight
          */
          CID3::Register CID3;
        };
      };
    };
  }
  
  extern volatile mtb::Peripheral MTB;
}