namespace target {
  namespace usb {
    namespace DEVICE {
      
      /**
        Control A
      */
      namespace CTRLA {
        enum class MODE {
          // Device Mode
          DEVICE = 0x0,
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
            Gets Run in Standby Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getRUNSTDBY() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Run in Standby Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Operating Mode
            @return enumeration value:
            target::usb::DEVICE::CTRLA::MODE::DEVICE (0x0) Device Mode
          */
          __attribute__((always_inline)) target::usb::DEVICE::CTRLA::MODE getMODE() volatile {
            return static_cast<target::usb::DEVICE::CTRLA::MODE>((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Operating Mode
            @param value enumeration value:
            target::usb::DEVICE::CTRLA::MODE::DEVICE (0x0) Device Mode
          */
          __attribute__((always_inline)) Register& setMODE(target::usb::DEVICE::CTRLA::MODE value) volatile {
            raw = (raw & ~(0x1 << 7)) | (((static_cast<unsigned long>(value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Synchronization Busy
      */
      namespace SYNCBUSY {
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
            Gets Software Reset Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSWRST() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Enable Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getENABLE() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Enable Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USB Quality Of Service
      */
      namespace QOSCTRL {
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
            Gets Configuration Quality of Service
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCQOS() volatile {
            return ((raw & (0x3 << 0)) >> 0);
          }
          /**
            Sets Configuration Quality of Service
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setCQOS(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 0)) | ((((value)) << 0) & (0x3 << 0));
            return *(Register*)this;
          }
          /**
            Gets Data Quality of Service
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getDQOS() volatile {
            return ((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets Data Quality of Service
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setDQOS(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 2)) | ((((value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE Control B
      */
      namespace CTRLB {
        enum class SPDCONF {
          // FS : Full Speed
          FS = 0x0,
          // LS : Low Speed
          LS = 0x1,
          // HS : High Speed capable
          HS = 0x2,
          // HSTM: High Speed Test Mode (force high-speed mode for test mode)
          HSTM = 0x3,
        };
        
        enum class LPMHDSK {
          // No handshake. LPM is not supported
          NO = 0x0,
          // ACK
          ACK = 0x1,
          // NYET
          NYET = 0x2,
          // STALL
          STALL = 0x3,
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
            Gets Detach
            @return boolean value
          */
          __attribute__((always_inline)) bool getDETACH() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Detach
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDETACH(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Upstream Resume
            @return boolean value
          */
          __attribute__((always_inline)) bool getUPRSM() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Upstream Resume
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setUPRSM(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Speed Configuration
            @return enumeration value:
            target::usb::DEVICE::CTRLB::SPDCONF::FS (0x0) FS : Full Speed
            target::usb::DEVICE::CTRLB::SPDCONF::LS (0x1) LS : Low Speed
            target::usb::DEVICE::CTRLB::SPDCONF::HS (0x2) HS : High Speed capable
            target::usb::DEVICE::CTRLB::SPDCONF::HSTM (0x3) HSTM: High Speed Test Mode (force high-speed mode for test mode)
          */
          __attribute__((always_inline)) target::usb::DEVICE::CTRLB::SPDCONF getSPDCONF() volatile {
            return static_cast<target::usb::DEVICE::CTRLB::SPDCONF>((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets Speed Configuration
            @param value enumeration value:
            target::usb::DEVICE::CTRLB::SPDCONF::FS (0x0) FS : Full Speed
            target::usb::DEVICE::CTRLB::SPDCONF::LS (0x1) LS : Low Speed
            target::usb::DEVICE::CTRLB::SPDCONF::HS (0x2) HS : High Speed capable
            target::usb::DEVICE::CTRLB::SPDCONF::HSTM (0x3) HSTM: High Speed Test Mode (force high-speed mode for test mode)
          */
          __attribute__((always_inline)) Register& setSPDCONF(target::usb::DEVICE::CTRLB::SPDCONF value) volatile {
            raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
          /**
            Gets No Reply
            @return boolean value
          */
          __attribute__((always_inline)) bool getNREPLY() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets No Reply
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setNREPLY(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets Test mode J
            @return boolean value
          */
          __attribute__((always_inline)) bool getTSTJ() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets Test mode J
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTSTJ(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Test mode K
            @return boolean value
          */
          __attribute__((always_inline)) bool getTSTK() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Test mode K
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTSTK(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Test packet mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getTSTPCKT() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Test packet mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTSTPCKT(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Specific Operational Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getOPMODE2() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Specific Operational Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOPMODE2(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Global NAK
            @return boolean value
          */
          __attribute__((always_inline)) bool getGNAK() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Global NAK
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setGNAK(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
          /**
            Gets Link Power Management Handshake
            @return enumeration value:
            target::usb::DEVICE::CTRLB::LPMHDSK::NO (0x0) No handshake. LPM is not supported
            target::usb::DEVICE::CTRLB::LPMHDSK::ACK (0x1) ACK
            target::usb::DEVICE::CTRLB::LPMHDSK::NYET (0x2) NYET
            target::usb::DEVICE::CTRLB::LPMHDSK::STALL (0x3) STALL
          */
          __attribute__((always_inline)) target::usb::DEVICE::CTRLB::LPMHDSK getLPMHDSK() volatile {
            return static_cast<target::usb::DEVICE::CTRLB::LPMHDSK>((raw & (0x3 << 10)) >> 10);
          }
          /**
            Sets Link Power Management Handshake
            @param value enumeration value:
            target::usb::DEVICE::CTRLB::LPMHDSK::NO (0x0) No handshake. LPM is not supported
            target::usb::DEVICE::CTRLB::LPMHDSK::ACK (0x1) ACK
            target::usb::DEVICE::CTRLB::LPMHDSK::NYET (0x2) NYET
            target::usb::DEVICE::CTRLB::LPMHDSK::STALL (0x3) STALL
          */
          __attribute__((always_inline)) Register& setLPMHDSK(target::usb::DEVICE::CTRLB::LPMHDSK value) volatile {
            raw = (raw & ~(0x3 << 10)) | (((static_cast<unsigned long>(value)) << 10) & (0x3 << 10));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE Device Address
      */
      namespace DADD {
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
            Gets Device Address
            @return value in range 0..127
          */
          __attribute__((always_inline)) unsigned long getDADD() volatile {
            return ((raw & (0x7F << 0)) >> 0);
          }
          /**
            Sets Device Address
            @param value value in range 0..127
          */
          __attribute__((always_inline)) Register& setDADD(unsigned long value) volatile {
            raw = (raw & ~(0x7F << 0)) | ((((value)) << 0) & (0x7F << 0));
            return *(Register*)this;
          }
          /**
            Gets Device Address Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getADDEN() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Device Address Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setADDEN(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE Status
      */
      namespace STATUS {
        enum class SPEED {
          // Full-speed mode
          FS = 0x0,
          // High-speed mode
          HS = 0x1,
          // Low-speed mode
          LS = 0x2,
        };
        
        enum class LINESTATE {
          // SE0/RESET
          SE0_RESET = 0x0,
          // FS-J or LS-K State
          FS_J_OR_LS_K_STATE = 0x1,
          // FS-K or LS-J State
          FS_K_OR_LS_J_STATE = 0x2,
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
            Gets Speed Status
            @return enumeration value:
            target::usb::DEVICE::STATUS::SPEED::FS (0x0) Full-speed mode
            target::usb::DEVICE::STATUS::SPEED::HS (0x1) High-speed mode
            target::usb::DEVICE::STATUS::SPEED::LS (0x2) Low-speed mode
          */
          __attribute__((always_inline)) target::usb::DEVICE::STATUS::SPEED getSPEED() volatile {
            return static_cast<target::usb::DEVICE::STATUS::SPEED>((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets Speed Status
            @param value enumeration value:
            target::usb::DEVICE::STATUS::SPEED::FS (0x0) Full-speed mode
            target::usb::DEVICE::STATUS::SPEED::HS (0x1) High-speed mode
            target::usb::DEVICE::STATUS::SPEED::LS (0x2) Low-speed mode
          */
          __attribute__((always_inline)) Register& setSPEED(target::usb::DEVICE::STATUS::SPEED value) volatile {
            raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
          /**
            Gets USB Line State Status
            @return enumeration value:
            target::usb::DEVICE::STATUS::LINESTATE::SE0_RESET (0x0) SE0/RESET
            target::usb::DEVICE::STATUS::LINESTATE::FS_J_OR_LS_K_STATE (0x1) FS-J or LS-K State
            target::usb::DEVICE::STATUS::LINESTATE::FS_K_OR_LS_J_STATE (0x2) FS-K or LS-J State
          */
          __attribute__((always_inline)) target::usb::DEVICE::STATUS::LINESTATE getLINESTATE() volatile {
            return static_cast<target::usb::DEVICE::STATUS::LINESTATE>((raw & (0x3 << 6)) >> 6);
          }
          /**
            Sets USB Line State Status
            @param value enumeration value:
            target::usb::DEVICE::STATUS::LINESTATE::SE0_RESET (0x0) SE0/RESET
            target::usb::DEVICE::STATUS::LINESTATE::FS_J_OR_LS_K_STATE (0x1) FS-J or LS-K State
            target::usb::DEVICE::STATUS::LINESTATE::FS_K_OR_LS_J_STATE (0x2) FS-K or LS-J State
          */
          __attribute__((always_inline)) Register& setLINESTATE(target::usb::DEVICE::STATUS::LINESTATE value) volatile {
            raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Finite State Machine Status
      */
      namespace FSMSTATUS {
        enum class FSMSTATE {
          // OFF (L3). It corresponds to the powered-off, disconnected, and disabled state
          OFF = 0x1,
          // ON (L0). It corresponds to the Idle and Active states
          ON = 0x2,
          // SUSPEND (L2)
          SUSPEND = 0x4,
          // SLEEP (L1)
          SLEEP = 0x8,
          // DNRESUME. Down Stream Resume.
          DNRESUME = 0x10,
          // UPRESUME. Up Stream Resume.
          UPRESUME = 0x20,
          // RESET. USB lines Reset.
          RESET = 0x40,
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
            Gets Fine State Machine Status
            @return enumeration value:
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::OFF (0x1) OFF (L3). It corresponds to the powered-off, disconnected, and disabled state
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::ON (0x2) ON (L0). It corresponds to the Idle and Active states
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::SUSPEND (0x4) SUSPEND (L2)
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::SLEEP (0x8) SLEEP (L1)
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::DNRESUME (0x10) DNRESUME. Down Stream Resume.
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::UPRESUME (0x20) UPRESUME. Up Stream Resume.
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::RESET (0x40) RESET. USB lines Reset.
          */
          __attribute__((always_inline)) target::usb::DEVICE::FSMSTATUS::FSMSTATE getFSMSTATE() volatile {
            return static_cast<target::usb::DEVICE::FSMSTATUS::FSMSTATE>((raw & (0x3F << 0)) >> 0);
          }
          /**
            Sets Fine State Machine Status
            @param value enumeration value:
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::OFF (0x1) OFF (L3). It corresponds to the powered-off, disconnected, and disabled state
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::ON (0x2) ON (L0). It corresponds to the Idle and Active states
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::SUSPEND (0x4) SUSPEND (L2)
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::SLEEP (0x8) SLEEP (L1)
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::DNRESUME (0x10) DNRESUME. Down Stream Resume.
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::UPRESUME (0x20) UPRESUME. Up Stream Resume.
            target::usb::DEVICE::FSMSTATUS::FSMSTATE::RESET (0x40) RESET. USB lines Reset.
          */
          __attribute__((always_inline)) Register& setFSMSTATE(target::usb::DEVICE::FSMSTATUS::FSMSTATE value) volatile {
            raw = (raw & ~(0x3F << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x3F << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE Device Frame Number
      */
      namespace FNUM {
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
            Gets Micro Frame Number
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getMFNUM() volatile {
            return ((raw & (0x7 << 0)) >> 0);
          }
          /**
            Sets Micro Frame Number
            @param value value in range 0..7
          */
          __attribute__((always_inline)) Register& setMFNUM(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
            return *(Register*)this;
          }
          /**
            Gets Frame Number
            @return value in range 0..2047
          */
          __attribute__((always_inline)) unsigned long getFNUM() volatile {
            return ((raw & (0x7FF << 3)) >> 3);
          }
          /**
            Sets Frame Number
            @param value value in range 0..2047
          */
          __attribute__((always_inline)) Register& setFNUM(unsigned long value) volatile {
            raw = (raw & ~(0x7FF << 3)) | ((((value)) << 3) & (0x7FF << 3));
            return *(Register*)this;
          }
          /**
            Gets Frame Number CRC Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getFNCERR() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Frame Number CRC Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setFNCERR(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE Device Interrupt Enable Clear
      */
      namespace INTENCLR {
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
            Gets Suspend Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSUSPEND() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Suspend Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSUSPEND(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Micro Start of Frame Interrupt Enable in High Speed Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getMSOF() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Micro Start of Frame Interrupt Enable in High Speed Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMSOF(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Start Of Frame Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSOF() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Start Of Frame Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSOF(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets End of Reset Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getEORST() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets End of Reset Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setEORST(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Wake Up Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getWAKEUP() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Wake Up Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setWAKEUP(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets End Of Resume Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getEORSM() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets End Of Resume Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setEORSM(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Upstream Resume Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getUPRSM() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Upstream Resume Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setUPRSM(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Ram Access Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRAMACER() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Ram Access Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRAMACER(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Link Power Management Not Yet Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getLPMNYET() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Link Power Management Not Yet Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLPMNYET(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Link Power Management Suspend Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getLPMSUSP() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Link Power Management Suspend Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLPMSUSP(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE Device Interrupt Enable Set
      */
      namespace INTENSET {
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
            Gets Suspend Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSUSPEND() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Suspend Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSUSPEND(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Micro Start of Frame Interrupt Enable in High Speed Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getMSOF() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Micro Start of Frame Interrupt Enable in High Speed Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMSOF(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Start Of Frame Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSOF() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Start Of Frame Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSOF(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets End of Reset Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getEORST() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets End of Reset Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setEORST(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Wake Up Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getWAKEUP() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Wake Up Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setWAKEUP(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets End Of Resume Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getEORSM() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets End Of Resume Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setEORSM(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Upstream Resume Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getUPRSM() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Upstream Resume Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setUPRSM(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Ram Access Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRAMACER() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Ram Access Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRAMACER(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Link Power Management Not Yet Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getLPMNYET() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Link Power Management Not Yet Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLPMNYET(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Link Power Management Suspend Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getLPMSUSP() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Link Power Management Suspend Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLPMSUSP(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE Device Interrupt Flag
      */
      namespace INTFLAG {
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
            Gets Suspend
            @return boolean value
          */
          __attribute__((always_inline)) bool getSUSPEND() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Suspend
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSUSPEND(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Micro Start of Frame in High Speed Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getMSOF() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Micro Start of Frame in High Speed Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMSOF(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Start Of Frame
            @return boolean value
          */
          __attribute__((always_inline)) bool getSOF() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Start Of Frame
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSOF(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets End of Reset
            @return boolean value
          */
          __attribute__((always_inline)) bool getEORST() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets End of Reset
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setEORST(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Wake Up
            @return boolean value
          */
          __attribute__((always_inline)) bool getWAKEUP() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Wake Up
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setWAKEUP(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets End Of Resume
            @return boolean value
          */
          __attribute__((always_inline)) bool getEORSM() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets End Of Resume
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setEORSM(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Upstream Resume
            @return boolean value
          */
          __attribute__((always_inline)) bool getUPRSM() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Upstream Resume
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setUPRSM(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Ram Access
            @return boolean value
          */
          __attribute__((always_inline)) bool getRAMACER() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Ram Access
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRAMACER(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Link Power Management Not Yet
            @return boolean value
          */
          __attribute__((always_inline)) bool getLPMNYET() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Link Power Management Not Yet
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLPMNYET(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Link Power Management Suspend
            @return boolean value
          */
          __attribute__((always_inline)) bool getLPMSUSP() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Link Power Management Suspend
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLPMSUSP(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE End Point Interrupt Summary
      */
      namespace EPINTSMRY {
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
            Gets End Point 0 Interrupt
            @param index in range 0..7
            @return boolean value
          */
          __attribute__((always_inline)) bool getEPINT(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets End Point 0 Interrupt
            @param index in range 0..7
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setEPINT(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Descriptor Address
      */
      namespace DESCADD {
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
            Gets Descriptor Address Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getDESCADD() volatile {
            return ((raw & (0xFFFFFFFF << 0)) >> 0);
          }
          /**
            Sets Descriptor Address Value
            @param value value in range 0..4294967295
          */
          __attribute__((always_inline)) Register& setDESCADD(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USB PAD Calibration
      */
      namespace PADCAL {
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
            Gets USB Pad Transp calibration
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getTRANSP() volatile {
            return ((raw & (0x1F << 0)) >> 0);
          }
          /**
            Sets USB Pad Transp calibration
            @param value value in range 0..31
          */
          __attribute__((always_inline)) Register& setTRANSP(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
            return *(Register*)this;
          }
          /**
            Gets USB Pad Transn calibration
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getTRANSN() volatile {
            return ((raw & (0x1F << 6)) >> 6);
          }
          /**
            Sets USB Pad Transn calibration
            @param value value in range 0..31
          */
          __attribute__((always_inline)) Register& setTRANSN(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 6)) | ((((value)) << 6) & (0x1F << 6));
            return *(Register*)this;
          }
          /**
            Gets USB Pad Trim calibration
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getTRIM() volatile {
            return ((raw & (0x7 << 12)) >> 12);
          }
          /**
            Sets USB Pad Trim calibration
            @param value value in range 0..7
          */
          __attribute__((always_inline)) Register& setTRIM(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 12)) | ((((value)) << 12) & (0x7 << 12));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE End Point Configuration
      */
      namespace EPCFG {
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
            Gets End Point Type0
            @param index in range 0..1
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getEPTYPE(int index) volatile {
            return ((raw & (0x7 << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0)));
          }
          /**
            Sets End Point Type0
            @param index in range 0..1
            @param value value in range 0..7
          */
          __attribute__((always_inline)) Register& setEPTYPE(int index, unsigned long value) volatile {
            raw = (raw & ~(0x7 << (0 + 4 * (index - 0)))) | ((((value)) << (0 + 4 * (index - 0))) & (0x7 << (0 + 4 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets NYET Token Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getNYETDIS() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets NYET Token Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setNYETDIS(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE End Point Pipe Status Clear
      */
      namespace EPSTATUSCLR {
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
            Gets Stall 0 Request Clear
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTALLRQ(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Stall 0 Request Clear
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTALLRQ(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Bank 0 Ready Clear
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getBK_RDY(int index) volatile {
            return ((raw & (0x1 << (6 + 1 * (index - 0)))) >> (6 + 1 * (index - 0)));
          }
          /**
            Sets Bank 0 Ready Clear
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setBK_RDY(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (6 + 1 * (index - 0)))) | ((((value)) << (6 + 1 * (index - 0))) & (0x1 << (6 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Data Toggle OUT Clear
            @return boolean value
          */
          __attribute__((always_inline)) bool getDTGLOUT() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Toggle OUT Clear
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDTGLOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Data Toggle IN Clear
            @return boolean value
          */
          __attribute__((always_inline)) bool getDTGLIN() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Data Toggle IN Clear
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDTGLIN(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Current Bank Clear
            @return boolean value
          */
          __attribute__((always_inline)) bool getCURBK() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Current Bank Clear
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCURBK(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE End Point Pipe Status Set
      */
      namespace EPSTATUSSET {
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
            Gets Stall 0 Request Set
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTALLRQ(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Stall 0 Request Set
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTALLRQ(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Bank 0 Ready Set
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getBK_RDY(int index) volatile {
            return ((raw & (0x1 << (6 + 1 * (index - 0)))) >> (6 + 1 * (index - 0)));
          }
          /**
            Sets Bank 0 Ready Set
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setBK_RDY(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (6 + 1 * (index - 0)))) | ((((value)) << (6 + 1 * (index - 0))) & (0x1 << (6 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Data Toggle OUT Set
            @return boolean value
          */
          __attribute__((always_inline)) bool getDTGLOUT() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Toggle OUT Set
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDTGLOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Data Toggle IN Set
            @return boolean value
          */
          __attribute__((always_inline)) bool getDTGLIN() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Data Toggle IN Set
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDTGLIN(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Current Bank Set
            @return boolean value
          */
          __attribute__((always_inline)) bool getCURBK() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Current Bank Set
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCURBK(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE End Point Pipe Status
      */
      namespace EPSTATUS {
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
            Gets Stall 0 Request
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTALLRQ(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Stall 0 Request
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTALLRQ(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Bank 0 ready
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getBK_RDY(int index) volatile {
            return ((raw & (0x1 << (6 + 1 * (index - 0)))) >> (6 + 1 * (index - 0)));
          }
          /**
            Sets Bank 0 ready
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setBK_RDY(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (6 + 1 * (index - 0)))) | ((((value)) << (6 + 1 * (index - 0))) & (0x1 << (6 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Data Toggle Out
            @return boolean value
          */
          __attribute__((always_inline)) bool getDTGLOUT() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Toggle Out
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDTGLOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Data Toggle In
            @return boolean value
          */
          __attribute__((always_inline)) bool getDTGLIN() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Data Toggle In
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDTGLIN(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Current Bank
            @return boolean value
          */
          __attribute__((always_inline)) bool getCURBK() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Current Bank
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCURBK(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE End Point Interrupt Flag
      */
      namespace EPINTFLAG {
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
            Gets Transfer Complete 0
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getTRCPT(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Transfer Complete 0
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTRCPT(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Error Flow 0
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getTRFAIL(int index) volatile {
            return ((raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0)));
          }
          /**
            Sets Error Flow 0
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTRFAIL(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((((value)) << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Stall 0 In/out
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTALL(int index) volatile {
            return ((raw & (0x1 << (5 + 1 * (index - 0)))) >> (5 + 1 * (index - 0)));
          }
          /**
            Sets Stall 0 In/out
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTALL(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (5 + 1 * (index - 0)))) | ((((value)) << (5 + 1 * (index - 0))) & (0x1 << (5 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Received Setup
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXSTP() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Received Setup
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXSTP(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE End Point Interrupt Clear Flag
      */
      namespace EPINTENCLR {
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
            Gets Transfer Complete 0 Interrupt Disable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getTRCPT(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Transfer Complete 0 Interrupt Disable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTRCPT(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Error Flow 0 Interrupt Disable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getTRFAIL(int index) volatile {
            return ((raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0)));
          }
          /**
            Sets Error Flow 0 Interrupt Disable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTRFAIL(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((((value)) << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Stall 0 In/Out Interrupt Disable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTALL(int index) volatile {
            return ((raw & (0x1 << (5 + 1 * (index - 0)))) >> (5 + 1 * (index - 0)));
          }
          /**
            Sets Stall 0 In/Out Interrupt Disable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTALL(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (5 + 1 * (index - 0)))) | ((((value)) << (5 + 1 * (index - 0))) & (0x1 << (5 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Received Setup Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXSTP() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Received Setup Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXSTP(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
        };
      };
      
      /**
        DEVICE End Point Interrupt Set Flag
      */
      namespace EPINTENSET {
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
            Gets Transfer Complete 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getTRCPT(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Transfer Complete 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTRCPT(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Error Flow 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getTRFAIL(int index) volatile {
            return ((raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0)));
          }
          /**
            Sets Error Flow 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTRFAIL(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((((value)) << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Stall 0 In/out Interrupt enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTALL(int index) volatile {
            return ((raw & (0x1 << (5 + 1 * (index - 0)))) >> (5 + 1 * (index - 0)));
          }
          /**
            Sets Stall 0 In/out Interrupt enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTALL(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (5 + 1 * (index - 0)))) | ((((value)) << (5 + 1 * (index - 0))) & (0x1 << (5 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Received Setup Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXSTP() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Received Setup Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXSTP(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
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
            DEVICE::CTRLA::Register CTRLA;
          };
          struct {
            char _space_SYNCBUSY[0x2];
            /**
              Synchronization Busy
            */
            DEVICE::SYNCBUSY::Register SYNCBUSY;
          };
          struct {
            char _space_QOSCTRL[0x3];
            /**
              USB Quality Of Service
            */
            DEVICE::QOSCTRL::Register QOSCTRL;
          };
          struct {
            char _space_CTRLB[0x8];
            /**
              DEVICE Control B
            */
            DEVICE::CTRLB::Register CTRLB;
          };
          struct {
            char _space_DADD[0xa];
            /**
              DEVICE Device Address
            */
            DEVICE::DADD::Register DADD;
          };
          struct {
            char _space_STATUS[0xc];
            /**
              DEVICE Status
            */
            DEVICE::STATUS::Register STATUS;
          };
          struct {
            char _space_FSMSTATUS[0xd];
            /**
              Finite State Machine Status
            */
            DEVICE::FSMSTATUS::Register FSMSTATUS;
          };
          struct {
            char _space_FNUM[0x10];
            /**
              DEVICE Device Frame Number
            */
            DEVICE::FNUM::Register FNUM;
          };
          struct {
            char _space_INTENCLR[0x14];
            /**
              DEVICE Device Interrupt Enable Clear
            */
            DEVICE::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0x18];
            /**
              DEVICE Device Interrupt Enable Set
            */
            DEVICE::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0x1c];
            /**
              DEVICE Device Interrupt Flag
            */
            DEVICE::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_EPINTSMRY[0x20];
            /**
              DEVICE End Point Interrupt Summary
            */
            DEVICE::EPINTSMRY::Register EPINTSMRY;
          };
          struct {
            char _space_DESCADD[0x24];
            /**
              Descriptor Address
            */
            DEVICE::DESCADD::Register DESCADD;
          };
          struct {
            char _space_PADCAL[0x28];
            /**
              USB PAD Calibration
            */
            DEVICE::PADCAL::Register PADCAL;
          };
          struct {
            char _space_EPCFG[0x100];
            /**
              DEVICE End Point Configuration
            */
            struct {
              DEVICE::EPCFG::Register reg;
              char _space[31];
            } EPCFG[8];
          };
          struct {
            char _space_EPSTATUSCLR[0x104];
            /**
              DEVICE End Point Pipe Status Clear
            */
            struct {
              DEVICE::EPSTATUSCLR::Register reg;
              char _space[31];
            } EPSTATUSCLR[8];
          };
          struct {
            char _space_EPSTATUSSET[0x105];
            /**
              DEVICE End Point Pipe Status Set
            */
            struct {
              DEVICE::EPSTATUSSET::Register reg;
              char _space[31];
            } EPSTATUSSET[8];
          };
          struct {
            char _space_EPSTATUS[0x106];
            /**
              DEVICE End Point Pipe Status
            */
            struct {
              DEVICE::EPSTATUS::Register reg;
              char _space[31];
            } EPSTATUS[8];
          };
          struct {
            char _space_EPINTFLAG[0x107];
            /**
              DEVICE End Point Interrupt Flag
            */
            struct {
              DEVICE::EPINTFLAG::Register reg;
              char _space[31];
            } EPINTFLAG[8];
          };
          struct {
            char _space_EPINTENCLR[0x108];
            /**
              DEVICE End Point Interrupt Clear Flag
            */
            struct {
              DEVICE::EPINTENCLR::Register reg;
              char _space[31];
            } EPINTENCLR[8];
          };
          struct {
            char _space_EPINTENSET[0x109];
            /**
              DEVICE End Point Interrupt Set Flag
            */
            struct {
              DEVICE::EPINTENSET::Register reg;
              char _space[31];
            } EPINTENSET[8];
          };
        } DEVICE;
      };
    };
  }
  
  extern volatile usb::Peripheral USB;
}