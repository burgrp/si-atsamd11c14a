namespace target {
  namespace tc {
    namespace COUNT8 {
      
      /**
        Control A
      */
      namespace CTRLA {
        enum class MODE {
          // Counter in 16-bit mode
          COUNT16 = 0x0,
          // Counter in 8-bit mode
          COUNT8 = 0x1,
          // Counter in 32-bit mode
          COUNT32 = 0x2,
        };
        
        enum class WAVEGEN {
          NFRQ = 0x0,
          MFRQ = 0x1,
          NPWM = 0x2,
          MPWM = 0x3,
        };
        
        enum class PRESCALER {
          // Prescaler: GCLK_TC
          DIV1 = 0x0,
          // Prescaler: GCLK_TC/2
          DIV2 = 0x1,
          // Prescaler: GCLK_TC/4
          DIV4 = 0x2,
          // Prescaler: GCLK_TC/8
          DIV8 = 0x3,
          // Prescaler: GCLK_TC/16
          DIV16 = 0x4,
          // Prescaler: GCLK_TC/64
          DIV64 = 0x5,
          // Prescaler: GCLK_TC/256
          DIV256 = 0x6,
          // Prescaler: GCLK_TC/1024
          DIV1024 = 0x7,
        };
        
        enum class PRESCSYNC {
          // Reload or reset the counter on next generic clock
          GCLK = 0x0,
          // Reload or reset the counter on next prescaler clock
          PRESC = 0x1,
          // Reload or reset the counter on next generic clock. Reset the prescaler counter
          RESYNC = 0x2,
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
            Gets TC Mode
            @return enumeration value:
            target::tc::COUNT8::CTRLA::MODE::COUNT16 (0x0) Counter in 16-bit mode
            target::tc::COUNT8::CTRLA::MODE::COUNT8 (0x1) Counter in 8-bit mode
            target::tc::COUNT8::CTRLA::MODE::COUNT32 (0x2) Counter in 32-bit mode
          */
          __attribute__((always_inline)) target::tc::COUNT8::CTRLA::MODE getMODE() volatile {
            return static_cast<target::tc::COUNT8::CTRLA::MODE>((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets TC Mode
            @param value enumeration value:
            target::tc::COUNT8::CTRLA::MODE::COUNT16 (0x0) Counter in 16-bit mode
            target::tc::COUNT8::CTRLA::MODE::COUNT8 (0x1) Counter in 8-bit mode
            target::tc::COUNT8::CTRLA::MODE::COUNT32 (0x2) Counter in 32-bit mode
          */
          __attribute__((always_inline)) Register& setMODE(target::tc::COUNT8::CTRLA::MODE value) volatile {
            raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
          /**
            Gets Waveform Generation Operation
            @return enumeration value:
            target::tc::COUNT8::CTRLA::WAVEGEN::NFRQ (0x0) undefined
            target::tc::COUNT8::CTRLA::WAVEGEN::MFRQ (0x1) undefined
            target::tc::COUNT8::CTRLA::WAVEGEN::NPWM (0x2) undefined
            target::tc::COUNT8::CTRLA::WAVEGEN::MPWM (0x3) undefined
          */
          __attribute__((always_inline)) target::tc::COUNT8::CTRLA::WAVEGEN getWAVEGEN() volatile {
            return static_cast<target::tc::COUNT8::CTRLA::WAVEGEN>((raw & (0x3 << 5)) >> 5);
          }
          /**
            Sets Waveform Generation Operation
            @param value enumeration value:
            target::tc::COUNT8::CTRLA::WAVEGEN::NFRQ (0x0) undefined
            target::tc::COUNT8::CTRLA::WAVEGEN::MFRQ (0x1) undefined
            target::tc::COUNT8::CTRLA::WAVEGEN::NPWM (0x2) undefined
            target::tc::COUNT8::CTRLA::WAVEGEN::MPWM (0x3) undefined
          */
          __attribute__((always_inline)) Register& setWAVEGEN(target::tc::COUNT8::CTRLA::WAVEGEN value) volatile {
            raw = (raw & ~(0x3 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x3 << 5));
            return *(Register*)this;
          }
          /**
            Gets Prescaler
            @return enumeration value:
            target::tc::COUNT8::CTRLA::PRESCALER::DIV1 (0x0) Prescaler: GCLK_TC
            target::tc::COUNT8::CTRLA::PRESCALER::DIV2 (0x1) Prescaler: GCLK_TC/2
            target::tc::COUNT8::CTRLA::PRESCALER::DIV4 (0x2) Prescaler: GCLK_TC/4
            target::tc::COUNT8::CTRLA::PRESCALER::DIV8 (0x3) Prescaler: GCLK_TC/8
            target::tc::COUNT8::CTRLA::PRESCALER::DIV16 (0x4) Prescaler: GCLK_TC/16
            target::tc::COUNT8::CTRLA::PRESCALER::DIV64 (0x5) Prescaler: GCLK_TC/64
            target::tc::COUNT8::CTRLA::PRESCALER::DIV256 (0x6) Prescaler: GCLK_TC/256
            target::tc::COUNT8::CTRLA::PRESCALER::DIV1024 (0x7) Prescaler: GCLK_TC/1024
          */
          __attribute__((always_inline)) target::tc::COUNT8::CTRLA::PRESCALER getPRESCALER() volatile {
            return static_cast<target::tc::COUNT8::CTRLA::PRESCALER>((raw & (0x7 << 8)) >> 8);
          }
          /**
            Sets Prescaler
            @param value enumeration value:
            target::tc::COUNT8::CTRLA::PRESCALER::DIV1 (0x0) Prescaler: GCLK_TC
            target::tc::COUNT8::CTRLA::PRESCALER::DIV2 (0x1) Prescaler: GCLK_TC/2
            target::tc::COUNT8::CTRLA::PRESCALER::DIV4 (0x2) Prescaler: GCLK_TC/4
            target::tc::COUNT8::CTRLA::PRESCALER::DIV8 (0x3) Prescaler: GCLK_TC/8
            target::tc::COUNT8::CTRLA::PRESCALER::DIV16 (0x4) Prescaler: GCLK_TC/16
            target::tc::COUNT8::CTRLA::PRESCALER::DIV64 (0x5) Prescaler: GCLK_TC/64
            target::tc::COUNT8::CTRLA::PRESCALER::DIV256 (0x6) Prescaler: GCLK_TC/256
            target::tc::COUNT8::CTRLA::PRESCALER::DIV1024 (0x7) Prescaler: GCLK_TC/1024
          */
          __attribute__((always_inline)) Register& setPRESCALER(target::tc::COUNT8::CTRLA::PRESCALER value) volatile {
            raw = (raw & ~(0x7 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x7 << 8));
            return *(Register*)this;
          }
          /**
            Gets Run in Standby
            @return boolean value
          */
          __attribute__((always_inline)) bool getRUNSTDBY() volatile {
            return ((raw & (0x1 << 11)) >> 11);
          }
          /**
            Sets Run in Standby
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
            raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
            return *(Register*)this;
          }
          /**
            Gets Prescaler and Counter Synchronization
            @return enumeration value:
            target::tc::COUNT8::CTRLA::PRESCSYNC::GCLK (0x0) Reload or reset the counter on next generic clock
            target::tc::COUNT8::CTRLA::PRESCSYNC::PRESC (0x1) Reload or reset the counter on next prescaler clock
            target::tc::COUNT8::CTRLA::PRESCSYNC::RESYNC (0x2) Reload or reset the counter on next generic clock. Reset the prescaler counter
          */
          __attribute__((always_inline)) target::tc::COUNT8::CTRLA::PRESCSYNC getPRESCSYNC() volatile {
            return static_cast<target::tc::COUNT8::CTRLA::PRESCSYNC>((raw & (0x3 << 12)) >> 12);
          }
          /**
            Sets Prescaler and Counter Synchronization
            @param value enumeration value:
            target::tc::COUNT8::CTRLA::PRESCSYNC::GCLK (0x0) Reload or reset the counter on next generic clock
            target::tc::COUNT8::CTRLA::PRESCSYNC::PRESC (0x1) Reload or reset the counter on next prescaler clock
            target::tc::COUNT8::CTRLA::PRESCSYNC::RESYNC (0x2) Reload or reset the counter on next generic clock. Reset the prescaler counter
          */
          __attribute__((always_inline)) Register& setPRESCSYNC(target::tc::COUNT8::CTRLA::PRESCSYNC value) volatile {
            raw = (raw & ~(0x3 << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x3 << 12));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Read Request
      */
      namespace READREQ {
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
            Gets Address
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0x1F << 0)) >> 0);
          }
          /**
            Sets Address
            @param value value in range 0..31
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
            return *(Register*)this;
          }
          /**
            Gets Read Continuously
            @return boolean value
          */
          __attribute__((always_inline)) bool getRCONT() volatile {
            return ((raw & (0x1 << 14)) >> 14);
          }
          /**
            Sets Read Continuously
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRCONT(bool value) volatile {
            raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
            return *(Register*)this;
          }
          /**
            Gets Read Request
            @return boolean value
          */
          __attribute__((always_inline)) bool getRREQ() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Read Request
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRREQ(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control B Clear
      */
      namespace CTRLBCLR {
        enum class CMD {
          // No action
          NONE = 0x0,
          // Force a start, restart or retrigger
          RETRIGGER = 0x1,
          // Force a stop
          STOP = 0x2,
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
            Gets Counter Direction
            @return boolean value
          */
          __attribute__((always_inline)) bool getDIR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Counter Direction
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDIR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets One-Shot
            @return boolean value
          */
          __attribute__((always_inline)) bool getONESHOT() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets One-Shot
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setONESHOT(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Command
            @return enumeration value:
            target::tc::COUNT8::CTRLBCLR::CMD::NONE (0x0) No action
            target::tc::COUNT8::CTRLBCLR::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT8::CTRLBCLR::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) target::tc::COUNT8::CTRLBCLR::CMD getCMD() volatile {
            return static_cast<target::tc::COUNT8::CTRLBCLR::CMD>((raw & (0x3 << 6)) >> 6);
          }
          /**
            Sets Command
            @param value enumeration value:
            target::tc::COUNT8::CTRLBCLR::CMD::NONE (0x0) No action
            target::tc::COUNT8::CTRLBCLR::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT8::CTRLBCLR::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) Register& setCMD(target::tc::COUNT8::CTRLBCLR::CMD value) volatile {
            raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control B Set
      */
      namespace CTRLBSET {
        enum class CMD {
          // No action
          NONE = 0x0,
          // Force a start, restart or retrigger
          RETRIGGER = 0x1,
          // Force a stop
          STOP = 0x2,
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
            Gets Counter Direction
            @return boolean value
          */
          __attribute__((always_inline)) bool getDIR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Counter Direction
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDIR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets One-Shot
            @return boolean value
          */
          __attribute__((always_inline)) bool getONESHOT() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets One-Shot
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setONESHOT(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Command
            @return enumeration value:
            target::tc::COUNT8::CTRLBSET::CMD::NONE (0x0) No action
            target::tc::COUNT8::CTRLBSET::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT8::CTRLBSET::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) target::tc::COUNT8::CTRLBSET::CMD getCMD() volatile {
            return static_cast<target::tc::COUNT8::CTRLBSET::CMD>((raw & (0x3 << 6)) >> 6);
          }
          /**
            Sets Command
            @param value enumeration value:
            target::tc::COUNT8::CTRLBSET::CMD::NONE (0x0) No action
            target::tc::COUNT8::CTRLBSET::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT8::CTRLBSET::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) Register& setCMD(target::tc::COUNT8::CTRLBSET::CMD value) volatile {
            raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control C
      */
      namespace CTRLC {
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
            Gets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getINVEN(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setINVEN(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Capture Channel 0 Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getCPTEN(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Capture Channel 0 Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCPTEN(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
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
            Gets Debug Run Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGRUN() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Debug Run Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Event Control
      */
      namespace EVCTRL {
        enum class EVACT {
          // Event action disabled
          OFF = 0x0,
          // Start, restart or retrigger TC on event
          RETRIGGER = 0x1,
          // Count on event
          COUNT = 0x2,
          // Start TC on event
          START = 0x3,
          // Period captured in CC0, pulse width in CC1
          PPW = 0x5,
          // Period captured in CC1, pulse width in CC0
          PWP = 0x6,
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
            Gets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMCEO(int index) volatile {
            return ((raw & (0x1 << (12 + 1 * (index - 0)))) >> (12 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMCEO(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (12 + 1 * (index - 0)))) | ((((value)) << (12 + 1 * (index - 0))) & (0x1 << (12 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Event Action
            @return enumeration value:
            target::tc::COUNT8::EVCTRL::EVACT::OFF (0x0) Event action disabled
            target::tc::COUNT8::EVCTRL::EVACT::RETRIGGER (0x1) Start, restart or retrigger TC on event
            target::tc::COUNT8::EVCTRL::EVACT::COUNT (0x2) Count on event
            target::tc::COUNT8::EVCTRL::EVACT::START (0x3) Start TC on event
            target::tc::COUNT8::EVCTRL::EVACT::PPW (0x5) Period captured in CC0, pulse width in CC1
            target::tc::COUNT8::EVCTRL::EVACT::PWP (0x6) Period captured in CC1, pulse width in CC0
          */
          __attribute__((always_inline)) target::tc::COUNT8::EVCTRL::EVACT getEVACT() volatile {
            return static_cast<target::tc::COUNT8::EVCTRL::EVACT>((raw & (0x7 << 0)) >> 0);
          }
          /**
            Sets Event Action
            @param value enumeration value:
            target::tc::COUNT8::EVCTRL::EVACT::OFF (0x0) Event action disabled
            target::tc::COUNT8::EVCTRL::EVACT::RETRIGGER (0x1) Start, restart or retrigger TC on event
            target::tc::COUNT8::EVCTRL::EVACT::COUNT (0x2) Count on event
            target::tc::COUNT8::EVCTRL::EVACT::START (0x3) Start TC on event
            target::tc::COUNT8::EVCTRL::EVACT::PPW (0x5) Period captured in CC0, pulse width in CC1
            target::tc::COUNT8::EVCTRL::EVACT::PWP (0x6) Period captured in CC1, pulse width in CC0
          */
          __attribute__((always_inline)) Register& setEVACT(target::tc::COUNT8::EVCTRL::EVACT value) volatile {
            raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
            return *(Register*)this;
          }
          /**
            Gets TC Inverted Event Input
            @return boolean value
          */
          __attribute__((always_inline)) bool getTCINV() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets TC Inverted Event Input
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTCINV(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets TC Event Input
            @return boolean value
          */
          __attribute__((always_inline)) bool getTCEI() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets TC Event Input
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTCEI(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Overflow/Underflow Event Output Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVFEO() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Overflow/Underflow Event Output Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVFEO(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Enable Clear
      */
      namespace INTENCLR {
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Enable Set
      */
      namespace INTENSET {
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Flag Status and Clear
      */
      namespace INTFLAG {
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
            Gets Match or Capture Channel 0
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Status
      */
      namespace STATUS {
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
            Gets Stop
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTOP() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Stop
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTOP(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Slave
            @return boolean value
          */
          __attribute__((always_inline)) bool getSLAVE() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Slave
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSLAVE(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCBUSY() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCBUSY(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        COUNT8 Counter Value
      */
      namespace COUNT {
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
            Gets Counter Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Counter Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        COUNT8 Period Value
      */
      namespace PER {
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
            Gets Period Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getPER() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Period Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setPER(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        COUNT8 Compare/Capture
      */
      namespace CC {
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
            Gets Compare/Capture Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getCC() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Compare/Capture Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setCC(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
        };
      };
    };
    
    namespace COUNT16 {
      
      /**
        Control A
      */
      namespace CTRLA {
        enum class MODE {
          // Counter in 16-bit mode
          COUNT16 = 0x0,
          // Counter in 8-bit mode
          COUNT8 = 0x1,
          // Counter in 32-bit mode
          COUNT32 = 0x2,
        };
        
        enum class WAVEGEN {
          NFRQ = 0x0,
          MFRQ = 0x1,
          NPWM = 0x2,
          MPWM = 0x3,
        };
        
        enum class PRESCALER {
          // Prescaler: GCLK_TC
          DIV1 = 0x0,
          // Prescaler: GCLK_TC/2
          DIV2 = 0x1,
          // Prescaler: GCLK_TC/4
          DIV4 = 0x2,
          // Prescaler: GCLK_TC/8
          DIV8 = 0x3,
          // Prescaler: GCLK_TC/16
          DIV16 = 0x4,
          // Prescaler: GCLK_TC/64
          DIV64 = 0x5,
          // Prescaler: GCLK_TC/256
          DIV256 = 0x6,
          // Prescaler: GCLK_TC/1024
          DIV1024 = 0x7,
        };
        
        enum class PRESCSYNC {
          // Reload or reset the counter on next generic clock
          GCLK = 0x0,
          // Reload or reset the counter on next prescaler clock
          PRESC = 0x1,
          // Reload or reset the counter on next generic clock. Reset the prescaler counter
          RESYNC = 0x2,
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
            Gets TC Mode
            @return enumeration value:
            target::tc::COUNT16::CTRLA::MODE::COUNT16 (0x0) Counter in 16-bit mode
            target::tc::COUNT16::CTRLA::MODE::COUNT8 (0x1) Counter in 8-bit mode
            target::tc::COUNT16::CTRLA::MODE::COUNT32 (0x2) Counter in 32-bit mode
          */
          __attribute__((always_inline)) target::tc::COUNT16::CTRLA::MODE getMODE() volatile {
            return static_cast<target::tc::COUNT16::CTRLA::MODE>((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets TC Mode
            @param value enumeration value:
            target::tc::COUNT16::CTRLA::MODE::COUNT16 (0x0) Counter in 16-bit mode
            target::tc::COUNT16::CTRLA::MODE::COUNT8 (0x1) Counter in 8-bit mode
            target::tc::COUNT16::CTRLA::MODE::COUNT32 (0x2) Counter in 32-bit mode
          */
          __attribute__((always_inline)) Register& setMODE(target::tc::COUNT16::CTRLA::MODE value) volatile {
            raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
          /**
            Gets Waveform Generation Operation
            @return enumeration value:
            target::tc::COUNT16::CTRLA::WAVEGEN::NFRQ (0x0) undefined
            target::tc::COUNT16::CTRLA::WAVEGEN::MFRQ (0x1) undefined
            target::tc::COUNT16::CTRLA::WAVEGEN::NPWM (0x2) undefined
            target::tc::COUNT16::CTRLA::WAVEGEN::MPWM (0x3) undefined
          */
          __attribute__((always_inline)) target::tc::COUNT16::CTRLA::WAVEGEN getWAVEGEN() volatile {
            return static_cast<target::tc::COUNT16::CTRLA::WAVEGEN>((raw & (0x3 << 5)) >> 5);
          }
          /**
            Sets Waveform Generation Operation
            @param value enumeration value:
            target::tc::COUNT16::CTRLA::WAVEGEN::NFRQ (0x0) undefined
            target::tc::COUNT16::CTRLA::WAVEGEN::MFRQ (0x1) undefined
            target::tc::COUNT16::CTRLA::WAVEGEN::NPWM (0x2) undefined
            target::tc::COUNT16::CTRLA::WAVEGEN::MPWM (0x3) undefined
          */
          __attribute__((always_inline)) Register& setWAVEGEN(target::tc::COUNT16::CTRLA::WAVEGEN value) volatile {
            raw = (raw & ~(0x3 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x3 << 5));
            return *(Register*)this;
          }
          /**
            Gets Prescaler
            @return enumeration value:
            target::tc::COUNT16::CTRLA::PRESCALER::DIV1 (0x0) Prescaler: GCLK_TC
            target::tc::COUNT16::CTRLA::PRESCALER::DIV2 (0x1) Prescaler: GCLK_TC/2
            target::tc::COUNT16::CTRLA::PRESCALER::DIV4 (0x2) Prescaler: GCLK_TC/4
            target::tc::COUNT16::CTRLA::PRESCALER::DIV8 (0x3) Prescaler: GCLK_TC/8
            target::tc::COUNT16::CTRLA::PRESCALER::DIV16 (0x4) Prescaler: GCLK_TC/16
            target::tc::COUNT16::CTRLA::PRESCALER::DIV64 (0x5) Prescaler: GCLK_TC/64
            target::tc::COUNT16::CTRLA::PRESCALER::DIV256 (0x6) Prescaler: GCLK_TC/256
            target::tc::COUNT16::CTRLA::PRESCALER::DIV1024 (0x7) Prescaler: GCLK_TC/1024
          */
          __attribute__((always_inline)) target::tc::COUNT16::CTRLA::PRESCALER getPRESCALER() volatile {
            return static_cast<target::tc::COUNT16::CTRLA::PRESCALER>((raw & (0x7 << 8)) >> 8);
          }
          /**
            Sets Prescaler
            @param value enumeration value:
            target::tc::COUNT16::CTRLA::PRESCALER::DIV1 (0x0) Prescaler: GCLK_TC
            target::tc::COUNT16::CTRLA::PRESCALER::DIV2 (0x1) Prescaler: GCLK_TC/2
            target::tc::COUNT16::CTRLA::PRESCALER::DIV4 (0x2) Prescaler: GCLK_TC/4
            target::tc::COUNT16::CTRLA::PRESCALER::DIV8 (0x3) Prescaler: GCLK_TC/8
            target::tc::COUNT16::CTRLA::PRESCALER::DIV16 (0x4) Prescaler: GCLK_TC/16
            target::tc::COUNT16::CTRLA::PRESCALER::DIV64 (0x5) Prescaler: GCLK_TC/64
            target::tc::COUNT16::CTRLA::PRESCALER::DIV256 (0x6) Prescaler: GCLK_TC/256
            target::tc::COUNT16::CTRLA::PRESCALER::DIV1024 (0x7) Prescaler: GCLK_TC/1024
          */
          __attribute__((always_inline)) Register& setPRESCALER(target::tc::COUNT16::CTRLA::PRESCALER value) volatile {
            raw = (raw & ~(0x7 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x7 << 8));
            return *(Register*)this;
          }
          /**
            Gets Run in Standby
            @return boolean value
          */
          __attribute__((always_inline)) bool getRUNSTDBY() volatile {
            return ((raw & (0x1 << 11)) >> 11);
          }
          /**
            Sets Run in Standby
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
            raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
            return *(Register*)this;
          }
          /**
            Gets Prescaler and Counter Synchronization
            @return enumeration value:
            target::tc::COUNT16::CTRLA::PRESCSYNC::GCLK (0x0) Reload or reset the counter on next generic clock
            target::tc::COUNT16::CTRLA::PRESCSYNC::PRESC (0x1) Reload or reset the counter on next prescaler clock
            target::tc::COUNT16::CTRLA::PRESCSYNC::RESYNC (0x2) Reload or reset the counter on next generic clock. Reset the prescaler counter
          */
          __attribute__((always_inline)) target::tc::COUNT16::CTRLA::PRESCSYNC getPRESCSYNC() volatile {
            return static_cast<target::tc::COUNT16::CTRLA::PRESCSYNC>((raw & (0x3 << 12)) >> 12);
          }
          /**
            Sets Prescaler and Counter Synchronization
            @param value enumeration value:
            target::tc::COUNT16::CTRLA::PRESCSYNC::GCLK (0x0) Reload or reset the counter on next generic clock
            target::tc::COUNT16::CTRLA::PRESCSYNC::PRESC (0x1) Reload or reset the counter on next prescaler clock
            target::tc::COUNT16::CTRLA::PRESCSYNC::RESYNC (0x2) Reload or reset the counter on next generic clock. Reset the prescaler counter
          */
          __attribute__((always_inline)) Register& setPRESCSYNC(target::tc::COUNT16::CTRLA::PRESCSYNC value) volatile {
            raw = (raw & ~(0x3 << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x3 << 12));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Read Request
      */
      namespace READREQ {
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
            Gets Address
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0x1F << 0)) >> 0);
          }
          /**
            Sets Address
            @param value value in range 0..31
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
            return *(Register*)this;
          }
          /**
            Gets Read Continuously
            @return boolean value
          */
          __attribute__((always_inline)) bool getRCONT() volatile {
            return ((raw & (0x1 << 14)) >> 14);
          }
          /**
            Sets Read Continuously
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRCONT(bool value) volatile {
            raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
            return *(Register*)this;
          }
          /**
            Gets Read Request
            @return boolean value
          */
          __attribute__((always_inline)) bool getRREQ() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Read Request
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRREQ(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control B Clear
      */
      namespace CTRLBCLR {
        enum class CMD {
          // No action
          NONE = 0x0,
          // Force a start, restart or retrigger
          RETRIGGER = 0x1,
          // Force a stop
          STOP = 0x2,
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
            Gets Counter Direction
            @return boolean value
          */
          __attribute__((always_inline)) bool getDIR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Counter Direction
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDIR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets One-Shot
            @return boolean value
          */
          __attribute__((always_inline)) bool getONESHOT() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets One-Shot
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setONESHOT(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Command
            @return enumeration value:
            target::tc::COUNT16::CTRLBCLR::CMD::NONE (0x0) No action
            target::tc::COUNT16::CTRLBCLR::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT16::CTRLBCLR::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) target::tc::COUNT16::CTRLBCLR::CMD getCMD() volatile {
            return static_cast<target::tc::COUNT16::CTRLBCLR::CMD>((raw & (0x3 << 6)) >> 6);
          }
          /**
            Sets Command
            @param value enumeration value:
            target::tc::COUNT16::CTRLBCLR::CMD::NONE (0x0) No action
            target::tc::COUNT16::CTRLBCLR::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT16::CTRLBCLR::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) Register& setCMD(target::tc::COUNT16::CTRLBCLR::CMD value) volatile {
            raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control B Set
      */
      namespace CTRLBSET {
        enum class CMD {
          // No action
          NONE = 0x0,
          // Force a start, restart or retrigger
          RETRIGGER = 0x1,
          // Force a stop
          STOP = 0x2,
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
            Gets Counter Direction
            @return boolean value
          */
          __attribute__((always_inline)) bool getDIR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Counter Direction
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDIR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets One-Shot
            @return boolean value
          */
          __attribute__((always_inline)) bool getONESHOT() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets One-Shot
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setONESHOT(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Command
            @return enumeration value:
            target::tc::COUNT16::CTRLBSET::CMD::NONE (0x0) No action
            target::tc::COUNT16::CTRLBSET::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT16::CTRLBSET::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) target::tc::COUNT16::CTRLBSET::CMD getCMD() volatile {
            return static_cast<target::tc::COUNT16::CTRLBSET::CMD>((raw & (0x3 << 6)) >> 6);
          }
          /**
            Sets Command
            @param value enumeration value:
            target::tc::COUNT16::CTRLBSET::CMD::NONE (0x0) No action
            target::tc::COUNT16::CTRLBSET::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT16::CTRLBSET::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) Register& setCMD(target::tc::COUNT16::CTRLBSET::CMD value) volatile {
            raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control C
      */
      namespace CTRLC {
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
            Gets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getINVEN(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setINVEN(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Capture Channel 0 Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getCPTEN(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Capture Channel 0 Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCPTEN(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
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
            Gets Debug Run Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGRUN() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Debug Run Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Event Control
      */
      namespace EVCTRL {
        enum class EVACT {
          // Event action disabled
          OFF = 0x0,
          // Start, restart or retrigger TC on event
          RETRIGGER = 0x1,
          // Count on event
          COUNT = 0x2,
          // Start TC on event
          START = 0x3,
          // Period captured in CC0, pulse width in CC1
          PPW = 0x5,
          // Period captured in CC1, pulse width in CC0
          PWP = 0x6,
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
            Gets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMCEO(int index) volatile {
            return ((raw & (0x1 << (12 + 1 * (index - 0)))) >> (12 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMCEO(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (12 + 1 * (index - 0)))) | ((((value)) << (12 + 1 * (index - 0))) & (0x1 << (12 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Event Action
            @return enumeration value:
            target::tc::COUNT16::EVCTRL::EVACT::OFF (0x0) Event action disabled
            target::tc::COUNT16::EVCTRL::EVACT::RETRIGGER (0x1) Start, restart or retrigger TC on event
            target::tc::COUNT16::EVCTRL::EVACT::COUNT (0x2) Count on event
            target::tc::COUNT16::EVCTRL::EVACT::START (0x3) Start TC on event
            target::tc::COUNT16::EVCTRL::EVACT::PPW (0x5) Period captured in CC0, pulse width in CC1
            target::tc::COUNT16::EVCTRL::EVACT::PWP (0x6) Period captured in CC1, pulse width in CC0
          */
          __attribute__((always_inline)) target::tc::COUNT16::EVCTRL::EVACT getEVACT() volatile {
            return static_cast<target::tc::COUNT16::EVCTRL::EVACT>((raw & (0x7 << 0)) >> 0);
          }
          /**
            Sets Event Action
            @param value enumeration value:
            target::tc::COUNT16::EVCTRL::EVACT::OFF (0x0) Event action disabled
            target::tc::COUNT16::EVCTRL::EVACT::RETRIGGER (0x1) Start, restart or retrigger TC on event
            target::tc::COUNT16::EVCTRL::EVACT::COUNT (0x2) Count on event
            target::tc::COUNT16::EVCTRL::EVACT::START (0x3) Start TC on event
            target::tc::COUNT16::EVCTRL::EVACT::PPW (0x5) Period captured in CC0, pulse width in CC1
            target::tc::COUNT16::EVCTRL::EVACT::PWP (0x6) Period captured in CC1, pulse width in CC0
          */
          __attribute__((always_inline)) Register& setEVACT(target::tc::COUNT16::EVCTRL::EVACT value) volatile {
            raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
            return *(Register*)this;
          }
          /**
            Gets TC Inverted Event Input
            @return boolean value
          */
          __attribute__((always_inline)) bool getTCINV() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets TC Inverted Event Input
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTCINV(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets TC Event Input
            @return boolean value
          */
          __attribute__((always_inline)) bool getTCEI() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets TC Event Input
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTCEI(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Overflow/Underflow Event Output Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVFEO() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Overflow/Underflow Event Output Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVFEO(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Enable Clear
      */
      namespace INTENCLR {
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Enable Set
      */
      namespace INTENSET {
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Flag Status and Clear
      */
      namespace INTFLAG {
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
            Gets Match or Capture Channel 0
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Status
      */
      namespace STATUS {
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
            Gets Stop
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTOP() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Stop
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTOP(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Slave
            @return boolean value
          */
          __attribute__((always_inline)) bool getSLAVE() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Slave
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSLAVE(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCBUSY() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCBUSY(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        COUNT16 Counter Value
      */
      namespace COUNT {
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
            Gets Count Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return ((raw & (0xFFFF << 0)) >> 0);
          }
          /**
            Sets Count Value
            @param value value in range 0..65535
          */
          __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        COUNT16 Compare/Capture
      */
      namespace CC {
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
            Gets Compare/Capture Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getCC() volatile {
            return ((raw & (0xFFFF << 0)) >> 0);
          }
          /**
            Sets Compare/Capture Value
            @param value value in range 0..65535
          */
          __attribute__((always_inline)) Register& setCC(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
            return *(Register*)this;
          }
        };
      };
    };
    
    namespace COUNT32 {
      
      /**
        Control A
      */
      namespace CTRLA {
        enum class MODE {
          // Counter in 16-bit mode
          COUNT16 = 0x0,
          // Counter in 8-bit mode
          COUNT8 = 0x1,
          // Counter in 32-bit mode
          COUNT32 = 0x2,
        };
        
        enum class WAVEGEN {
          NFRQ = 0x0,
          MFRQ = 0x1,
          NPWM = 0x2,
          MPWM = 0x3,
        };
        
        enum class PRESCALER {
          // Prescaler: GCLK_TC
          DIV1 = 0x0,
          // Prescaler: GCLK_TC/2
          DIV2 = 0x1,
          // Prescaler: GCLK_TC/4
          DIV4 = 0x2,
          // Prescaler: GCLK_TC/8
          DIV8 = 0x3,
          // Prescaler: GCLK_TC/16
          DIV16 = 0x4,
          // Prescaler: GCLK_TC/64
          DIV64 = 0x5,
          // Prescaler: GCLK_TC/256
          DIV256 = 0x6,
          // Prescaler: GCLK_TC/1024
          DIV1024 = 0x7,
        };
        
        enum class PRESCSYNC {
          // Reload or reset the counter on next generic clock
          GCLK = 0x0,
          // Reload or reset the counter on next prescaler clock
          PRESC = 0x1,
          // Reload or reset the counter on next generic clock. Reset the prescaler counter
          RESYNC = 0x2,
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
            Gets TC Mode
            @return enumeration value:
            target::tc::COUNT32::CTRLA::MODE::COUNT16 (0x0) Counter in 16-bit mode
            target::tc::COUNT32::CTRLA::MODE::COUNT8 (0x1) Counter in 8-bit mode
            target::tc::COUNT32::CTRLA::MODE::COUNT32 (0x2) Counter in 32-bit mode
          */
          __attribute__((always_inline)) target::tc::COUNT32::CTRLA::MODE getMODE() volatile {
            return static_cast<target::tc::COUNT32::CTRLA::MODE>((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets TC Mode
            @param value enumeration value:
            target::tc::COUNT32::CTRLA::MODE::COUNT16 (0x0) Counter in 16-bit mode
            target::tc::COUNT32::CTRLA::MODE::COUNT8 (0x1) Counter in 8-bit mode
            target::tc::COUNT32::CTRLA::MODE::COUNT32 (0x2) Counter in 32-bit mode
          */
          __attribute__((always_inline)) Register& setMODE(target::tc::COUNT32::CTRLA::MODE value) volatile {
            raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
          /**
            Gets Waveform Generation Operation
            @return enumeration value:
            target::tc::COUNT32::CTRLA::WAVEGEN::NFRQ (0x0) undefined
            target::tc::COUNT32::CTRLA::WAVEGEN::MFRQ (0x1) undefined
            target::tc::COUNT32::CTRLA::WAVEGEN::NPWM (0x2) undefined
            target::tc::COUNT32::CTRLA::WAVEGEN::MPWM (0x3) undefined
          */
          __attribute__((always_inline)) target::tc::COUNT32::CTRLA::WAVEGEN getWAVEGEN() volatile {
            return static_cast<target::tc::COUNT32::CTRLA::WAVEGEN>((raw & (0x3 << 5)) >> 5);
          }
          /**
            Sets Waveform Generation Operation
            @param value enumeration value:
            target::tc::COUNT32::CTRLA::WAVEGEN::NFRQ (0x0) undefined
            target::tc::COUNT32::CTRLA::WAVEGEN::MFRQ (0x1) undefined
            target::tc::COUNT32::CTRLA::WAVEGEN::NPWM (0x2) undefined
            target::tc::COUNT32::CTRLA::WAVEGEN::MPWM (0x3) undefined
          */
          __attribute__((always_inline)) Register& setWAVEGEN(target::tc::COUNT32::CTRLA::WAVEGEN value) volatile {
            raw = (raw & ~(0x3 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x3 << 5));
            return *(Register*)this;
          }
          /**
            Gets Prescaler
            @return enumeration value:
            target::tc::COUNT32::CTRLA::PRESCALER::DIV1 (0x0) Prescaler: GCLK_TC
            target::tc::COUNT32::CTRLA::PRESCALER::DIV2 (0x1) Prescaler: GCLK_TC/2
            target::tc::COUNT32::CTRLA::PRESCALER::DIV4 (0x2) Prescaler: GCLK_TC/4
            target::tc::COUNT32::CTRLA::PRESCALER::DIV8 (0x3) Prescaler: GCLK_TC/8
            target::tc::COUNT32::CTRLA::PRESCALER::DIV16 (0x4) Prescaler: GCLK_TC/16
            target::tc::COUNT32::CTRLA::PRESCALER::DIV64 (0x5) Prescaler: GCLK_TC/64
            target::tc::COUNT32::CTRLA::PRESCALER::DIV256 (0x6) Prescaler: GCLK_TC/256
            target::tc::COUNT32::CTRLA::PRESCALER::DIV1024 (0x7) Prescaler: GCLK_TC/1024
          */
          __attribute__((always_inline)) target::tc::COUNT32::CTRLA::PRESCALER getPRESCALER() volatile {
            return static_cast<target::tc::COUNT32::CTRLA::PRESCALER>((raw & (0x7 << 8)) >> 8);
          }
          /**
            Sets Prescaler
            @param value enumeration value:
            target::tc::COUNT32::CTRLA::PRESCALER::DIV1 (0x0) Prescaler: GCLK_TC
            target::tc::COUNT32::CTRLA::PRESCALER::DIV2 (0x1) Prescaler: GCLK_TC/2
            target::tc::COUNT32::CTRLA::PRESCALER::DIV4 (0x2) Prescaler: GCLK_TC/4
            target::tc::COUNT32::CTRLA::PRESCALER::DIV8 (0x3) Prescaler: GCLK_TC/8
            target::tc::COUNT32::CTRLA::PRESCALER::DIV16 (0x4) Prescaler: GCLK_TC/16
            target::tc::COUNT32::CTRLA::PRESCALER::DIV64 (0x5) Prescaler: GCLK_TC/64
            target::tc::COUNT32::CTRLA::PRESCALER::DIV256 (0x6) Prescaler: GCLK_TC/256
            target::tc::COUNT32::CTRLA::PRESCALER::DIV1024 (0x7) Prescaler: GCLK_TC/1024
          */
          __attribute__((always_inline)) Register& setPRESCALER(target::tc::COUNT32::CTRLA::PRESCALER value) volatile {
            raw = (raw & ~(0x7 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x7 << 8));
            return *(Register*)this;
          }
          /**
            Gets Run in Standby
            @return boolean value
          */
          __attribute__((always_inline)) bool getRUNSTDBY() volatile {
            return ((raw & (0x1 << 11)) >> 11);
          }
          /**
            Sets Run in Standby
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
            raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
            return *(Register*)this;
          }
          /**
            Gets Prescaler and Counter Synchronization
            @return enumeration value:
            target::tc::COUNT32::CTRLA::PRESCSYNC::GCLK (0x0) Reload or reset the counter on next generic clock
            target::tc::COUNT32::CTRLA::PRESCSYNC::PRESC (0x1) Reload or reset the counter on next prescaler clock
            target::tc::COUNT32::CTRLA::PRESCSYNC::RESYNC (0x2) Reload or reset the counter on next generic clock. Reset the prescaler counter
          */
          __attribute__((always_inline)) target::tc::COUNT32::CTRLA::PRESCSYNC getPRESCSYNC() volatile {
            return static_cast<target::tc::COUNT32::CTRLA::PRESCSYNC>((raw & (0x3 << 12)) >> 12);
          }
          /**
            Sets Prescaler and Counter Synchronization
            @param value enumeration value:
            target::tc::COUNT32::CTRLA::PRESCSYNC::GCLK (0x0) Reload or reset the counter on next generic clock
            target::tc::COUNT32::CTRLA::PRESCSYNC::PRESC (0x1) Reload or reset the counter on next prescaler clock
            target::tc::COUNT32::CTRLA::PRESCSYNC::RESYNC (0x2) Reload or reset the counter on next generic clock. Reset the prescaler counter
          */
          __attribute__((always_inline)) Register& setPRESCSYNC(target::tc::COUNT32::CTRLA::PRESCSYNC value) volatile {
            raw = (raw & ~(0x3 << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x3 << 12));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Read Request
      */
      namespace READREQ {
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
            Gets Address
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0x1F << 0)) >> 0);
          }
          /**
            Sets Address
            @param value value in range 0..31
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
            return *(Register*)this;
          }
          /**
            Gets Read Continuously
            @return boolean value
          */
          __attribute__((always_inline)) bool getRCONT() volatile {
            return ((raw & (0x1 << 14)) >> 14);
          }
          /**
            Sets Read Continuously
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRCONT(bool value) volatile {
            raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
            return *(Register*)this;
          }
          /**
            Gets Read Request
            @return boolean value
          */
          __attribute__((always_inline)) bool getRREQ() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Read Request
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRREQ(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control B Clear
      */
      namespace CTRLBCLR {
        enum class CMD {
          // No action
          NONE = 0x0,
          // Force a start, restart or retrigger
          RETRIGGER = 0x1,
          // Force a stop
          STOP = 0x2,
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
            Gets Counter Direction
            @return boolean value
          */
          __attribute__((always_inline)) bool getDIR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Counter Direction
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDIR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets One-Shot
            @return boolean value
          */
          __attribute__((always_inline)) bool getONESHOT() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets One-Shot
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setONESHOT(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Command
            @return enumeration value:
            target::tc::COUNT32::CTRLBCLR::CMD::NONE (0x0) No action
            target::tc::COUNT32::CTRLBCLR::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT32::CTRLBCLR::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) target::tc::COUNT32::CTRLBCLR::CMD getCMD() volatile {
            return static_cast<target::tc::COUNT32::CTRLBCLR::CMD>((raw & (0x3 << 6)) >> 6);
          }
          /**
            Sets Command
            @param value enumeration value:
            target::tc::COUNT32::CTRLBCLR::CMD::NONE (0x0) No action
            target::tc::COUNT32::CTRLBCLR::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT32::CTRLBCLR::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) Register& setCMD(target::tc::COUNT32::CTRLBCLR::CMD value) volatile {
            raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control B Set
      */
      namespace CTRLBSET {
        enum class CMD {
          // No action
          NONE = 0x0,
          // Force a start, restart or retrigger
          RETRIGGER = 0x1,
          // Force a stop
          STOP = 0x2,
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
            Gets Counter Direction
            @return boolean value
          */
          __attribute__((always_inline)) bool getDIR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Counter Direction
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDIR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets One-Shot
            @return boolean value
          */
          __attribute__((always_inline)) bool getONESHOT() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets One-Shot
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setONESHOT(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Command
            @return enumeration value:
            target::tc::COUNT32::CTRLBSET::CMD::NONE (0x0) No action
            target::tc::COUNT32::CTRLBSET::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT32::CTRLBSET::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) target::tc::COUNT32::CTRLBSET::CMD getCMD() volatile {
            return static_cast<target::tc::COUNT32::CTRLBSET::CMD>((raw & (0x3 << 6)) >> 6);
          }
          /**
            Sets Command
            @param value enumeration value:
            target::tc::COUNT32::CTRLBSET::CMD::NONE (0x0) No action
            target::tc::COUNT32::CTRLBSET::CMD::RETRIGGER (0x1) Force a start, restart or retrigger
            target::tc::COUNT32::CTRLBSET::CMD::STOP (0x2) Force a stop
          */
          __attribute__((always_inline)) Register& setCMD(target::tc::COUNT32::CTRLBSET::CMD value) volatile {
            raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Control C
      */
      namespace CTRLC {
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
            Gets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getINVEN(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Output Waveform 0 Invert Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setINVEN(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Capture Channel 0 Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getCPTEN(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Capture Channel 0 Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCPTEN(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
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
            Gets Debug Run Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGRUN() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Debug Run Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Event Control
      */
      namespace EVCTRL {
        enum class EVACT {
          // Event action disabled
          OFF = 0x0,
          // Start, restart or retrigger TC on event
          RETRIGGER = 0x1,
          // Count on event
          COUNT = 0x2,
          // Start TC on event
          START = 0x3,
          // Period captured in CC0, pulse width in CC1
          PPW = 0x5,
          // Period captured in CC1, pulse width in CC0
          PWP = 0x6,
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
            Gets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMCEO(int index) volatile {
            return ((raw & (0x1 << (12 + 1 * (index - 0)))) >> (12 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Event Output Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMCEO(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (12 + 1 * (index - 0)))) | ((((value)) << (12 + 1 * (index - 0))) & (0x1 << (12 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Event Action
            @return enumeration value:
            target::tc::COUNT32::EVCTRL::EVACT::OFF (0x0) Event action disabled
            target::tc::COUNT32::EVCTRL::EVACT::RETRIGGER (0x1) Start, restart or retrigger TC on event
            target::tc::COUNT32::EVCTRL::EVACT::COUNT (0x2) Count on event
            target::tc::COUNT32::EVCTRL::EVACT::START (0x3) Start TC on event
            target::tc::COUNT32::EVCTRL::EVACT::PPW (0x5) Period captured in CC0, pulse width in CC1
            target::tc::COUNT32::EVCTRL::EVACT::PWP (0x6) Period captured in CC1, pulse width in CC0
          */
          __attribute__((always_inline)) target::tc::COUNT32::EVCTRL::EVACT getEVACT() volatile {
            return static_cast<target::tc::COUNT32::EVCTRL::EVACT>((raw & (0x7 << 0)) >> 0);
          }
          /**
            Sets Event Action
            @param value enumeration value:
            target::tc::COUNT32::EVCTRL::EVACT::OFF (0x0) Event action disabled
            target::tc::COUNT32::EVCTRL::EVACT::RETRIGGER (0x1) Start, restart or retrigger TC on event
            target::tc::COUNT32::EVCTRL::EVACT::COUNT (0x2) Count on event
            target::tc::COUNT32::EVCTRL::EVACT::START (0x3) Start TC on event
            target::tc::COUNT32::EVCTRL::EVACT::PPW (0x5) Period captured in CC0, pulse width in CC1
            target::tc::COUNT32::EVCTRL::EVACT::PWP (0x6) Period captured in CC1, pulse width in CC0
          */
          __attribute__((always_inline)) Register& setEVACT(target::tc::COUNT32::EVCTRL::EVACT value) volatile {
            raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
            return *(Register*)this;
          }
          /**
            Gets TC Inverted Event Input
            @return boolean value
          */
          __attribute__((always_inline)) bool getTCINV() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets TC Inverted Event Input
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTCINV(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets TC Event Input
            @return boolean value
          */
          __attribute__((always_inline)) bool getTCEI() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets TC Event Input
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTCEI(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Overflow/Underflow Event Output Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVFEO() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Overflow/Underflow Event Output Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVFEO(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Enable Clear
      */
      namespace INTENCLR {
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Enable Set
      */
      namespace INTENSET {
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
            Gets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Interrupt Flag Status and Clear
      */
      namespace INTFLAG {
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
            Gets Match or Capture Channel 0
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getMC(int index) volatile {
            return ((raw & (0x1 << (4 + 1 * (index - 0)))) >> (4 + 1 * (index - 0)));
          }
          /**
            Sets Match or Capture Channel 0
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (4 + 1 * (index - 0)))) | ((((value)) << (4 + 1 * (index - 0))) & (0x1 << (4 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Overflow
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Synchronization Ready
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Status
      */
      namespace STATUS {
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
            Gets Stop
            @return boolean value
          */
          __attribute__((always_inline)) bool getSTOP() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Stop
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSTOP(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Slave
            @return boolean value
          */
          __attribute__((always_inline)) bool getSLAVE() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Slave
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSLAVE(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCBUSY() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCBUSY(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        COUNT32 Counter Value
      */
      namespace COUNT {
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
            Gets Count Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return ((raw & (0xFFFFFFFF << 0)) >> 0);
          }
          /**
            Sets Count Value
            @param value value in range 0..4294967295
          */
          __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        COUNT32 Compare/Capture
      */
      namespace CC {
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
            Gets Compare/Capture Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getCC() volatile {
            return ((raw & (0xFFFFFFFF << 0)) >> 0);
          }
          /**
            Sets Compare/Capture Value
            @param value value in range 0..4294967295
          */
          __attribute__((always_inline)) Register& setCC(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
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
            COUNT8::CTRLA::Register CTRLA;
          };
          struct {
            char _space_READREQ[0x2];
            /**
              Read Request
            */
            COUNT8::READREQ::Register READREQ;
          };
          struct {
            char _space_CTRLBCLR[0x4];
            /**
              Control B Clear
            */
            COUNT8::CTRLBCLR::Register CTRLBCLR;
          };
          struct {
            char _space_CTRLBSET[0x5];
            /**
              Control B Set
            */
            COUNT8::CTRLBSET::Register CTRLBSET;
          };
          struct {
            char _space_CTRLC[0x6];
            /**
              Control C
            */
            COUNT8::CTRLC::Register CTRLC;
          };
          struct {
            char _space_DBGCTRL[0x8];
            /**
              Debug Control
            */
            COUNT8::DBGCTRL::Register DBGCTRL;
          };
          struct {
            char _space_EVCTRL[0xa];
            /**
              Event Control
            */
            COUNT8::EVCTRL::Register EVCTRL;
          };
          struct {
            char _space_INTENCLR[0xc];
            /**
              Interrupt Enable Clear
            */
            COUNT8::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0xd];
            /**
              Interrupt Enable Set
            */
            COUNT8::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0xe];
            /**
              Interrupt Flag Status and Clear
            */
            COUNT8::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0xf];
            /**
              Status
            */
            COUNT8::STATUS::Register STATUS;
          };
          struct {
            char _space_COUNT[0x10];
            /**
              COUNT8 Counter Value
            */
            COUNT8::COUNT::Register COUNT;
          };
          struct {
            char _space_PER[0x14];
            /**
              COUNT8 Period Value
            */
            COUNT8::PER::Register PER;
          };
          struct {
            char _space_CC[0x18];
            /**
              COUNT8 Compare/Capture
            */
            COUNT8::CC::Register CC[2];
          };
        } COUNT8;
        union {
          struct {
            /**
              Control A
            */
            COUNT16::CTRLA::Register CTRLA;
          };
          struct {
            char _space_READREQ[0x2];
            /**
              Read Request
            */
            COUNT16::READREQ::Register READREQ;
          };
          struct {
            char _space_CTRLBCLR[0x4];
            /**
              Control B Clear
            */
            COUNT16::CTRLBCLR::Register CTRLBCLR;
          };
          struct {
            char _space_CTRLBSET[0x5];
            /**
              Control B Set
            */
            COUNT16::CTRLBSET::Register CTRLBSET;
          };
          struct {
            char _space_CTRLC[0x6];
            /**
              Control C
            */
            COUNT16::CTRLC::Register CTRLC;
          };
          struct {
            char _space_DBGCTRL[0x8];
            /**
              Debug Control
            */
            COUNT16::DBGCTRL::Register DBGCTRL;
          };
          struct {
            char _space_EVCTRL[0xa];
            /**
              Event Control
            */
            COUNT16::EVCTRL::Register EVCTRL;
          };
          struct {
            char _space_INTENCLR[0xc];
            /**
              Interrupt Enable Clear
            */
            COUNT16::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0xd];
            /**
              Interrupt Enable Set
            */
            COUNT16::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0xe];
            /**
              Interrupt Flag Status and Clear
            */
            COUNT16::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0xf];
            /**
              Status
            */
            COUNT16::STATUS::Register STATUS;
          };
          struct {
            char _space_COUNT[0x10];
            /**
              COUNT16 Counter Value
            */
            COUNT16::COUNT::Register COUNT;
          };
          struct {
            char _space_CC[0x18];
            /**
              COUNT16 Compare/Capture
            */
            COUNT16::CC::Register CC[2];
          };
        } COUNT16;
        union {
          struct {
            /**
              Control A
            */
            COUNT32::CTRLA::Register CTRLA;
          };
          struct {
            char _space_READREQ[0x2];
            /**
              Read Request
            */
            COUNT32::READREQ::Register READREQ;
          };
          struct {
            char _space_CTRLBCLR[0x4];
            /**
              Control B Clear
            */
            COUNT32::CTRLBCLR::Register CTRLBCLR;
          };
          struct {
            char _space_CTRLBSET[0x5];
            /**
              Control B Set
            */
            COUNT32::CTRLBSET::Register CTRLBSET;
          };
          struct {
            char _space_CTRLC[0x6];
            /**
              Control C
            */
            COUNT32::CTRLC::Register CTRLC;
          };
          struct {
            char _space_DBGCTRL[0x8];
            /**
              Debug Control
            */
            COUNT32::DBGCTRL::Register DBGCTRL;
          };
          struct {
            char _space_EVCTRL[0xa];
            /**
              Event Control
            */
            COUNT32::EVCTRL::Register EVCTRL;
          };
          struct {
            char _space_INTENCLR[0xc];
            /**
              Interrupt Enable Clear
            */
            COUNT32::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0xd];
            /**
              Interrupt Enable Set
            */
            COUNT32::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0xe];
            /**
              Interrupt Flag Status and Clear
            */
            COUNT32::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0xf];
            /**
              Status
            */
            COUNT32::STATUS::Register STATUS;
          };
          struct {
            char _space_COUNT[0x10];
            /**
              COUNT32 Counter Value
            */
            COUNT32::COUNT::Register COUNT;
          };
          struct {
            char _space_CC[0x18];
            /**
              COUNT32 Compare/Capture
            */
            COUNT32::CC::Register CC[2];
          };
        } COUNT32;
      };
    };
  }
  
  extern volatile tc::Peripheral TC1;
  extern volatile tc::Peripheral TC2;
}