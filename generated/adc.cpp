namespace target {
  namespace adc {
    namespace reg {
      
      /**
        Control A
      */
      class CTRLA {
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
          Gets Run in Standby
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Run in Standby
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Reference Control
      */
      class REFCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Reference Selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getREFSEL() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Reference Selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setREFSEL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Reference Buffer Offset Compensation Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREFCOMP() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Reference Buffer Offset Compensation Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREFCOMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Average Control
      */
      class AVGCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of Samples to be Collected
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSAMPLENUM() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Number of Samples to be Collected
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSAMPLENUM(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Adjusting Result / Division Coefficient
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getADJRES() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Adjusting Result / Division Coefficient
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setADJRES(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
      };
      
      /**
        Sampling Time Control
      */
      class SAMPCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Sampling Time Length
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getSAMPLEN() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Sampling Time Length
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setSAMPLEN(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
      };
      
      /**
        Control B
      */
      class CTRLB {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Differential Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIFFMODE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Differential Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIFFMODE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Left-Adjusted Result
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLEFTADJ() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Left-Adjusted Result
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLEFTADJ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Free Running Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFREERUN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Free Running Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFREERUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Digital Correction Logic Enabled
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCORREN() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Digital Correction Logic Enabled
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCORREN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Conversion Result Resolution
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRESSEL() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Conversion Result Resolution
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRESSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Prescaler Configuration
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPRESCALER() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Prescaler Configuration
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPRESCALER(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
      };
      
      /**
        Window Monitor Control
      */
      class WINCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Window Monitor Mode
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWINMODE() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Window Monitor Mode
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setWINMODE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        Software Trigger
      */
      class SWTRIG {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets ADC Conversion Flush
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFLUSH() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets ADC Conversion Flush
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFLUSH(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets ADC Start Conversion
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTART() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets ADC Start Conversion
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTART(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        Input Control
      */
      class INPUTCTRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Positive Mux Input Selection
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getMUXPOS() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets Positive Mux Input Selection
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setMUXPOS(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
        /**
          Gets Negative Mux Input Selection
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getMUXNEG() volatile {
          return (raw & (0x1F << 8)) >> 8;
        }
        /**
          Sets Negative Mux Input Selection
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setMUXNEG(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((value << 8) & (0x1F << 8));
        }
        /**
          Gets Number of Input Channels Included in Scan
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getINPUTSCAN() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Number of Input Channels Included in Scan
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setINPUTSCAN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Positive Mux Setting Offset
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getINPUTOFFSET() volatile {
          return (raw & (0xF << 20)) >> 20;
        }
        /**
          Sets Positive Mux Setting Offset
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setINPUTOFFSET(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((value << 20) & (0xF << 20));
        }
        /**
          Gets Gain Factor Selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getGAIN() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Gain Factor Selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setGAIN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
      };
      
      /**
        Event Control
      */
      class EVCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Start Conversion Event In
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTARTEI() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Start Conversion Event In
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTARTEI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Synchronization Event In
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCEI() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Synchronization Event In
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCEI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Result Ready Event Out
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESRDYEO() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Result Ready Event Out
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESRDYEO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Window Monitor Event Out
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWINMONEO() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Window Monitor Event Out
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWINMONEO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
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
          Gets Result Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Result Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Overrun Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVERRUN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Overrun Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVERRUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Window Monitor Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWINMON() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Window Monitor Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWINMON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
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
          Gets Result Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Result Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Overrun Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVERRUN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Overrun Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVERRUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Window Monitor Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWINMON() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Window Monitor Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWINMON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
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
          Gets Result Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Result Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Overrun
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOVERRUN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Overrun
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOVERRUN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Window Monitor
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWINMON() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Window Monitor
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWINMON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
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
        Result
      */
      class RESULT {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Result Conversion Value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getRESULT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Result Conversion Value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setRESULT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        Window Monitor Lower Threshold
      */
      class WINLT {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Window Lower Threshold
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getWINLT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Window Lower Threshold
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setWINLT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        Window Monitor Upper Threshold
      */
      class WINUT {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Window Upper Threshold
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getWINUT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Window Upper Threshold
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setWINUT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        Gain Correction
      */
      class GAINCORR {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Gain Correction Value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getGAINCORR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Gain Correction Value
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setGAINCORR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        Offset Correction
      */
      class OFFSETCORR {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Offset Correction Value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getOFFSETCORR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Offset Correction Value
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setOFFSETCORR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        Calibration
      */
      class CALIB {
        volatile unsigned short raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Linearity Calibration Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getLINEARITY_CAL() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Linearity Calibration Value
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setLINEARITY_CAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
        /**
          Gets Bias Calibration Value
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getBIAS_CAL() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Bias Calibration Value
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setBIAS_CAL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
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
          volatile char _space_REFCTRL[0x1];
          /**
            Reference Control
          */
          volatile reg::REFCTRL REFCTRL;
        };
        struct {
          volatile char _space_AVGCTRL[0x2];
          /**
            Average Control
          */
          volatile reg::AVGCTRL AVGCTRL;
        };
        struct {
          volatile char _space_SAMPCTRL[0x3];
          /**
            Sampling Time Control
          */
          volatile reg::SAMPCTRL SAMPCTRL;
        };
        struct {
          volatile char _space_CTRLB[0x4];
          /**
            Control B
          */
          volatile reg::CTRLB CTRLB;
        };
        struct {
          volatile char _space_WINCTRL[0x8];
          /**
            Window Monitor Control
          */
          volatile reg::WINCTRL WINCTRL;
        };
        struct {
          volatile char _space_SWTRIG[0xc];
          /**
            Software Trigger
          */
          volatile reg::SWTRIG SWTRIG;
        };
        struct {
          volatile char _space_INPUTCTRL[0x10];
          /**
            Input Control
          */
          volatile reg::INPUTCTRL INPUTCTRL;
        };
        struct {
          volatile char _space_EVCTRL[0x14];
          /**
            Event Control
          */
          volatile reg::EVCTRL EVCTRL;
        };
        struct {
          volatile char _space_INTENCLR[0x16];
          /**
            Interrupt Enable Clear
          */
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0x17];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x18];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
        struct {
          volatile char _space_STATUS[0x19];
          /**
            Status
          */
          volatile reg::STATUS STATUS;
        };
        struct {
          volatile char _space_RESULT[0x1a];
          /**
            Result
          */
          volatile reg::RESULT RESULT;
        };
        struct {
          volatile char _space_WINLT[0x1c];
          /**
            Window Monitor Lower Threshold
          */
          volatile reg::WINLT WINLT;
        };
        struct {
          volatile char _space_WINUT[0x20];
          /**
            Window Monitor Upper Threshold
          */
          volatile reg::WINUT WINUT;
        };
        struct {
          volatile char _space_GAINCORR[0x24];
          /**
            Gain Correction
          */
          volatile reg::GAINCORR GAINCORR;
        };
        struct {
          volatile char _space_OFFSETCORR[0x26];
          /**
            Offset Correction
          */
          volatile reg::OFFSETCORR OFFSETCORR;
        };
        struct {
          volatile char _space_CALIB[0x28];
          /**
            Calibration
          */
          volatile reg::CALIB CALIB;
        };
        struct {
          volatile char _space_DBGCTRL[0x2a];
          /**
            Debug Control
          */
          volatile reg::DBGCTRL DBGCTRL;
        };
      };
    };
  }
  
  extern adc::Peripheral ADC;
}