namespace target {
  namespace sysctrl {
    
    /**
      Interrupt Enable Clear
    */
    namespace INTENCLR {
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
          Gets XOSC Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getXOSCRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets XOSC Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXOSCRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets XOSC32K Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getXOSC32KRDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets XOSC32K Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXOSC32KRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets OSC32K Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSC32KRDY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets OSC32K Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSC32KRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets OSC8M Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSC8MRDY() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets OSC8M Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSC8MRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets DFLL Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLRDY() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets DFLL Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets DFLL Out Of Bounds Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLOOB() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets DFLL Out Of Bounds Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLOOB(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets DFLL Lock Fine Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLLCKF() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets DFLL Lock Fine Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLLCKF(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets DFLL Lock Coarse Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLLCKC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets DFLL Lock Coarse Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLLCKC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets DFLL Reference Clock Stopped Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLRCS() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets DFLL Reference Clock Stopped Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLRCS(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33RDY() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets BOD33 Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33RDY(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Detection Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33DET() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets BOD33 Detection Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33DET(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Synchronization Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getB33SRDY() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets BOD33 Synchronization Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setB33SRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Rise Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLCKR() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets DPLL Lock Rise Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLCKR(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Fall Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLCKF() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets DPLL Lock Fall Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLCKF(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Timeout Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLTO() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets DPLL Lock Timeout Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLTO(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Enable Set
    */
    namespace INTENSET {
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
          Gets XOSC Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getXOSCRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets XOSC Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXOSCRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets XOSC32K Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getXOSC32KRDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets XOSC32K Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXOSC32KRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets OSC32K Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSC32KRDY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets OSC32K Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSC32KRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets OSC8M Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSC8MRDY() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets OSC8M Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSC8MRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets DFLL Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLRDY() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets DFLL Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets DFLL Out Of Bounds Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLOOB() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets DFLL Out Of Bounds Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLOOB(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets DFLL Lock Fine Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLLCKF() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets DFLL Lock Fine Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLLCKF(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets DFLL Lock Coarse Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLLCKC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets DFLL Lock Coarse Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLLCKC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets DFLL Reference Clock Stopped Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLRCS() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets DFLL Reference Clock Stopped Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLRCS(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33RDY() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets BOD33 Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33RDY(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Detection Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33DET() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets BOD33 Detection Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33DET(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Synchronization Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getB33SRDY() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets BOD33 Synchronization Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setB33SRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Rise Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLCKR() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets DPLL Lock Rise Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLCKR(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Fall Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLCKF() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets DPLL Lock Fall Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLCKF(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Timeout Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLTO() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets DPLL Lock Timeout Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLTO(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Flag Status and Clear
    */
    namespace INTFLAG {
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
          Gets XOSC Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getXOSCRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets XOSC Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXOSCRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets XOSC32K Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getXOSC32KRDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets XOSC32K Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXOSC32KRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets OSC32K Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSC32KRDY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets OSC32K Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSC32KRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets OSC8M Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSC8MRDY() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets OSC8M Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSC8MRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets DFLL Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLRDY() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets DFLL Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets DFLL Out Of Bounds
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLOOB() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets DFLL Out Of Bounds
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLOOB(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets DFLL Lock Fine
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLLCKF() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets DFLL Lock Fine
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLLCKF(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets DFLL Lock Coarse
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLLCKC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets DFLL Lock Coarse
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLLCKC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets DFLL Reference Clock Stopped
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLRCS() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets DFLL Reference Clock Stopped
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLRCS(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33RDY() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets BOD33 Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33RDY(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Detection
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33DET() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets BOD33 Detection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33DET(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Synchronization Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getB33SRDY() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets BOD33 Synchronization Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setB33SRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Rise
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLCKR() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets DPLL Lock Rise
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLCKR(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Fall
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLCKF() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets DPLL Lock Fall
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLCKF(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Timeout
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLTO() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets DPLL Lock Timeout
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLTO(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Power and Clocks Status
    */
    namespace PCLKSR {
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
          Gets XOSC Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getXOSCRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets XOSC Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXOSCRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets XOSC32K Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getXOSC32KRDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets XOSC32K Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXOSC32KRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets OSC32K Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSC32KRDY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets OSC32K Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSC32KRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets OSC8M Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSC8MRDY() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets OSC8M Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSC8MRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets DFLL Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLRDY() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets DFLL Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets DFLL Out Of Bounds
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLOOB() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets DFLL Out Of Bounds
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLOOB(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets DFLL Lock Fine
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLLCKF() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets DFLL Lock Fine
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLLCKF(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets DFLL Lock Coarse
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLLCKC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets DFLL Lock Coarse
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLLCKC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets DFLL Reference Clock Stopped
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFLLRCS() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets DFLL Reference Clock Stopped
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFLLRCS(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33RDY() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets BOD33 Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33RDY(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Detection
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33DET() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets BOD33 Detection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33DET(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Synchronization Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getB33SRDY() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets BOD33 Synchronization Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setB33SRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Rise
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLCKR() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets DPLL Lock Rise
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLCKR(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Fall
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLCKF() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets DPLL Lock Fall
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLCKF(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets DPLL Lock Timeout
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPLLLTO() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets DPLL Lock Timeout
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPLLLTO(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
      };
    };
    
    /**
      External Multipurpose Crystal Oscillator (XOSC) Control
    */
    namespace XOSC {
      enum class GAIN {
        // 2MHz
        _2MHZ = 0x0,
        // 4MHz
        _4MHZ = 0x1,
        // 8MHz
        _8MHZ = 0x2,
        // 16MHz
        _16MHZ = 0x3,
        // 30MHz
        _30MHZ = 0x4,
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
          Gets Oscillator Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Oscillator Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Crystal Oscillator Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getXTALEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Crystal Oscillator Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXTALEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets On Demand Control
          @return boolean value
        */
        __attribute__((always_inline)) bool getONDEMAND() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets On Demand Control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setONDEMAND(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Oscillator Gain
          @return enumeration value:
          target::sysctrl::XOSC::GAIN::_2MHZ (0x0) 2MHz
          target::sysctrl::XOSC::GAIN::_4MHZ (0x1) 4MHz
          target::sysctrl::XOSC::GAIN::_8MHZ (0x2) 8MHz
          target::sysctrl::XOSC::GAIN::_16MHZ (0x3) 16MHz
          target::sysctrl::XOSC::GAIN::_30MHZ (0x4) 30MHz
        */
        __attribute__((always_inline)) target::sysctrl::XOSC::GAIN getGAIN() volatile {
          return static_cast<target::sysctrl::XOSC::GAIN>((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Oscillator Gain
          @param value enumeration value:
          target::sysctrl::XOSC::GAIN::_2MHZ (0x0) 2MHz
          target::sysctrl::XOSC::GAIN::_4MHZ (0x1) 4MHz
          target::sysctrl::XOSC::GAIN::_8MHZ (0x2) 8MHz
          target::sysctrl::XOSC::GAIN::_16MHZ (0x3) 16MHz
          target::sysctrl::XOSC::GAIN::_30MHZ (0x4) 30MHz
        */
        __attribute__((always_inline)) Register& setGAIN(target::sysctrl::XOSC::GAIN value) volatile {
          raw = (raw & ~(0x7 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
        /**
          Gets Automatic Amplitude Gain Control
          @return boolean value
        */
        __attribute__((always_inline)) bool getAMPGC() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Automatic Amplitude Gain Control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAMPGC(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Start-Up Time
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSTARTUP() volatile {
          return ((raw & (0xF << 12)) >> 12);
        }
        /**
          Sets Start-Up Time
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setSTARTUP(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((((value)) << 12) & (0xF << 12));
          return *(Register*)this;
        }
      };
    };
    
    /**
      32kHz External Crystal Oscillator (XOSC32K) Control
    */
    namespace XOSC32K {
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
          Gets Oscillator Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Oscillator Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Crystal Oscillator Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getXTALEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Crystal Oscillator Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setXTALEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets 32kHz Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN32K() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets 32kHz Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN32K(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets 1kHz Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN1K() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets 1kHz Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN1K(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Automatic Amplitude Control Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getAAMPEN() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Automatic Amplitude Control Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAAMPEN(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets On Demand Control
          @return boolean value
        */
        __attribute__((always_inline)) bool getONDEMAND() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets On Demand Control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setONDEMAND(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Oscillator Start-Up Time
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSTARTUP() volatile {
          return ((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Oscillator Start-Up Time
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setSTARTUP(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((((value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
        /**
          Gets Write Lock
          @return boolean value
        */
        __attribute__((always_inline)) bool getWRTLOCK() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Write Lock
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWRTLOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
      };
    };
    
    /**
      32kHz Internal Oscillator (OSC32K) Control
    */
    namespace OSC32K {
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
          Gets Oscillator Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Oscillator Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets 32kHz Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN32K() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets 32kHz Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN32K(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets 1kHz Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN1K() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets 1kHz Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN1K(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets On Demand Control
          @return boolean value
        */
        __attribute__((always_inline)) bool getONDEMAND() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets On Demand Control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setONDEMAND(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Oscillator Start-Up Time
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSTARTUP() volatile {
          return ((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Oscillator Start-Up Time
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setSTARTUP(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((((value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
        /**
          Gets Write Lock
          @return boolean value
        */
        __attribute__((always_inline)) bool getWRTLOCK() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Write Lock
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWRTLOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Oscillator Calibration
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getCALIB() volatile {
          return ((raw & (0x7F << 16)) >> 16);
        }
        /**
          Sets Oscillator Calibration
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setCALIB(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 16)) | ((((value)) << 16) & (0x7F << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
    */
    namespace OSCULP32K {
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
          Gets Oscillator Calibration
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getCALIB() volatile {
          return ((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets Oscillator Calibration
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setCALIB(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
        /**
          Gets Write Lock
          @return boolean value
        */
        __attribute__((always_inline)) bool getWRTLOCK() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Write Lock
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWRTLOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      8MHz Internal Oscillator (OSC8M) Control
    */
    namespace OSC8M {
      enum class PRESC {
        // 1
        _1 = 0x0,
        // 2
        _2 = 0x1,
        // 4
        _4 = 0x2,
        // 8
        _8 = 0x3,
      };
      
      enum class FRANGE {
        // 4 to 6MHz
        _4_TO_6MHZ = 0x0,
        // 6 to 8MHz
        _6_TO_8MHZ = 0x1,
        // 8 to 11MHz
        _8_TO_11MHZ = 0x2,
        // 11 to 15MHz
        _11_TO_15MHZ = 0x3,
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
          Gets Oscillator Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Oscillator Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets On Demand Control
          @return boolean value
        */
        __attribute__((always_inline)) bool getONDEMAND() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets On Demand Control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setONDEMAND(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Oscillator Prescaler
          @return enumeration value:
          target::sysctrl::OSC8M::PRESC::_1 (0x0) 1
          target::sysctrl::OSC8M::PRESC::_2 (0x1) 2
          target::sysctrl::OSC8M::PRESC::_4 (0x2) 4
          target::sysctrl::OSC8M::PRESC::_8 (0x3) 8
        */
        __attribute__((always_inline)) target::sysctrl::OSC8M::PRESC getPRESC() volatile {
          return static_cast<target::sysctrl::OSC8M::PRESC>((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Oscillator Prescaler
          @param value enumeration value:
          target::sysctrl::OSC8M::PRESC::_1 (0x0) 1
          target::sysctrl::OSC8M::PRESC::_2 (0x1) 2
          target::sysctrl::OSC8M::PRESC::_4 (0x2) 4
          target::sysctrl::OSC8M::PRESC::_8 (0x3) 8
        */
        __attribute__((always_inline)) Register& setPRESC(target::sysctrl::OSC8M::PRESC value) volatile {
          raw = (raw & ~(0x3 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Oscillator Calibration
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getCALIB() volatile {
          return ((raw & (0xFFF << 16)) >> 16);
        }
        /**
          Sets Oscillator Calibration
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setCALIB(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 16)) | ((((value)) << 16) & (0xFFF << 16));
          return *(Register*)this;
        }
        /**
          Gets Oscillator Frequency Range
          @return enumeration value:
          target::sysctrl::OSC8M::FRANGE::_4_TO_6MHZ (0x0) 4 to 6MHz
          target::sysctrl::OSC8M::FRANGE::_6_TO_8MHZ (0x1) 6 to 8MHz
          target::sysctrl::OSC8M::FRANGE::_8_TO_11MHZ (0x2) 8 to 11MHz
          target::sysctrl::OSC8M::FRANGE::_11_TO_15MHZ (0x3) 11 to 15MHz
        */
        __attribute__((always_inline)) target::sysctrl::OSC8M::FRANGE getFRANGE() volatile {
          return static_cast<target::sysctrl::OSC8M::FRANGE>((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets Oscillator Frequency Range
          @param value enumeration value:
          target::sysctrl::OSC8M::FRANGE::_4_TO_6MHZ (0x0) 4 to 6MHz
          target::sysctrl::OSC8M::FRANGE::_6_TO_8MHZ (0x1) 6 to 8MHz
          target::sysctrl::OSC8M::FRANGE::_8_TO_11MHZ (0x2) 8 to 11MHz
          target::sysctrl::OSC8M::FRANGE::_11_TO_15MHZ (0x3) 11 to 15MHz
        */
        __attribute__((always_inline)) Register& setFRANGE(target::sysctrl::OSC8M::FRANGE value) volatile {
          raw = (raw & ~(0x3 << 30)) | (((static_cast<unsigned long>(value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DFLL48M Control
    */
    namespace DFLLCTRL {
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
          Gets DFLL Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets DFLL Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Operating Mode Selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getMODE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Operating Mode Selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMODE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Stable DFLL Frequency
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTABLE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Stable DFLL Frequency
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Lose Lock After Wake
          @return boolean value
        */
        __attribute__((always_inline)) bool getLLAW() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Lose Lock After Wake
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLLAW(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets USB Clock Recovery Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSBCRM() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets USB Clock Recovery Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSBCRM(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets On Demand Control
          @return boolean value
        */
        __attribute__((always_inline)) bool getONDEMAND() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets On Demand Control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setONDEMAND(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Chill Cycle Disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCCDIS() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Chill Cycle Disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCCDIS(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Quick Lock Disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getQLDIS() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Quick Lock Disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setQLDIS(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Bypass Coarse Lock
          @return boolean value
        */
        __attribute__((always_inline)) bool getBPLCKC() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Bypass Coarse Lock
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBPLCKC(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Wait Lock
          @return boolean value
        */
        __attribute__((always_inline)) bool getWAITLOCK() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Wait Lock
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWAITLOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DFLL48M Value
    */
    namespace DFLLVAL {
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
          Gets Fine Value
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getFINE() volatile {
          return ((raw & (0x3FF << 0)) >> 0);
        }
        /**
          Sets Fine Value
          @param value value in range 0..1023
        */
        __attribute__((always_inline)) Register& setFINE(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 0)) | ((((value)) << 0) & (0x3FF << 0));
          return *(Register*)this;
        }
        /**
          Gets Coarse Value
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCOARSE() volatile {
          return ((raw & (0x3F << 10)) >> 10);
        }
        /**
          Sets Coarse Value
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setCOARSE(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 10)) | ((((value)) << 10) & (0x3F << 10));
          return *(Register*)this;
        }
        /**
          Gets Multiplication Ratio Difference
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDIFF() volatile {
          return ((raw & (0xFFFF << 16)) >> 16);
        }
        /**
          Sets Multiplication Ratio Difference
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setDIFF(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((((value)) << 16) & (0xFFFF << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DFLL48M Multiplier
    */
    namespace DFLLMUL {
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
          Gets DFLL Multiply Factor
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getMUL() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets DFLL Multiply Factor
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setMUL(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Fine Maximum Step
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getFSTEP() volatile {
          return ((raw & (0x3FF << 16)) >> 16);
        }
        /**
          Sets Fine Maximum Step
          @param value value in range 0..1023
        */
        __attribute__((always_inline)) Register& setFSTEP(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 16)) | ((((value)) << 16) & (0x3FF << 16));
          return *(Register*)this;
        }
        /**
          Gets Coarse Maximum Step
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCSTEP() volatile {
          return ((raw & (0x3F << 26)) >> 26);
        }
        /**
          Sets Coarse Maximum Step
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setCSTEP(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 26)) | ((((value)) << 26) & (0x3F << 26));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DFLL48M Synchronization
    */
    namespace DFLLSYNC {
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
          Gets Read Request
          @return boolean value
        */
        __attribute__((always_inline)) bool getREADREQ() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Read Request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREADREQ(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      3.3V Brown-Out Detector (BOD33) Control
    */
    namespace BOD33 {
      enum class ACTION {
        // No action
        NONE = 0x0,
        // The BOD33 generates a reset
        RESET = 0x1,
        // The BOD33 generates an interrupt
        INTERRUPT = 0x2,
      };
      
      enum class PSEL {
        // Divide clock by 2
        DIV2 = 0x0,
        // Divide clock by 4
        DIV4 = 0x1,
        // Divide clock by 8
        DIV8 = 0x2,
        // Divide clock by 16
        DIV16 = 0x3,
        // Divide clock by 32
        DIV32 = 0x4,
        // Divide clock by 64
        DIV64 = 0x5,
        // Divide clock by 128
        DIV128 = 0x6,
        // Divide clock by 256
        DIV256 = 0x7,
        // Divide clock by 512
        DIV512 = 0x8,
        // Divide clock by 1024
        DIV1K = 0x9,
        // Divide clock by 2048
        DIV2K = 0xa,
        // Divide clock by 4096
        DIV4K = 0xb,
        // Divide clock by 8192
        DIV8K = 0xc,
        // Divide clock by 16384
        DIV16K = 0xd,
        // Divide clock by 32768
        DIV32K = 0xe,
        // Divide clock by 65536
        DIV64K = 0xf,
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
          Gets Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Hysteresis
          @return boolean value
        */
        __attribute__((always_inline)) bool getHYST() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Hysteresis
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHYST(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Action
          @return enumeration value:
          target::sysctrl::BOD33::ACTION::NONE (0x0) No action
          target::sysctrl::BOD33::ACTION::RESET (0x1) The BOD33 generates a reset
          target::sysctrl::BOD33::ACTION::INTERRUPT (0x2) The BOD33 generates an interrupt
        */
        __attribute__((always_inline)) target::sysctrl::BOD33::ACTION getACTION() volatile {
          return static_cast<target::sysctrl::BOD33::ACTION>((raw & (0x3 << 3)) >> 3);
        }
        /**
          Sets BOD33 Action
          @param value enumeration value:
          target::sysctrl::BOD33::ACTION::NONE (0x0) No action
          target::sysctrl::BOD33::ACTION::RESET (0x1) The BOD33 generates a reset
          target::sysctrl::BOD33::ACTION::INTERRUPT (0x2) The BOD33 generates an interrupt
        */
        __attribute__((always_inline)) Register& setACTION(target::sysctrl::BOD33::ACTION value) volatile {
          raw = (raw & ~(0x3 << 3)) | (((static_cast<unsigned long>(value)) << 3) & (0x3 << 3));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Operation Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMODE() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Operation Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMODE(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCEN() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Prescaler Select
          @return enumeration value:
          target::sysctrl::BOD33::PSEL::DIV2 (0x0) Divide clock by 2
          target::sysctrl::BOD33::PSEL::DIV4 (0x1) Divide clock by 4
          target::sysctrl::BOD33::PSEL::DIV8 (0x2) Divide clock by 8
          target::sysctrl::BOD33::PSEL::DIV16 (0x3) Divide clock by 16
          target::sysctrl::BOD33::PSEL::DIV32 (0x4) Divide clock by 32
          target::sysctrl::BOD33::PSEL::DIV64 (0x5) Divide clock by 64
          target::sysctrl::BOD33::PSEL::DIV128 (0x6) Divide clock by 128
          target::sysctrl::BOD33::PSEL::DIV256 (0x7) Divide clock by 256
          target::sysctrl::BOD33::PSEL::DIV512 (0x8) Divide clock by 512
          target::sysctrl::BOD33::PSEL::DIV1K (0x9) Divide clock by 1024
          target::sysctrl::BOD33::PSEL::DIV2K (0xa) Divide clock by 2048
          target::sysctrl::BOD33::PSEL::DIV4K (0xb) Divide clock by 4096
          target::sysctrl::BOD33::PSEL::DIV8K (0xc) Divide clock by 8192
          target::sysctrl::BOD33::PSEL::DIV16K (0xd) Divide clock by 16384
          target::sysctrl::BOD33::PSEL::DIV32K (0xe) Divide clock by 32768
          target::sysctrl::BOD33::PSEL::DIV64K (0xf) Divide clock by 65536
        */
        __attribute__((always_inline)) target::sysctrl::BOD33::PSEL getPSEL() volatile {
          return static_cast<target::sysctrl::BOD33::PSEL>((raw & (0xF << 12)) >> 12);
        }
        /**
          Sets Prescaler Select
          @param value enumeration value:
          target::sysctrl::BOD33::PSEL::DIV2 (0x0) Divide clock by 2
          target::sysctrl::BOD33::PSEL::DIV4 (0x1) Divide clock by 4
          target::sysctrl::BOD33::PSEL::DIV8 (0x2) Divide clock by 8
          target::sysctrl::BOD33::PSEL::DIV16 (0x3) Divide clock by 16
          target::sysctrl::BOD33::PSEL::DIV32 (0x4) Divide clock by 32
          target::sysctrl::BOD33::PSEL::DIV64 (0x5) Divide clock by 64
          target::sysctrl::BOD33::PSEL::DIV128 (0x6) Divide clock by 128
          target::sysctrl::BOD33::PSEL::DIV256 (0x7) Divide clock by 256
          target::sysctrl::BOD33::PSEL::DIV512 (0x8) Divide clock by 512
          target::sysctrl::BOD33::PSEL::DIV1K (0x9) Divide clock by 1024
          target::sysctrl::BOD33::PSEL::DIV2K (0xa) Divide clock by 2048
          target::sysctrl::BOD33::PSEL::DIV4K (0xb) Divide clock by 4096
          target::sysctrl::BOD33::PSEL::DIV8K (0xc) Divide clock by 8192
          target::sysctrl::BOD33::PSEL::DIV16K (0xd) Divide clock by 16384
          target::sysctrl::BOD33::PSEL::DIV32K (0xe) Divide clock by 32768
          target::sysctrl::BOD33::PSEL::DIV64K (0xf) Divide clock by 65536
        */
        __attribute__((always_inline)) Register& setPSEL(target::sysctrl::BOD33::PSEL value) volatile {
          raw = (raw & ~(0xF << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0xF << 12));
          return *(Register*)this;
        }
        /**
          Gets BOD33 Threshold Level
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getLEVEL() volatile {
          return ((raw & (0x3F << 16)) >> 16);
        }
        /**
          Sets BOD33 Threshold Level
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setLEVEL(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 16)) | ((((value)) << 16) & (0x3F << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Voltage References System (VREF) Control
    */
    namespace VREF {
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
          Gets Temperature Sensor Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSEN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Temperature Sensor Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSEN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Bandgap Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBGOUTEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Bandgap Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBGOUTEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Bandgap Voltage Generator Calibration
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getCALIB() volatile {
          return ((raw & (0x7FF << 16)) >> 16);
        }
        /**
          Sets Bandgap Voltage Generator Calibration
          @param value value in range 0..2047
        */
        __attribute__((always_inline)) Register& setCALIB(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 16)) | ((((value)) << 16) & (0x7FF << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DPLL Control A
    */
    namespace DPLLCTRLA {
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
          Gets DPLL Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets DPLL Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets On Demand Clock Activation
          @return boolean value
        */
        __attribute__((always_inline)) bool getONDEMAND() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets On Demand Clock Activation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setONDEMAND(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DPLL Ratio Control
    */
    namespace DPLLRATIO {
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
          Gets Loop Divider Ratio
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getLDR() volatile {
          return ((raw & (0xFFF << 0)) >> 0);
        }
        /**
          Sets Loop Divider Ratio
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setLDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((((value)) << 0) & (0xFFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Loop Divider Ratio Fractional Part
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getLDRFRAC() volatile {
          return ((raw & (0xF << 16)) >> 16);
        }
        /**
          Sets Loop Divider Ratio Fractional Part
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setLDRFRAC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((((value)) << 16) & (0xF << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DPLL Control B
    */
    namespace DPLLCTRLB {
      enum class FILTER {
        // Default filter mode
        DEFAULT = 0x0,
        // Low bandwidth filter
        LBFILT = 0x1,
        // High bandwidth filter
        HBFILT = 0x2,
        // High damping filter
        HDFILT = 0x3,
      };
      
      enum class REFCLK {
        // CLK_DPLL_REF0 clock reference
        REF0 = 0x0,
        // CLK_DPLL_REF1 clock reference
        REF1 = 0x1,
        // GCLK_DPLL clock reference
        GCLK = 0x2,
      };
      
      enum class LTIME {
        // Default	No time-out
        NONE = 0x0,
        // 8MS	Time-out if no lock within 8 ms
        _8MS = 0x4,
        // 9MS	Time-out if no lock within 9 ms
        _9MS = 0x5,
        // 10MS	Time-out if no lock within 10 ms
        _10MS = 0x6,
        // 11MS	Time-out if no lock within 11 ms
        _11MS = 0x7,
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
          Gets Proportional Integral Filter Selection
          @return enumeration value:
          target::sysctrl::DPLLCTRLB::FILTER::DEFAULT (0x0) Default filter mode
          target::sysctrl::DPLLCTRLB::FILTER::LBFILT (0x1) Low bandwidth filter
          target::sysctrl::DPLLCTRLB::FILTER::HBFILT (0x2) High bandwidth filter
          target::sysctrl::DPLLCTRLB::FILTER::HDFILT (0x3) High damping filter
        */
        __attribute__((always_inline)) target::sysctrl::DPLLCTRLB::FILTER getFILTER() volatile {
          return static_cast<target::sysctrl::DPLLCTRLB::FILTER>((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Proportional Integral Filter Selection
          @param value enumeration value:
          target::sysctrl::DPLLCTRLB::FILTER::DEFAULT (0x0) Default filter mode
          target::sysctrl::DPLLCTRLB::FILTER::LBFILT (0x1) Low bandwidth filter
          target::sysctrl::DPLLCTRLB::FILTER::HBFILT (0x2) High bandwidth filter
          target::sysctrl::DPLLCTRLB::FILTER::HDFILT (0x3) High damping filter
        */
        __attribute__((always_inline)) Register& setFILTER(target::sysctrl::DPLLCTRLB::FILTER value) volatile {
          raw = (raw & ~(0x3 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets Low-Power Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLPEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Low-Power Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLPEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Wake Up Fast
          @return boolean value
        */
        __attribute__((always_inline)) bool getWUF() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Wake Up Fast
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWUF(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Reference Clock Selection
          @return enumeration value:
          target::sysctrl::DPLLCTRLB::REFCLK::REF0 (0x0) CLK_DPLL_REF0 clock reference
          target::sysctrl::DPLLCTRLB::REFCLK::REF1 (0x1) CLK_DPLL_REF1 clock reference
          target::sysctrl::DPLLCTRLB::REFCLK::GCLK (0x2) GCLK_DPLL clock reference
        */
        __attribute__((always_inline)) target::sysctrl::DPLLCTRLB::REFCLK getREFCLK() volatile {
          return static_cast<target::sysctrl::DPLLCTRLB::REFCLK>((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Reference Clock Selection
          @param value enumeration value:
          target::sysctrl::DPLLCTRLB::REFCLK::REF0 (0x0) CLK_DPLL_REF0 clock reference
          target::sysctrl::DPLLCTRLB::REFCLK::REF1 (0x1) CLK_DPLL_REF1 clock reference
          target::sysctrl::DPLLCTRLB::REFCLK::GCLK (0x2) GCLK_DPLL clock reference
        */
        __attribute__((always_inline)) Register& setREFCLK(target::sysctrl::DPLLCTRLB::REFCLK value) volatile {
          raw = (raw & ~(0x3 << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Lock Time
          @return enumeration value:
          target::sysctrl::DPLLCTRLB::LTIME::NONE (0x0) Default	No time-out
          target::sysctrl::DPLLCTRLB::LTIME::_8MS (0x4) 8MS	Time-out if no lock within 8 ms
          target::sysctrl::DPLLCTRLB::LTIME::_9MS (0x5) 9MS	Time-out if no lock within 9 ms
          target::sysctrl::DPLLCTRLB::LTIME::_10MS (0x6) 10MS	Time-out if no lock within 10 ms
          target::sysctrl::DPLLCTRLB::LTIME::_11MS (0x7) 11MS	Time-out if no lock within 11 ms
        */
        __attribute__((always_inline)) target::sysctrl::DPLLCTRLB::LTIME getLTIME() volatile {
          return static_cast<target::sysctrl::DPLLCTRLB::LTIME>((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Lock Time
          @param value enumeration value:
          target::sysctrl::DPLLCTRLB::LTIME::NONE (0x0) Default	No time-out
          target::sysctrl::DPLLCTRLB::LTIME::_8MS (0x4) 8MS	Time-out if no lock within 8 ms
          target::sysctrl::DPLLCTRLB::LTIME::_9MS (0x5) 9MS	Time-out if no lock within 9 ms
          target::sysctrl::DPLLCTRLB::LTIME::_10MS (0x6) 10MS	Time-out if no lock within 10 ms
          target::sysctrl::DPLLCTRLB::LTIME::_11MS (0x7) 11MS	Time-out if no lock within 11 ms
        */
        __attribute__((always_inline)) Register& setLTIME(target::sysctrl::DPLLCTRLB::LTIME value) volatile {
          raw = (raw & ~(0x7 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
        /**
          Gets Lock Bypass
          @return boolean value
        */
        __attribute__((always_inline)) bool getLBYPASS() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Lock Bypass
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLBYPASS(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Clock Divider
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getDIV() volatile {
          return ((raw & (0x7FF << 16)) >> 16);
        }
        /**
          Sets Clock Divider
          @param value value in range 0..2047
        */
        __attribute__((always_inline)) Register& setDIV(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 16)) | ((((value)) << 16) & (0x7FF << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DPLL Status
    */
    namespace DPLLSTATUS {
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
          Gets DPLL Lock Status
          @return boolean value
        */
        __attribute__((always_inline)) bool getLOCK() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets DPLL Lock Status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Output Clock Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getCLKRDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Output Clock Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCLKRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets DPLL Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets DPLL Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Divider Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIV() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Divider Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIV(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0x4];
          /**
            Interrupt Enable Set
          */
          INTENSET::Register INTENSET;
        };
        struct {
          char _space_INTFLAG[0x8];
          /**
            Interrupt Flag Status and Clear
          */
          INTFLAG::Register INTFLAG;
        };
        struct {
          char _space_PCLKSR[0xc];
          /**
            Power and Clocks Status
          */
          PCLKSR::Register PCLKSR;
        };
        struct {
          char _space_XOSC[0x10];
          /**
            External Multipurpose Crystal Oscillator (XOSC) Control
          */
          XOSC::Register XOSC;
        };
        struct {
          char _space_XOSC32K[0x14];
          /**
            32kHz External Crystal Oscillator (XOSC32K) Control
          */
          XOSC32K::Register XOSC32K;
        };
        struct {
          char _space_OSC32K[0x18];
          /**
            32kHz Internal Oscillator (OSC32K) Control
          */
          OSC32K::Register OSC32K;
        };
        struct {
          char _space_OSCULP32K[0x1c];
          /**
            32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
          */
          OSCULP32K::Register OSCULP32K;
        };
        struct {
          char _space_OSC8M[0x20];
          /**
            8MHz Internal Oscillator (OSC8M) Control
          */
          OSC8M::Register OSC8M;
        };
        struct {
          char _space_DFLLCTRL[0x24];
          /**
            DFLL48M Control
          */
          DFLLCTRL::Register DFLLCTRL;
        };
        struct {
          char _space_DFLLVAL[0x28];
          /**
            DFLL48M Value
          */
          DFLLVAL::Register DFLLVAL;
        };
        struct {
          char _space_DFLLMUL[0x2c];
          /**
            DFLL48M Multiplier
          */
          DFLLMUL::Register DFLLMUL;
        };
        struct {
          char _space_DFLLSYNC[0x30];
          /**
            DFLL48M Synchronization
          */
          DFLLSYNC::Register DFLLSYNC;
        };
        struct {
          char _space_BOD33[0x34];
          /**
            3.3V Brown-Out Detector (BOD33) Control
          */
          BOD33::Register BOD33;
        };
        struct {
          char _space_VREF[0x40];
          /**
            Voltage References System (VREF) Control
          */
          VREF::Register VREF;
        };
        struct {
          char _space_DPLLCTRLA[0x44];
          /**
            DPLL Control A
          */
          DPLLCTRLA::Register DPLLCTRLA;
        };
        struct {
          char _space_DPLLRATIO[0x48];
          /**
            DPLL Ratio Control
          */
          DPLLRATIO::Register DPLLRATIO;
        };
        struct {
          char _space_DPLLCTRLB[0x4c];
          /**
            DPLL Control B
          */
          DPLLCTRLB::Register DPLLCTRLB;
        };
        struct {
          char _space_DPLLSTATUS[0x50];
          /**
            DPLL Status
          */
          DPLLSTATUS::Register DPLLSTATUS;
        };
      };
    };
  }
  
  extern volatile sysctrl::Peripheral SYSCTRL;
}