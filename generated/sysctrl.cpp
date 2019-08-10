namespace target {
  namespace sysctrl {
    namespace reg {
      
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
          Gets XOSC Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXOSCRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets XOSC Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXOSCRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets XOSC32K Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXOSC32KRDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets XOSC32K Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXOSC32KRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets OSC32K Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSC32KRDY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets OSC32K Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSC32KRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets OSC8M Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSC8MRDY() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets OSC8M Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSC8MRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets DFLL Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLRDY() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets DFLL Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets DFLL Out Of Bounds Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLOOB() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets DFLL Out Of Bounds Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLOOB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets DFLL Lock Fine Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLLCKF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DFLL Lock Fine Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLLCKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets DFLL Lock Coarse Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLLCKC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets DFLL Lock Coarse Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLLCKC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DFLL Reference Clock Stopped Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLRCS() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets DFLL Reference Clock Stopped Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLRCS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets BOD33 Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33RDY() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets BOD33 Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33RDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets BOD33 Detection Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33DET() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets BOD33 Detection Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33DET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets BOD33 Synchronization Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getB33SRDY() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets BOD33 Synchronization Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setB33SRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets DPLL Lock Rise Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLCKR() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets DPLL Lock Rise Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLCKR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DPLL Lock Fall Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLCKF() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets DPLL Lock Fall Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLCKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets DPLL Lock Timeout Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLTO() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets DPLL Lock Timeout Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLTO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
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
          Gets XOSC Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXOSCRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets XOSC Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXOSCRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets XOSC32K Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXOSC32KRDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets XOSC32K Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXOSC32KRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets OSC32K Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSC32KRDY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets OSC32K Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSC32KRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets OSC8M Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSC8MRDY() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets OSC8M Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSC8MRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets DFLL Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLRDY() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets DFLL Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets DFLL Out Of Bounds Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLOOB() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets DFLL Out Of Bounds Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLOOB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets DFLL Lock Fine Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLLCKF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DFLL Lock Fine Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLLCKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets DFLL Lock Coarse Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLLCKC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets DFLL Lock Coarse Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLLCKC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DFLL Reference Clock Stopped Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLRCS() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets DFLL Reference Clock Stopped Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLRCS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets BOD33 Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33RDY() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets BOD33 Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33RDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets BOD33 Detection Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33DET() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets BOD33 Detection Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33DET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets BOD33 Synchronization Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getB33SRDY() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets BOD33 Synchronization Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setB33SRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets DPLL Lock Rise Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLCKR() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets DPLL Lock Rise Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLCKR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DPLL Lock Fall Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLCKF() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets DPLL Lock Fall Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLCKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets DPLL Lock Timeout Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLTO() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets DPLL Lock Timeout Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLTO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
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
          Gets XOSC Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXOSCRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets XOSC Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXOSCRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets XOSC32K Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXOSC32KRDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets XOSC32K Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXOSC32KRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets OSC32K Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSC32KRDY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets OSC32K Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSC32KRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets OSC8M Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSC8MRDY() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets OSC8M Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSC8MRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets DFLL Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLRDY() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets DFLL Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets DFLL Out Of Bounds
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLOOB() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets DFLL Out Of Bounds
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLOOB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets DFLL Lock Fine
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLLCKF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DFLL Lock Fine
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLLCKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets DFLL Lock Coarse
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLLCKC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets DFLL Lock Coarse
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLLCKC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DFLL Reference Clock Stopped
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLRCS() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets DFLL Reference Clock Stopped
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLRCS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets BOD33 Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33RDY() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets BOD33 Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33RDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets BOD33 Detection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33DET() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets BOD33 Detection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33DET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets BOD33 Synchronization Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getB33SRDY() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets BOD33 Synchronization Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setB33SRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets DPLL Lock Rise
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLCKR() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets DPLL Lock Rise
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLCKR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DPLL Lock Fall
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLCKF() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets DPLL Lock Fall
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLCKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets DPLL Lock Timeout
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLTO() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets DPLL Lock Timeout
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLTO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
      };
      
      /**
        Power and Clocks Status
      */
      class PCLKSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets XOSC Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXOSCRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets XOSC Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXOSCRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets XOSC32K Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXOSC32KRDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets XOSC32K Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXOSC32KRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets OSC32K Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSC32KRDY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets OSC32K Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSC32KRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets OSC8M Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSC8MRDY() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets OSC8M Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSC8MRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets DFLL Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLRDY() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets DFLL Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets DFLL Out Of Bounds
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLOOB() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets DFLL Out Of Bounds
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLOOB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets DFLL Lock Fine
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLLCKF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets DFLL Lock Fine
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLLCKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets DFLL Lock Coarse
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLLCKC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets DFLL Lock Coarse
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLLCKC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DFLL Reference Clock Stopped
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDFLLRCS() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets DFLL Reference Clock Stopped
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDFLLRCS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets BOD33 Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33RDY() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets BOD33 Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33RDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets BOD33 Detection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33DET() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets BOD33 Detection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33DET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets BOD33 Synchronization Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getB33SRDY() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets BOD33 Synchronization Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setB33SRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets DPLL Lock Rise
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLCKR() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets DPLL Lock Rise
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLCKR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets DPLL Lock Fall
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLCKF() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets DPLL Lock Fall
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLCKF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets DPLL Lock Timeout
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPLLLTO() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets DPLL Lock Timeout
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPLLLTO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
      };
      
      /**
        External Multipurpose Crystal Oscillator (XOSC) Control
      */
      class XOSC {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Oscillator Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Oscillator Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Crystal Oscillator Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXTALEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Crystal Oscillator Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXTALEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets On Demand Control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getONDEMAND() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets On Demand Control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setONDEMAND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Oscillator Gain
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getGAIN() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Oscillator Gain
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setGAIN(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Automatic Amplitude Gain Control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAMPGC() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Automatic Amplitude Gain Control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAMPGC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Start-Up Time
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSTARTUP() volatile {
          return (raw & (0xF << 12)) >> 12;
        }
        /**
          Sets Start-Up Time
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSTARTUP(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((value << 12) & (0xF << 12));
        }
      };
      
      /**
        32kHz External Crystal Oscillator (XOSC32K) Control
      */
      class XOSC32K {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Oscillator Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Oscillator Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Crystal Oscillator Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getXTALEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Crystal Oscillator Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setXTALEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets 32kHz Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN32K() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets 32kHz Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN32K(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets 1kHz Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN1K() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets 1kHz Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN1K(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Automatic Amplitude Control Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAAMPEN() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Automatic Amplitude Control Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAAMPEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets On Demand Control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getONDEMAND() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets On Demand Control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setONDEMAND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Oscillator Start-Up Time
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSTARTUP() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Oscillator Start-Up Time
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setSTARTUP(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Write Lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRTLOCK() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Write Lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRTLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
      };
      
      /**
        32kHz Internal Oscillator (OSC32K) Control
      */
      class OSC32K {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Oscillator Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Oscillator Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets 32kHz Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN32K() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets 32kHz Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN32K(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets 1kHz Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN1K() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets 1kHz Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN1K(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets On Demand Control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getONDEMAND() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets On Demand Control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setONDEMAND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Oscillator Start-Up Time
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSTARTUP() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Oscillator Start-Up Time
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setSTARTUP(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Write Lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRTLOCK() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Write Lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRTLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Oscillator Calibration
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getCALIB() volatile {
          return (raw & (0x7F << 16)) >> 16;
        }
        /**
          Sets Oscillator Calibration
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setCALIB(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 16)) | ((value << 16) & (0x7F << 16));
        }
      };
      
      /**
        32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
      */
      class OSCULP32K {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Oscillator Calibration
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getCALIB() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets Oscillator Calibration
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setCALIB(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
        /**
          Gets Write Lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRTLOCK() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Write Lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRTLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        8MHz Internal Oscillator (OSC8M) Control
      */
      class OSC8M {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Oscillator Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Oscillator Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets On Demand Control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getONDEMAND() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets On Demand Control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setONDEMAND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Oscillator Prescaler
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRESC() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Oscillator Prescaler
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRESC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Oscillator Calibration
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getCALIB() volatile {
          return (raw & (0xFFF << 16)) >> 16;
        }
        /**
          Sets Oscillator Calibration
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setCALIB(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 16)) | ((value << 16) & (0xFFF << 16));
        }
        /**
          Gets Oscillator Frequency Range
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFRANGE() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets Oscillator Frequency Range
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFRANGE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        DFLL48M Control
      */
      class DFLLCTRL {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DFLL Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets DFLL Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Operating Mode Selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMODE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Operating Mode Selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Stable DFLL Frequency
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTABLE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Stable DFLL Frequency
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Lose Lock After Wake
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLLAW() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Lose Lock After Wake
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLLAW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets USB Clock Recovery Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSBCRM() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets USB Clock Recovery Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSBCRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets On Demand Control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getONDEMAND() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets On Demand Control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setONDEMAND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Chill Cycle Disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCDIS() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Chill Cycle Disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Quick Lock Disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getQLDIS() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Quick Lock Disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setQLDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Bypass Coarse Lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBPLCKC() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Bypass Coarse Lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBPLCKC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Wait Lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWAITLOCK() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Wait Lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWAITLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
      };
      
      /**
        DFLL48M Value
      */
      class DFLLVAL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Fine Value
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getFINE() volatile {
          return (raw & (0x3FF << 0)) >> 0;
        }
        /**
          Sets Fine Value
          @param value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long setFINE(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 0)) | ((value << 0) & (0x3FF << 0));
        }
        /**
          Gets Coarse Value
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCOARSE() volatile {
          return (raw & (0x3F << 10)) >> 10;
        }
        /**
          Sets Coarse Value
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setCOARSE(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 10)) | ((value << 10) & (0x3F << 10));
        }
        /**
          Gets Multiplication Ratio Difference
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDIFF() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Multiplication Ratio Difference
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDIFF(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
      };
      
      /**
        DFLL48M Multiplier
      */
      class DFLLMUL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DFLL Multiply Factor
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getMUL() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets DFLL Multiply Factor
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setMUL(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
        /**
          Gets Fine Maximum Step
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getFSTEP() volatile {
          return (raw & (0x3FF << 16)) >> 16;
        }
        /**
          Sets Fine Maximum Step
          @param value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long setFSTEP(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 16)) | ((value << 16) & (0x3FF << 16));
        }
        /**
          Gets Coarse Maximum Step
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCSTEP() volatile {
          return (raw & (0x3F << 26)) >> 26;
        }
        /**
          Sets Coarse Maximum Step
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setCSTEP(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 26)) | ((value << 26) & (0x3F << 26));
        }
      };
      
      /**
        DFLL48M Synchronization
      */
      class DFLLSYNC {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Read Request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREADREQ() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Read Request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREADREQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        3.3V Brown-Out Detector (BOD33) Control
      */
      class BOD33 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
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
          Gets Hysteresis
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHYST() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Hysteresis
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHYST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets BOD33 Action
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getACTION() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets BOD33 Action
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setACTION(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Operation Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMODE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Operation Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCEN() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Prescaler Select
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPSEL() volatile {
          return (raw & (0xF << 12)) >> 12;
        }
        /**
          Sets Prescaler Select
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPSEL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((value << 12) & (0xF << 12));
        }
        /**
          Gets BOD33 Threshold Level
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getLEVEL() volatile {
          return (raw & (0x3F << 16)) >> 16;
        }
        /**
          Sets BOD33 Threshold Level
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setLEVEL(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 16)) | ((value << 16) & (0x3F << 16));
        }
      };
      
      /**
        Voltage References System (VREF) Control
      */
      class VREF {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Temperature Sensor Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Temperature Sensor Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Bandgap Output Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBGOUTEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Bandgap Output Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBGOUTEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Bandgap Voltage Generator Calibration
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getCALIB() volatile {
          return (raw & (0x7FF << 16)) >> 16;
        }
        /**
          Sets Bandgap Voltage Generator Calibration
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setCALIB(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 16)) | ((value << 16) & (0x7FF << 16));
        }
      };
      
      /**
        DPLL Control A
      */
      class DPLLCTRLA {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DPLL Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets DPLL Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets On Demand Clock Activation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getONDEMAND() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets On Demand Clock Activation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setONDEMAND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        DPLL Ratio Control
      */
      class DPLLRATIO {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Loop Divider Ratio
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getLDR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Loop Divider Ratio
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setLDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
        /**
          Gets Loop Divider Ratio Fractional Part
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getLDRFRAC() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Loop Divider Ratio Fractional Part
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setLDRFRAC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
      };
      
      /**
        DPLL Control B
      */
      class DPLLCTRLB {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Proportional Integral Filter Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFILTER() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Proportional Integral Filter Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFILTER(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Low-Power Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Low-Power Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Wake Up Fast
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Wake Up Fast
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Reference Clock Selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getREFCLK() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Reference Clock Selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setREFCLK(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Lock Time
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getLTIME() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Lock Time
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setLTIME(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Lock Bypass
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLBYPASS() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Lock Bypass
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLBYPASS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Clock Divider
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getDIV() volatile {
          return (raw & (0x7FF << 16)) >> 16;
        }
        /**
          Sets Clock Divider
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setDIV(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 16)) | ((value << 16) & (0x7FF << 16));
        }
      };
      
      /**
        DPLL Status
      */
      class DPLLSTATUS {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DPLL Lock Status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLOCK() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets DPLL Lock Status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Output Clock Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCLKRDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Output Clock Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCLKRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets DPLL Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENABLE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets DPLL Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Divider Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIV() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Divider Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
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
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0x4];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x8];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
        struct {
          volatile char _space_PCLKSR[0xc];
          /**
            Power and Clocks Status
          */
          volatile reg::PCLKSR PCLKSR;
        };
        struct {
          volatile char _space_XOSC[0x10];
          /**
            External Multipurpose Crystal Oscillator (XOSC) Control
          */
          volatile reg::XOSC XOSC;
        };
        struct {
          volatile char _space_XOSC32K[0x14];
          /**
            32kHz External Crystal Oscillator (XOSC32K) Control
          */
          volatile reg::XOSC32K XOSC32K;
        };
        struct {
          volatile char _space_OSC32K[0x18];
          /**
            32kHz Internal Oscillator (OSC32K) Control
          */
          volatile reg::OSC32K OSC32K;
        };
        struct {
          volatile char _space_OSCULP32K[0x1c];
          /**
            32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
          */
          volatile reg::OSCULP32K OSCULP32K;
        };
        struct {
          volatile char _space_OSC8M[0x20];
          /**
            8MHz Internal Oscillator (OSC8M) Control
          */
          volatile reg::OSC8M OSC8M;
        };
        struct {
          volatile char _space_DFLLCTRL[0x24];
          /**
            DFLL48M Control
          */
          volatile reg::DFLLCTRL DFLLCTRL;
        };
        struct {
          volatile char _space_DFLLVAL[0x28];
          /**
            DFLL48M Value
          */
          volatile reg::DFLLVAL DFLLVAL;
        };
        struct {
          volatile char _space_DFLLMUL[0x2c];
          /**
            DFLL48M Multiplier
          */
          volatile reg::DFLLMUL DFLLMUL;
        };
        struct {
          volatile char _space_DFLLSYNC[0x30];
          /**
            DFLL48M Synchronization
          */
          volatile reg::DFLLSYNC DFLLSYNC;
        };
        struct {
          volatile char _space_BOD33[0x34];
          /**
            3.3V Brown-Out Detector (BOD33) Control
          */
          volatile reg::BOD33 BOD33;
        };
        struct {
          volatile char _space_VREF[0x40];
          /**
            Voltage References System (VREF) Control
          */
          volatile reg::VREF VREF;
        };
        struct {
          volatile char _space_DPLLCTRLA[0x44];
          /**
            DPLL Control A
          */
          volatile reg::DPLLCTRLA DPLLCTRLA;
        };
        struct {
          volatile char _space_DPLLRATIO[0x48];
          /**
            DPLL Ratio Control
          */
          volatile reg::DPLLRATIO DPLLRATIO;
        };
        struct {
          volatile char _space_DPLLCTRLB[0x4c];
          /**
            DPLL Control B
          */
          volatile reg::DPLLCTRLB DPLLCTRLB;
        };
        struct {
          volatile char _space_DPLLSTATUS[0x50];
          /**
            DPLL Status
          */
          volatile reg::DPLLSTATUS DPLLSTATUS;
        };
      };
    };
  }
  
  extern sysctrl::Peripheral SYSCTRL;
}