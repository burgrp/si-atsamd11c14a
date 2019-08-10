namespace target {
  namespace usb {
    namespace reg {
      namespace DEVICE {
        
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
            Gets Run in Standby Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Run in Standby Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Operating Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Operating Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          Synchronization Busy
        */
        class SYNCBUSY {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Enable Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Enable Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
        };
        
        /**
          USB Quality Of Service
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
            Gets Configuration Quality of Service
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCQOS() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Configuration Quality of Service
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCQOS(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Data Quality of Service
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getDQOS() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Data Quality of Service
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setDQOS(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
        };
        
        /**
          DEVICE Control B
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
            Gets Detach
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDETACH() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Detach
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDETACH(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Upstream Resume
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getUPRSM() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Upstream Resume
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setUPRSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Speed Configuration
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSPDCONF() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Speed Configuration
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSPDCONF(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets No Reply
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getNREPLY() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets No Reply
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setNREPLY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets Test mode J
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTSTJ() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets Test mode J
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTSTJ(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Test mode K
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTSTK() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Test mode K
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTSTK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Test packet mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTSTPCKT() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Test packet mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTSTPCKT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Specific Operational Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getOPMODE2() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Specific Operational Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setOPMODE2(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Global NAK
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getGNAK() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Global NAK
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setGNAK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
          /**
            Gets Link Power Management Handshake
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getLPMHDSK() volatile {
            return (raw & (0x3 << 10)) >> 10;
          }
          /**
            Sets Link Power Management Handshake
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setLPMHDSK(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
          }
        };
        
        /**
          DEVICE Device Address
        */
        class DADD {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Device Address
            @return value in range 0..127
          */
          __attribute__((always_inline)) unsigned long getDADD() volatile {
            return (raw & (0x7F << 0)) >> 0;
          }
          /**
            Sets Device Address
            @param value in range 0..127
          */
          __attribute__((always_inline)) unsigned long setDADD(unsigned long value) volatile {
            raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
          }
          /**
            Gets Device Address Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getADDEN() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Device Address Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setADDEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          DEVICE Status
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
            Gets Speed Status
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSPEED() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Speed Status
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSPEED(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets USB Line State Status
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getLINESTATE() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets USB Line State Status
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setLINESTATE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
          }
        };
        
        /**
          Finite State Machine Status
        */
        class FSMSTATUS {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Fine State Machine Status
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getFSMSTATE() volatile {
            return (raw & (0x3F << 0)) >> 0;
          }
          /**
            Sets Fine State Machine Status
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setFSMSTATE(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
          }
        };
        
        /**
          DEVICE Device Frame Number
        */
        class FNUM {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Micro Frame Number
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getMFNUM() volatile {
            return (raw & (0x7 << 0)) >> 0;
          }
          /**
            Sets Micro Frame Number
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setMFNUM(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
          }
          /**
            Gets Frame Number
            @return value in range 0..2047
          */
          __attribute__((always_inline)) unsigned long getFNUM() volatile {
            return (raw & (0x7FF << 3)) >> 3;
          }
          /**
            Sets Frame Number
            @param value in range 0..2047
          */
          __attribute__((always_inline)) unsigned long setFNUM(unsigned long value) volatile {
            raw = (raw & ~(0x7FF << 3)) | ((value << 3) & (0x7FF << 3));
          }
          /**
            Gets Frame Number CRC Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getFNCERR() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Frame Number CRC Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setFNCERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
          }
        };
        
        /**
          DEVICE Device Interrupt Enable Clear
        */
        class INTENCLR {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Suspend Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSUSPEND() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Suspend Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSUSPEND(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Micro Start of Frame Interrupt Enable in High Speed Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMSOF() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Micro Start of Frame Interrupt Enable in High Speed Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMSOF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Start Of Frame Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSOF() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Start Of Frame Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSOF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets End of Reset Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getEORST() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets End of Reset Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setEORST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Wake Up Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getWAKEUP() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Wake Up Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setWAKEUP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets End Of Resume Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getEORSM() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets End Of Resume Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setEORSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Upstream Resume Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getUPRSM() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Upstream Resume Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setUPRSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Ram Access Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRAMACER() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Ram Access Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRAMACER(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Link Power Management Not Yet Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLPMNYET() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Link Power Management Not Yet Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLPMNYET(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Link Power Management Suspend Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLPMSUSP() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Link Power Management Suspend Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLPMSUSP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
        };
        
        /**
          DEVICE Device Interrupt Enable Set
        */
        class INTENSET {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Suspend Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSUSPEND() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Suspend Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSUSPEND(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Micro Start of Frame Interrupt Enable in High Speed Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMSOF() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Micro Start of Frame Interrupt Enable in High Speed Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMSOF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Start Of Frame Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSOF() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Start Of Frame Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSOF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets End of Reset Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getEORST() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets End of Reset Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setEORST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Wake Up Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getWAKEUP() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Wake Up Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setWAKEUP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets End Of Resume Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getEORSM() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets End Of Resume Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setEORSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Upstream Resume Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getUPRSM() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Upstream Resume Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setUPRSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Ram Access Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRAMACER() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Ram Access Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRAMACER(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Link Power Management Not Yet Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLPMNYET() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Link Power Management Not Yet Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLPMNYET(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Link Power Management Suspend Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLPMSUSP() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Link Power Management Suspend Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLPMSUSP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
        };
        
        /**
          DEVICE Device Interrupt Flag
        */
        class INTFLAG {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Suspend
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSUSPEND() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Suspend
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSUSPEND(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Micro Start of Frame in High Speed Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMSOF() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Micro Start of Frame in High Speed Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMSOF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Start Of Frame
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSOF() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Start Of Frame
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSOF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets End of Reset
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getEORST() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets End of Reset
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setEORST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Wake Up
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getWAKEUP() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Wake Up
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setWAKEUP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets End Of Resume
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getEORSM() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets End Of Resume
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setEORSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Upstream Resume
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getUPRSM() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Upstream Resume
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setUPRSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Ram Access
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRAMACER() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Ram Access
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRAMACER(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Link Power Management Not Yet
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLPMNYET() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Link Power Management Not Yet
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLPMNYET(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Link Power Management Suspend
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLPMSUSP() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Link Power Management Suspend
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLPMSUSP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
        };
        
        /**
          DEVICE End Point Interrupt Summary
        */
        class EPINTSMRY {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets End Point 0 Interrupt
            @param index in range 0..7
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getEPINT(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets End Point 0 Interrupt
            @param index in range 0..7
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setEPINT(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets End Point 0 Interrupt
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getEPINT() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets End Point 0 Interrupt
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setEPINT(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
        };
        
        /**
          Descriptor Address
        */
        class DESCADD {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Descriptor Address Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getDESCADD() volatile {
            return (raw & (0xFFFFFFFF << 0)) >> 0;
          }
          /**
            Sets Descriptor Address Value
            @param value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long setDESCADD(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
          }
        };
        
        /**
          USB PAD Calibration
        */
        class PADCAL {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets USB Pad Transp calibration
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getTRANSP() volatile {
            return (raw & (0x1F << 0)) >> 0;
          }
          /**
            Sets USB Pad Transp calibration
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setTRANSP(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
          }
          /**
            Gets USB Pad Transn calibration
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getTRANSN() volatile {
            return (raw & (0x1F << 6)) >> 6;
          }
          /**
            Sets USB Pad Transn calibration
            @param value in range 0..31
          */
          __attribute__((always_inline)) unsigned long setTRANSN(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 6)) | ((value << 6) & (0x1F << 6));
          }
          /**
            Gets USB Pad Trim calibration
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getTRIM() volatile {
            return (raw & (0x7 << 12)) >> 12;
          }
          /**
            Sets USB Pad Trim calibration
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setTRIM(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
          }
        };
        
        /**
          DEVICE End Point Configuration
        */
        class EPCFG {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets End Point Type0
            @param index in range 0..1
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getEPTYPE(int index) volatile {
            return (raw & (0x7 << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0));
          }
          /**
            Sets End Point Type0
            @param index in range 0..1
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setEPTYPE(int index, unsigned long value) volatile {
            raw = (raw & ~(0x7 << (0 + 4 * (index - 0)))) | ((value << (0 + 4 * (index - 0))) & (0x7 << (0 + 4 * (index - 0))));
          }
          /**
            Gets End Point Type0
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getEPTYPE() volatile {
            return (raw & (0x3F << 0)) >> 0;
          }
          /**
            Sets End Point Type0
            @param value in range 0..63
          */
          __attribute__((always_inline)) unsigned long setEPTYPE(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
          }
          /**
            Gets NYET Token Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getNYETDIS() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets NYET Token Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setNYETDIS(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          DEVICE End Point Pipe Status Clear
        */
        class EPSTATUSCLR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Stall 0 Request Clear
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTALLRQ(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Stall 0 Request Clear
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTALLRQ(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Stall 0 Request Clear
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSTALLRQ() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Stall 0 Request Clear
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSTALLRQ(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
          }
          /**
            Gets Bank 0 Ready Clear
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getBK_RDY(int index) volatile {
            return (raw & (0x1 << (6 + 1 * (index - 0)))) >> (6 + 1 * (index - 0));
          }
          /**
            Sets Bank 0 Ready Clear
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setBK_RDY(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (6 + 1 * (index - 0)))) | ((value << (6 + 1 * (index - 0))) & (0x1 << (6 + 1 * (index - 0))));
          }
          /**
            Gets Bank 0 Ready Clear
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getBK_RDY() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Bank 0 Ready Clear
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setBK_RDY(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
          }
          /**
            Gets Data Toggle OUT Clear
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDTGLOUT() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Toggle OUT Clear
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDTGLOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Data Toggle IN Clear
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDTGLIN() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Data Toggle IN Clear
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDTGLIN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Current Bank Clear
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCURBK() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Current Bank Clear
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCURBK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
        };
        
        /**
          DEVICE End Point Pipe Status Set
        */
        class EPSTATUSSET {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Stall 0 Request Set
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTALLRQ(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Stall 0 Request Set
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTALLRQ(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Stall 0 Request Set
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSTALLRQ() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Stall 0 Request Set
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSTALLRQ(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
          }
          /**
            Gets Bank 0 Ready Set
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getBK_RDY(int index) volatile {
            return (raw & (0x1 << (6 + 1 * (index - 0)))) >> (6 + 1 * (index - 0));
          }
          /**
            Sets Bank 0 Ready Set
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setBK_RDY(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (6 + 1 * (index - 0)))) | ((value << (6 + 1 * (index - 0))) & (0x1 << (6 + 1 * (index - 0))));
          }
          /**
            Gets Bank 0 Ready Set
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getBK_RDY() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Bank 0 Ready Set
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setBK_RDY(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
          }
          /**
            Gets Data Toggle OUT Set
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDTGLOUT() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Toggle OUT Set
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDTGLOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Data Toggle IN Set
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDTGLIN() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Data Toggle IN Set
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDTGLIN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Current Bank Set
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCURBK() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Current Bank Set
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCURBK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
        };
        
        /**
          DEVICE End Point Pipe Status
        */
        class EPSTATUS {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Stall 0 Request
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTALLRQ(int index) volatile {
            return (raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0));
          }
          /**
            Sets Stall 0 Request
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTALLRQ(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((value << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
          }
          /**
            Gets Stall 0 Request
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSTALLRQ() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Stall 0 Request
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSTALLRQ(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
          }
          /**
            Gets Bank 0 ready
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getBK_RDY(int index) volatile {
            return (raw & (0x1 << (6 + 1 * (index - 0)))) >> (6 + 1 * (index - 0));
          }
          /**
            Sets Bank 0 ready
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setBK_RDY(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (6 + 1 * (index - 0)))) | ((value << (6 + 1 * (index - 0))) & (0x1 << (6 + 1 * (index - 0))));
          }
          /**
            Gets Bank 0 ready
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getBK_RDY() volatile {
            return (raw & (0x3 << 6)) >> 6;
          }
          /**
            Sets Bank 0 ready
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setBK_RDY(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
          }
          /**
            Gets Data Toggle Out
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDTGLOUT() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Toggle Out
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDTGLOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Data Toggle In
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDTGLIN() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Data Toggle In
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDTGLIN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Current Bank
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCURBK() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Current Bank
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCURBK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
        };
        
        /**
          DEVICE End Point Interrupt Flag
        */
        class EPINTFLAG {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Transfer Complete 0
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTRCPT(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Transfer Complete 0
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTRCPT(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Transfer Complete 0
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getTRCPT() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Transfer Complete 0
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setTRCPT(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Error Flow 0
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTRFAIL(int index) volatile {
            return (raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0));
          }
          /**
            Sets Error Flow 0
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTRFAIL(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((value << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
          }
          /**
            Gets Error Flow 0
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getTRFAIL() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Error Flow 0
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setTRFAIL(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Stall 0 In/out
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTALL(int index) volatile {
            return (raw & (0x1 << (5 + 1 * (index - 0)))) >> (5 + 1 * (index - 0));
          }
          /**
            Sets Stall 0 In/out
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTALL(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (5 + 1 * (index - 0)))) | ((value << (5 + 1 * (index - 0))) & (0x1 << (5 + 1 * (index - 0))));
          }
          /**
            Gets Stall 0 In/out
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSTALL() volatile {
            return (raw & (0x3 << 5)) >> 5;
          }
          /**
            Sets Stall 0 In/out
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSTALL(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
          }
          /**
            Gets Received Setup
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXSTP() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Received Setup
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXSTP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
        };
        
        /**
          DEVICE End Point Interrupt Clear Flag
        */
        class EPINTENCLR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Transfer Complete 0 Interrupt Disable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTRCPT(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Transfer Complete 0 Interrupt Disable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTRCPT(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Transfer Complete 0 Interrupt Disable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getTRCPT() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Transfer Complete 0 Interrupt Disable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setTRCPT(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Error Flow 0 Interrupt Disable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTRFAIL(int index) volatile {
            return (raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0));
          }
          /**
            Sets Error Flow 0 Interrupt Disable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTRFAIL(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((value << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
          }
          /**
            Gets Error Flow 0 Interrupt Disable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getTRFAIL() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Error Flow 0 Interrupt Disable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setTRFAIL(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Stall 0 In/Out Interrupt Disable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTALL(int index) volatile {
            return (raw & (0x1 << (5 + 1 * (index - 0)))) >> (5 + 1 * (index - 0));
          }
          /**
            Sets Stall 0 In/Out Interrupt Disable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTALL(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (5 + 1 * (index - 0)))) | ((value << (5 + 1 * (index - 0))) & (0x1 << (5 + 1 * (index - 0))));
          }
          /**
            Gets Stall 0 In/Out Interrupt Disable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSTALL() volatile {
            return (raw & (0x3 << 5)) >> 5;
          }
          /**
            Sets Stall 0 In/Out Interrupt Disable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSTALL(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
          }
          /**
            Gets Received Setup Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXSTP() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Received Setup Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXSTP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
        };
        
        /**
          DEVICE End Point Interrupt Set Flag
        */
        class EPINTENSET {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Transfer Complete 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTRCPT(int index) volatile {
            return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
          }
          /**
            Sets Transfer Complete 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTRCPT(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          }
          /**
            Gets Transfer Complete 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getTRCPT() volatile {
            return (raw & (0x3 << 0)) >> 0;
          }
          /**
            Sets Transfer Complete 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setTRCPT(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
          }
          /**
            Gets Error Flow 0 Interrupt Enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTRFAIL(int index) volatile {
            return (raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0));
          }
          /**
            Sets Error Flow 0 Interrupt Enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTRFAIL(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((value << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
          }
          /**
            Gets Error Flow 0 Interrupt Enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getTRFAIL() volatile {
            return (raw & (0x3 << 2)) >> 2;
          }
          /**
            Sets Error Flow 0 Interrupt Enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setTRFAIL(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
          }
          /**
            Gets Stall 0 In/out Interrupt enable
            @param index in range 0..1
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSTALL(int index) volatile {
            return (raw & (0x1 << (5 + 1 * (index - 0)))) >> (5 + 1 * (index - 0));
          }
          /**
            Sets Stall 0 In/out Interrupt enable
            @param index in range 0..1
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSTALL(int index, unsigned long value) volatile {
            raw = (raw & ~(0x1 << (5 + 1 * (index - 0)))) | ((value << (5 + 1 * (index - 0))) & (0x1 << (5 + 1 * (index - 0))));
          }
          /**
            Gets Stall 0 In/out Interrupt enable
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSTALL() volatile {
            return (raw & (0x3 << 5)) >> 5;
          }
          /**
            Sets Stall 0 In/out Interrupt enable
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSTALL(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
          }
          /**
            Gets Received Setup Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXSTP() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Received Setup Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXSTP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
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
              Control A
            */
            volatile reg::DEVICE::CTRLA CTRLA;
          };
          struct {
            volatile char _space_SYNCBUSY[0x2];
            /**
              Synchronization Busy
            */
            volatile reg::DEVICE::SYNCBUSY SYNCBUSY;
          };
          struct {
            volatile char _space_QOSCTRL[0x3];
            /**
              USB Quality Of Service
            */
            volatile reg::DEVICE::QOSCTRL QOSCTRL;
          };
          struct {
            volatile char _space_CTRLB[0x8];
            /**
              DEVICE Control B
            */
            volatile reg::DEVICE::CTRLB CTRLB;
          };
          struct {
            volatile char _space_DADD[0xa];
            /**
              DEVICE Device Address
            */
            volatile reg::DEVICE::DADD DADD;
          };
          struct {
            volatile char _space_STATUS[0xc];
            /**
              DEVICE Status
            */
            volatile reg::DEVICE::STATUS STATUS;
          };
          struct {
            volatile char _space_FSMSTATUS[0xd];
            /**
              Finite State Machine Status
            */
            volatile reg::DEVICE::FSMSTATUS FSMSTATUS;
          };
          struct {
            volatile char _space_FNUM[0x10];
            /**
              DEVICE Device Frame Number
            */
            volatile reg::DEVICE::FNUM FNUM;
          };
          struct {
            volatile char _space_INTENCLR[0x14];
            /**
              DEVICE Device Interrupt Enable Clear
            */
            volatile reg::DEVICE::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0x18];
            /**
              DEVICE Device Interrupt Enable Set
            */
            volatile reg::DEVICE::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0x1c];
            /**
              DEVICE Device Interrupt Flag
            */
            volatile reg::DEVICE::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_EPINTSMRY[0x20];
            /**
              DEVICE End Point Interrupt Summary
            */
            volatile reg::DEVICE::EPINTSMRY EPINTSMRY;
          };
          struct {
            volatile char _space_DESCADD[0x24];
            /**
              Descriptor Address
            */
            volatile reg::DEVICE::DESCADD DESCADD;
          };
          struct {
            volatile char _space_PADCAL[0x28];
            /**
              USB PAD Calibration
            */
            volatile reg::DEVICE::PADCAL PADCAL;
          };
          struct {
            volatile char _space_EPCFG[0x100];
            /**
              DEVICE End Point Configuration
            */
            struct {
              volatile reg::DEVICE::EPCFG reg;
              volatile char _space[31];
            } EPCFG[8];
          };
          struct {
            volatile char _space_EPSTATUSCLR[0x104];
            /**
              DEVICE End Point Pipe Status Clear
            */
            struct {
              volatile reg::DEVICE::EPSTATUSCLR reg;
              volatile char _space[31];
            } EPSTATUSCLR[8];
          };
          struct {
            volatile char _space_EPSTATUSSET[0x105];
            /**
              DEVICE End Point Pipe Status Set
            */
            struct {
              volatile reg::DEVICE::EPSTATUSSET reg;
              volatile char _space[31];
            } EPSTATUSSET[8];
          };
          struct {
            volatile char _space_EPSTATUS[0x106];
            /**
              DEVICE End Point Pipe Status
            */
            struct {
              volatile reg::DEVICE::EPSTATUS reg;
              volatile char _space[31];
            } EPSTATUS[8];
          };
          struct {
            volatile char _space_EPINTFLAG[0x107];
            /**
              DEVICE End Point Interrupt Flag
            */
            struct {
              volatile reg::DEVICE::EPINTFLAG reg;
              volatile char _space[31];
            } EPINTFLAG[8];
          };
          struct {
            volatile char _space_EPINTENCLR[0x108];
            /**
              DEVICE End Point Interrupt Clear Flag
            */
            struct {
              volatile reg::DEVICE::EPINTENCLR reg;
              volatile char _space[31];
            } EPINTENCLR[8];
          };
          struct {
            volatile char _space_EPINTENSET[0x109];
            /**
              DEVICE End Point Interrupt Set Flag
            */
            struct {
              volatile reg::DEVICE::EPINTENSET reg;
              volatile char _space[31];
            } EPINTENSET[8];
          };
        } DEVICE;
      };
    };
  }
  
  extern usb::Peripheral USB;
}