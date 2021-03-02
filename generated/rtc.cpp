namespace target {
  namespace rtc {
    namespace MODE0 {
      
      /**
        MODE0 Control
      */
      namespace CTRL {
        enum class MODE {
          // Mode 0: 32-bit Counter
          COUNT32 = 0x0,
          // Mode 1: 16-bit Counter
          COUNT16 = 0x1,
          // Mode 2: Clock/Calendar
          CLOCK = 0x2,
        };
        
        enum class PRESCALER {
          // CLK_RTC_CNT = GCLK_RTC/1
          DIV1 = 0x0,
          // CLK_RTC_CNT = GCLK_RTC/2
          DIV2 = 0x1,
          // CLK_RTC_CNT = GCLK_RTC/4
          DIV4 = 0x2,
          // CLK_RTC_CNT = GCLK_RTC/8
          DIV8 = 0x3,
          // CLK_RTC_CNT = GCLK_RTC/16
          DIV16 = 0x4,
          // CLK_RTC_CNT = GCLK_RTC/32
          DIV32 = 0x5,
          // CLK_RTC_CNT = GCLK_RTC/64
          DIV64 = 0x6,
          // CLK_RTC_CNT = GCLK_RTC/128
          DIV128 = 0x7,
          // CLK_RTC_CNT = GCLK_RTC/256
          DIV256 = 0x8,
          // CLK_RTC_CNT = GCLK_RTC/512
          DIV512 = 0x9,
          // CLK_RTC_CNT = GCLK_RTC/1024
          DIV1024 = 0xa,
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
            Gets Operating Mode
            @return enumeration value:
            target::rtc::MODE0::CTRL::MODE::COUNT32 (0x0) Mode 0: 32-bit Counter
            target::rtc::MODE0::CTRL::MODE::COUNT16 (0x1) Mode 1: 16-bit Counter
            target::rtc::MODE0::CTRL::MODE::CLOCK (0x2) Mode 2: Clock/Calendar
          */
          __attribute__((always_inline)) target::rtc::MODE0::CTRL::MODE getMODE() volatile {
            return static_cast<target::rtc::MODE0::CTRL::MODE>((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets Operating Mode
            @param value enumeration value:
            target::rtc::MODE0::CTRL::MODE::COUNT32 (0x0) Mode 0: 32-bit Counter
            target::rtc::MODE0::CTRL::MODE::COUNT16 (0x1) Mode 1: 16-bit Counter
            target::rtc::MODE0::CTRL::MODE::CLOCK (0x2) Mode 2: Clock/Calendar
          */
          __attribute__((always_inline)) Register& setMODE(target::rtc::MODE0::CTRL::MODE value) volatile {
            raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
          /**
            Gets Clear on Match
            @return boolean value
          */
          __attribute__((always_inline)) bool getMATCHCLR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Clear on Match
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMATCHCLR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Prescaler
            @return enumeration value:
            target::rtc::MODE0::CTRL::PRESCALER::DIV1 (0x0) CLK_RTC_CNT = GCLK_RTC/1
            target::rtc::MODE0::CTRL::PRESCALER::DIV2 (0x1) CLK_RTC_CNT = GCLK_RTC/2
            target::rtc::MODE0::CTRL::PRESCALER::DIV4 (0x2) CLK_RTC_CNT = GCLK_RTC/4
            target::rtc::MODE0::CTRL::PRESCALER::DIV8 (0x3) CLK_RTC_CNT = GCLK_RTC/8
            target::rtc::MODE0::CTRL::PRESCALER::DIV16 (0x4) CLK_RTC_CNT = GCLK_RTC/16
            target::rtc::MODE0::CTRL::PRESCALER::DIV32 (0x5) CLK_RTC_CNT = GCLK_RTC/32
            target::rtc::MODE0::CTRL::PRESCALER::DIV64 (0x6) CLK_RTC_CNT = GCLK_RTC/64
            target::rtc::MODE0::CTRL::PRESCALER::DIV128 (0x7) CLK_RTC_CNT = GCLK_RTC/128
            target::rtc::MODE0::CTRL::PRESCALER::DIV256 (0x8) CLK_RTC_CNT = GCLK_RTC/256
            target::rtc::MODE0::CTRL::PRESCALER::DIV512 (0x9) CLK_RTC_CNT = GCLK_RTC/512
            target::rtc::MODE0::CTRL::PRESCALER::DIV1024 (0xa) CLK_RTC_CNT = GCLK_RTC/1024
          */
          __attribute__((always_inline)) target::rtc::MODE0::CTRL::PRESCALER getPRESCALER() volatile {
            return static_cast<target::rtc::MODE0::CTRL::PRESCALER>((raw & (0xF << 8)) >> 8);
          }
          /**
            Sets Prescaler
            @param value enumeration value:
            target::rtc::MODE0::CTRL::PRESCALER::DIV1 (0x0) CLK_RTC_CNT = GCLK_RTC/1
            target::rtc::MODE0::CTRL::PRESCALER::DIV2 (0x1) CLK_RTC_CNT = GCLK_RTC/2
            target::rtc::MODE0::CTRL::PRESCALER::DIV4 (0x2) CLK_RTC_CNT = GCLK_RTC/4
            target::rtc::MODE0::CTRL::PRESCALER::DIV8 (0x3) CLK_RTC_CNT = GCLK_RTC/8
            target::rtc::MODE0::CTRL::PRESCALER::DIV16 (0x4) CLK_RTC_CNT = GCLK_RTC/16
            target::rtc::MODE0::CTRL::PRESCALER::DIV32 (0x5) CLK_RTC_CNT = GCLK_RTC/32
            target::rtc::MODE0::CTRL::PRESCALER::DIV64 (0x6) CLK_RTC_CNT = GCLK_RTC/64
            target::rtc::MODE0::CTRL::PRESCALER::DIV128 (0x7) CLK_RTC_CNT = GCLK_RTC/128
            target::rtc::MODE0::CTRL::PRESCALER::DIV256 (0x8) CLK_RTC_CNT = GCLK_RTC/256
            target::rtc::MODE0::CTRL::PRESCALER::DIV512 (0x9) CLK_RTC_CNT = GCLK_RTC/512
            target::rtc::MODE0::CTRL::PRESCALER::DIV1024 (0xa) CLK_RTC_CNT = GCLK_RTC/1024
          */
          __attribute__((always_inline)) Register& setPRESCALER(target::rtc::MODE0::CTRL::PRESCALER value) volatile {
            raw = (raw & ~(0xF << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0xF << 8));
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
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0x3F << 0)) >> 0);
          }
          /**
            Sets Address
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
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
        MODE0 Event Control
      */
      namespace EVCTRL {
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
            Gets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @return boolean value
          */
          __attribute__((always_inline)) bool getPEREO(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPEREO(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Compare 0 Event Output Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMPEO0() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Compare 0 Event Output Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMPEO0(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Overflow Event Output Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVFEO() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Overflow Event Output Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVFEO(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE0 Interrupt Enable Clear
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
            Gets Compare 0 Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMP0() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMP0(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE0 Interrupt Enable Set
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
            Gets Compare 0 Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMP0() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMP0(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE0 Interrupt Flag Status and Clear
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
            Gets Compare 0
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMP0() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Compare 0
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMP0(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
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
            Gets Run During Debug
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGRUN() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Run During Debug
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Frequency Correction
      */
      namespace FREQCORR {
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
            Gets Correction Value
            @return value in range 0..127
          */
          __attribute__((always_inline)) unsigned long getVALUE() volatile {
            return ((raw & (0x7F << 0)) >> 0);
          }
          /**
            Sets Correction Value
            @param value value in range 0..127
          */
          __attribute__((always_inline)) Register& setVALUE(unsigned long value) volatile {
            raw = (raw & ~(0x7F << 0)) | ((((value)) << 0) & (0x7F << 0));
            return *(Register*)this;
          }
          /**
            Gets Correction Sign
            @return boolean value
          */
          __attribute__((always_inline)) bool getSIGN() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Correction Sign
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSIGN(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE0 Counter Value
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
            Gets Counter Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return ((raw & (0xFFFFFFFF << 0)) >> 0);
          }
          /**
            Sets Counter Value
            @param value value in range 0..4294967295
          */
          __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE0 Compare n Value
      */
      namespace COMP {
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
            Gets Compare Value
            @return value in range 0..4294967295
          */
          __attribute__((always_inline)) unsigned long getCOMP() volatile {
            return ((raw & (0xFFFFFFFF << 0)) >> 0);
          }
          /**
            Sets Compare Value
            @param value value in range 0..4294967295
          */
          __attribute__((always_inline)) Register& setCOMP(unsigned long value) volatile {
            raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
            return *(Register*)this;
          }
        };
      };
    };
    
    namespace MODE1 {
      
      /**
        MODE1 Control
      */
      namespace CTRL {
        enum class MODE {
          // Mode 0: 32-bit Counter
          COUNT32 = 0x0,
          // Mode 1: 16-bit Counter
          COUNT16 = 0x1,
          // Mode 2: Clock/Calendar
          CLOCK = 0x2,
        };
        
        enum class PRESCALER {
          // CLK_RTC_CNT = GCLK_RTC/1
          DIV1 = 0x0,
          // CLK_RTC_CNT = GCLK_RTC/2
          DIV2 = 0x1,
          // CLK_RTC_CNT = GCLK_RTC/4
          DIV4 = 0x2,
          // CLK_RTC_CNT = GCLK_RTC/8
          DIV8 = 0x3,
          // CLK_RTC_CNT = GCLK_RTC/16
          DIV16 = 0x4,
          // CLK_RTC_CNT = GCLK_RTC/32
          DIV32 = 0x5,
          // CLK_RTC_CNT = GCLK_RTC/64
          DIV64 = 0x6,
          // CLK_RTC_CNT = GCLK_RTC/128
          DIV128 = 0x7,
          // CLK_RTC_CNT = GCLK_RTC/256
          DIV256 = 0x8,
          // CLK_RTC_CNT = GCLK_RTC/512
          DIV512 = 0x9,
          // CLK_RTC_CNT = GCLK_RTC/1024
          DIV1024 = 0xa,
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
            Gets Operating Mode
            @return enumeration value:
            target::rtc::MODE1::CTRL::MODE::COUNT32 (0x0) Mode 0: 32-bit Counter
            target::rtc::MODE1::CTRL::MODE::COUNT16 (0x1) Mode 1: 16-bit Counter
            target::rtc::MODE1::CTRL::MODE::CLOCK (0x2) Mode 2: Clock/Calendar
          */
          __attribute__((always_inline)) target::rtc::MODE1::CTRL::MODE getMODE() volatile {
            return static_cast<target::rtc::MODE1::CTRL::MODE>((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets Operating Mode
            @param value enumeration value:
            target::rtc::MODE1::CTRL::MODE::COUNT32 (0x0) Mode 0: 32-bit Counter
            target::rtc::MODE1::CTRL::MODE::COUNT16 (0x1) Mode 1: 16-bit Counter
            target::rtc::MODE1::CTRL::MODE::CLOCK (0x2) Mode 2: Clock/Calendar
          */
          __attribute__((always_inline)) Register& setMODE(target::rtc::MODE1::CTRL::MODE value) volatile {
            raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
          /**
            Gets Prescaler
            @return enumeration value:
            target::rtc::MODE1::CTRL::PRESCALER::DIV1 (0x0) CLK_RTC_CNT = GCLK_RTC/1
            target::rtc::MODE1::CTRL::PRESCALER::DIV2 (0x1) CLK_RTC_CNT = GCLK_RTC/2
            target::rtc::MODE1::CTRL::PRESCALER::DIV4 (0x2) CLK_RTC_CNT = GCLK_RTC/4
            target::rtc::MODE1::CTRL::PRESCALER::DIV8 (0x3) CLK_RTC_CNT = GCLK_RTC/8
            target::rtc::MODE1::CTRL::PRESCALER::DIV16 (0x4) CLK_RTC_CNT = GCLK_RTC/16
            target::rtc::MODE1::CTRL::PRESCALER::DIV32 (0x5) CLK_RTC_CNT = GCLK_RTC/32
            target::rtc::MODE1::CTRL::PRESCALER::DIV64 (0x6) CLK_RTC_CNT = GCLK_RTC/64
            target::rtc::MODE1::CTRL::PRESCALER::DIV128 (0x7) CLK_RTC_CNT = GCLK_RTC/128
            target::rtc::MODE1::CTRL::PRESCALER::DIV256 (0x8) CLK_RTC_CNT = GCLK_RTC/256
            target::rtc::MODE1::CTRL::PRESCALER::DIV512 (0x9) CLK_RTC_CNT = GCLK_RTC/512
            target::rtc::MODE1::CTRL::PRESCALER::DIV1024 (0xa) CLK_RTC_CNT = GCLK_RTC/1024
          */
          __attribute__((always_inline)) target::rtc::MODE1::CTRL::PRESCALER getPRESCALER() volatile {
            return static_cast<target::rtc::MODE1::CTRL::PRESCALER>((raw & (0xF << 8)) >> 8);
          }
          /**
            Sets Prescaler
            @param value enumeration value:
            target::rtc::MODE1::CTRL::PRESCALER::DIV1 (0x0) CLK_RTC_CNT = GCLK_RTC/1
            target::rtc::MODE1::CTRL::PRESCALER::DIV2 (0x1) CLK_RTC_CNT = GCLK_RTC/2
            target::rtc::MODE1::CTRL::PRESCALER::DIV4 (0x2) CLK_RTC_CNT = GCLK_RTC/4
            target::rtc::MODE1::CTRL::PRESCALER::DIV8 (0x3) CLK_RTC_CNT = GCLK_RTC/8
            target::rtc::MODE1::CTRL::PRESCALER::DIV16 (0x4) CLK_RTC_CNT = GCLK_RTC/16
            target::rtc::MODE1::CTRL::PRESCALER::DIV32 (0x5) CLK_RTC_CNT = GCLK_RTC/32
            target::rtc::MODE1::CTRL::PRESCALER::DIV64 (0x6) CLK_RTC_CNT = GCLK_RTC/64
            target::rtc::MODE1::CTRL::PRESCALER::DIV128 (0x7) CLK_RTC_CNT = GCLK_RTC/128
            target::rtc::MODE1::CTRL::PRESCALER::DIV256 (0x8) CLK_RTC_CNT = GCLK_RTC/256
            target::rtc::MODE1::CTRL::PRESCALER::DIV512 (0x9) CLK_RTC_CNT = GCLK_RTC/512
            target::rtc::MODE1::CTRL::PRESCALER::DIV1024 (0xa) CLK_RTC_CNT = GCLK_RTC/1024
          */
          __attribute__((always_inline)) Register& setPRESCALER(target::rtc::MODE1::CTRL::PRESCALER value) volatile {
            raw = (raw & ~(0xF << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0xF << 8));
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
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0x3F << 0)) >> 0);
          }
          /**
            Sets Address
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
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
        MODE1 Event Control
      */
      namespace EVCTRL {
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
            Gets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @return boolean value
          */
          __attribute__((always_inline)) bool getPEREO(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPEREO(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Compare 0 Event Output Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMPEO(int index) volatile {
            return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
          }
          /**
            Sets Compare 0 Event Output Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMPEO(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Overflow Event Output Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVFEO() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Overflow Event Output Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVFEO(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE1 Interrupt Enable Clear
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
            Gets Compare 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMP(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMP(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE1 Interrupt Enable Set
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
            Gets Compare 0 Interrupt Enable
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMP(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Compare 0 Interrupt Enable
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMP(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE1 Interrupt Flag Status and Clear
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
            Gets Compare 0
            @param index in range 0..1
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMP(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Compare 0
            @param index in range 0..1
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMP(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
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
            Gets Run During Debug
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGRUN() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Run During Debug
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Frequency Correction
      */
      namespace FREQCORR {
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
            Gets Correction Value
            @return value in range 0..127
          */
          __attribute__((always_inline)) unsigned long getVALUE() volatile {
            return ((raw & (0x7F << 0)) >> 0);
          }
          /**
            Sets Correction Value
            @param value value in range 0..127
          */
          __attribute__((always_inline)) Register& setVALUE(unsigned long value) volatile {
            raw = (raw & ~(0x7F << 0)) | ((((value)) << 0) & (0x7F << 0));
            return *(Register*)this;
          }
          /**
            Gets Correction Sign
            @return boolean value
          */
          __attribute__((always_inline)) bool getSIGN() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Correction Sign
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSIGN(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE1 Counter Value
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
            Gets Counter Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getCOUNT() volatile {
            return ((raw & (0xFFFF << 0)) >> 0);
          }
          /**
            Sets Counter Value
            @param value value in range 0..65535
          */
          __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE1 Counter Period
      */
      namespace PER {
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
            Gets Counter Period
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getPER() volatile {
            return ((raw & (0xFFFF << 0)) >> 0);
          }
          /**
            Sets Counter Period
            @param value value in range 0..65535
          */
          __attribute__((always_inline)) Register& setPER(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE1 Compare n Value
      */
      namespace COMP {
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
            Gets Compare Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getCOMP() volatile {
            return ((raw & (0xFFFF << 0)) >> 0);
          }
          /**
            Sets Compare Value
            @param value value in range 0..65535
          */
          __attribute__((always_inline)) Register& setCOMP(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
            return *(Register*)this;
          }
        };
      };
    };
    
    namespace MODE2 {
      
      /**
        MODE2 Control
      */
      namespace CTRL {
        enum class MODE {
          // Mode 0: 32-bit Counter
          COUNT32 = 0x0,
          // Mode 1: 16-bit Counter
          COUNT16 = 0x1,
          // Mode 2: Clock/Calendar
          CLOCK = 0x2,
        };
        
        enum class PRESCALER {
          // CLK_RTC_CNT = GCLK_RTC/1
          DIV1 = 0x0,
          // CLK_RTC_CNT = GCLK_RTC/2
          DIV2 = 0x1,
          // CLK_RTC_CNT = GCLK_RTC/4
          DIV4 = 0x2,
          // CLK_RTC_CNT = GCLK_RTC/8
          DIV8 = 0x3,
          // CLK_RTC_CNT = GCLK_RTC/16
          DIV16 = 0x4,
          // CLK_RTC_CNT = GCLK_RTC/32
          DIV32 = 0x5,
          // CLK_RTC_CNT = GCLK_RTC/64
          DIV64 = 0x6,
          // CLK_RTC_CNT = GCLK_RTC/128
          DIV128 = 0x7,
          // CLK_RTC_CNT = GCLK_RTC/256
          DIV256 = 0x8,
          // CLK_RTC_CNT = GCLK_RTC/512
          DIV512 = 0x9,
          // CLK_RTC_CNT = GCLK_RTC/1024
          DIV1024 = 0xa,
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
            Gets Operating Mode
            @return enumeration value:
            target::rtc::MODE2::CTRL::MODE::COUNT32 (0x0) Mode 0: 32-bit Counter
            target::rtc::MODE2::CTRL::MODE::COUNT16 (0x1) Mode 1: 16-bit Counter
            target::rtc::MODE2::CTRL::MODE::CLOCK (0x2) Mode 2: Clock/Calendar
          */
          __attribute__((always_inline)) target::rtc::MODE2::CTRL::MODE getMODE() volatile {
            return static_cast<target::rtc::MODE2::CTRL::MODE>((raw & (0x3 << 2)) >> 2);
          }
          /**
            Sets Operating Mode
            @param value enumeration value:
            target::rtc::MODE2::CTRL::MODE::COUNT32 (0x0) Mode 0: 32-bit Counter
            target::rtc::MODE2::CTRL::MODE::COUNT16 (0x1) Mode 1: 16-bit Counter
            target::rtc::MODE2::CTRL::MODE::CLOCK (0x2) Mode 2: Clock/Calendar
          */
          __attribute__((always_inline)) Register& setMODE(target::rtc::MODE2::CTRL::MODE value) volatile {
            raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
            return *(Register*)this;
          }
          /**
            Gets Clock Representation
            @return boolean value
          */
          __attribute__((always_inline)) bool getCLKREP() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Clock Representation
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCLKREP(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Clear on Match
            @return boolean value
          */
          __attribute__((always_inline)) bool getMATCHCLR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Clear on Match
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMATCHCLR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Prescaler
            @return enumeration value:
            target::rtc::MODE2::CTRL::PRESCALER::DIV1 (0x0) CLK_RTC_CNT = GCLK_RTC/1
            target::rtc::MODE2::CTRL::PRESCALER::DIV2 (0x1) CLK_RTC_CNT = GCLK_RTC/2
            target::rtc::MODE2::CTRL::PRESCALER::DIV4 (0x2) CLK_RTC_CNT = GCLK_RTC/4
            target::rtc::MODE2::CTRL::PRESCALER::DIV8 (0x3) CLK_RTC_CNT = GCLK_RTC/8
            target::rtc::MODE2::CTRL::PRESCALER::DIV16 (0x4) CLK_RTC_CNT = GCLK_RTC/16
            target::rtc::MODE2::CTRL::PRESCALER::DIV32 (0x5) CLK_RTC_CNT = GCLK_RTC/32
            target::rtc::MODE2::CTRL::PRESCALER::DIV64 (0x6) CLK_RTC_CNT = GCLK_RTC/64
            target::rtc::MODE2::CTRL::PRESCALER::DIV128 (0x7) CLK_RTC_CNT = GCLK_RTC/128
            target::rtc::MODE2::CTRL::PRESCALER::DIV256 (0x8) CLK_RTC_CNT = GCLK_RTC/256
            target::rtc::MODE2::CTRL::PRESCALER::DIV512 (0x9) CLK_RTC_CNT = GCLK_RTC/512
            target::rtc::MODE2::CTRL::PRESCALER::DIV1024 (0xa) CLK_RTC_CNT = GCLK_RTC/1024
          */
          __attribute__((always_inline)) target::rtc::MODE2::CTRL::PRESCALER getPRESCALER() volatile {
            return static_cast<target::rtc::MODE2::CTRL::PRESCALER>((raw & (0xF << 8)) >> 8);
          }
          /**
            Sets Prescaler
            @param value enumeration value:
            target::rtc::MODE2::CTRL::PRESCALER::DIV1 (0x0) CLK_RTC_CNT = GCLK_RTC/1
            target::rtc::MODE2::CTRL::PRESCALER::DIV2 (0x1) CLK_RTC_CNT = GCLK_RTC/2
            target::rtc::MODE2::CTRL::PRESCALER::DIV4 (0x2) CLK_RTC_CNT = GCLK_RTC/4
            target::rtc::MODE2::CTRL::PRESCALER::DIV8 (0x3) CLK_RTC_CNT = GCLK_RTC/8
            target::rtc::MODE2::CTRL::PRESCALER::DIV16 (0x4) CLK_RTC_CNT = GCLK_RTC/16
            target::rtc::MODE2::CTRL::PRESCALER::DIV32 (0x5) CLK_RTC_CNT = GCLK_RTC/32
            target::rtc::MODE2::CTRL::PRESCALER::DIV64 (0x6) CLK_RTC_CNT = GCLK_RTC/64
            target::rtc::MODE2::CTRL::PRESCALER::DIV128 (0x7) CLK_RTC_CNT = GCLK_RTC/128
            target::rtc::MODE2::CTRL::PRESCALER::DIV256 (0x8) CLK_RTC_CNT = GCLK_RTC/256
            target::rtc::MODE2::CTRL::PRESCALER::DIV512 (0x9) CLK_RTC_CNT = GCLK_RTC/512
            target::rtc::MODE2::CTRL::PRESCALER::DIV1024 (0xa) CLK_RTC_CNT = GCLK_RTC/1024
          */
          __attribute__((always_inline)) Register& setPRESCALER(target::rtc::MODE2::CTRL::PRESCALER value) volatile {
            raw = (raw & ~(0xF << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0xF << 8));
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
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0x3F << 0)) >> 0);
          }
          /**
            Sets Address
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
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
        MODE2 Event Control
      */
      namespace EVCTRL {
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
            Gets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @return boolean value
          */
          __attribute__((always_inline)) bool getPEREO(int index) volatile {
            return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
          }
          /**
            Sets Periodic Interval 0 Event Output Enable
            @param index in range 0..7
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPEREO(int index, bool value) volatile {
            raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
            return *(Register*)this;
          }
          /**
            Gets Alarm 0 Event Output Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getALARMEO0() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Alarm 0 Event Output Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setALARMEO0(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Overflow Event Output Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVFEO() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Overflow Event Output Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVFEO(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE2 Interrupt Enable Clear
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
            Gets Alarm 0 Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getALARM0() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Alarm 0 Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setALARM0(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE2 Interrupt Enable Set
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
            Gets Alarm 0 Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getALARM0() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Alarm 0 Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setALARM0(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE2 Interrupt Flag Status and Clear
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
            Gets Alarm 0
            @return boolean value
          */
          __attribute__((always_inline)) bool getALARM0() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Alarm 0
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setALARM0(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Synchronization Ready
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYNCRDY() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Synchronization Ready
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYNCRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Overflow
            @return boolean value
          */
          __attribute__((always_inline)) bool getOVF() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Overflow
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
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
            Gets Run During Debug
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGRUN() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Run During Debug
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        Frequency Correction
      */
      namespace FREQCORR {
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
            Gets Correction Value
            @return value in range 0..127
          */
          __attribute__((always_inline)) unsigned long getVALUE() volatile {
            return ((raw & (0x7F << 0)) >> 0);
          }
          /**
            Sets Correction Value
            @param value value in range 0..127
          */
          __attribute__((always_inline)) Register& setVALUE(unsigned long value) volatile {
            raw = (raw & ~(0x7F << 0)) | ((((value)) << 0) & (0x7F << 0));
            return *(Register*)this;
          }
          /**
            Gets Correction Sign
            @return boolean value
          */
          __attribute__((always_inline)) bool getSIGN() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Correction Sign
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSIGN(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE2 Clock Value
      */
      namespace CLOCK {
        enum class HOUR {
          // AM when CLKREP in 12-hour
          AM = 0x0,
          // PM when CLKREP in 12-hour
          PM = 0x10,
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
            Gets Second
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getSECOND() volatile {
            return ((raw & (0x3F << 0)) >> 0);
          }
          /**
            Sets Second
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setSECOND(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
            return *(Register*)this;
          }
          /**
            Gets Minute
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getMINUTE() volatile {
            return ((raw & (0x3F << 6)) >> 6);
          }
          /**
            Sets Minute
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setMINUTE(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 6)) | ((((value)) << 6) & (0x3F << 6));
            return *(Register*)this;
          }
          /**
            Gets Hour
            @return enumeration value:
            target::rtc::MODE2::CLOCK::HOUR::AM (0x0) AM when CLKREP in 12-hour
            target::rtc::MODE2::CLOCK::HOUR::PM (0x10) PM when CLKREP in 12-hour
          */
          __attribute__((always_inline)) target::rtc::MODE2::CLOCK::HOUR getHOUR() volatile {
            return static_cast<target::rtc::MODE2::CLOCK::HOUR>((raw & (0x1F << 12)) >> 12);
          }
          /**
            Sets Hour
            @param value enumeration value:
            target::rtc::MODE2::CLOCK::HOUR::AM (0x0) AM when CLKREP in 12-hour
            target::rtc::MODE2::CLOCK::HOUR::PM (0x10) PM when CLKREP in 12-hour
          */
          __attribute__((always_inline)) Register& setHOUR(target::rtc::MODE2::CLOCK::HOUR value) volatile {
            raw = (raw & ~(0x1F << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x1F << 12));
            return *(Register*)this;
          }
          /**
            Gets Day
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getDAY() volatile {
            return ((raw & (0x1F << 17)) >> 17);
          }
          /**
            Sets Day
            @param value value in range 0..31
          */
          __attribute__((always_inline)) Register& setDAY(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 17)) | ((((value)) << 17) & (0x1F << 17));
            return *(Register*)this;
          }
          /**
            Gets Month
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getMONTH() volatile {
            return ((raw & (0xF << 22)) >> 22);
          }
          /**
            Sets Month
            @param value value in range 0..15
          */
          __attribute__((always_inline)) Register& setMONTH(unsigned long value) volatile {
            raw = (raw & ~(0xF << 22)) | ((((value)) << 22) & (0xF << 22));
            return *(Register*)this;
          }
          /**
            Gets Year
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getYEAR() volatile {
            return ((raw & (0x3F << 26)) >> 26);
          }
          /**
            Sets Year
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setYEAR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 26)) | ((((value)) << 26) & (0x3F << 26));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE2 Alarm n Value
      */
      namespace ALARM {
        enum class HOUR {
          // Morning hour
          AM = 0x0,
          // Afternoon hour
          PM = 0x10,
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
            Gets Second
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getSECOND() volatile {
            return ((raw & (0x3F << 0)) >> 0);
          }
          /**
            Sets Second
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setSECOND(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
            return *(Register*)this;
          }
          /**
            Gets Minute
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getMINUTE() volatile {
            return ((raw & (0x3F << 6)) >> 6);
          }
          /**
            Sets Minute
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setMINUTE(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 6)) | ((((value)) << 6) & (0x3F << 6));
            return *(Register*)this;
          }
          /**
            Gets Hour
            @return enumeration value:
            target::rtc::MODE2::ALARM::HOUR::AM (0x0) Morning hour
            target::rtc::MODE2::ALARM::HOUR::PM (0x10) Afternoon hour
          */
          __attribute__((always_inline)) target::rtc::MODE2::ALARM::HOUR getHOUR() volatile {
            return static_cast<target::rtc::MODE2::ALARM::HOUR>((raw & (0x1F << 12)) >> 12);
          }
          /**
            Sets Hour
            @param value enumeration value:
            target::rtc::MODE2::ALARM::HOUR::AM (0x0) Morning hour
            target::rtc::MODE2::ALARM::HOUR::PM (0x10) Afternoon hour
          */
          __attribute__((always_inline)) Register& setHOUR(target::rtc::MODE2::ALARM::HOUR value) volatile {
            raw = (raw & ~(0x1F << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x1F << 12));
            return *(Register*)this;
          }
          /**
            Gets Day
            @return value in range 0..31
          */
          __attribute__((always_inline)) unsigned long getDAY() volatile {
            return ((raw & (0x1F << 17)) >> 17);
          }
          /**
            Sets Day
            @param value value in range 0..31
          */
          __attribute__((always_inline)) Register& setDAY(unsigned long value) volatile {
            raw = (raw & ~(0x1F << 17)) | ((((value)) << 17) & (0x1F << 17));
            return *(Register*)this;
          }
          /**
            Gets Month
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getMONTH() volatile {
            return ((raw & (0xF << 22)) >> 22);
          }
          /**
            Sets Month
            @param value value in range 0..15
          */
          __attribute__((always_inline)) Register& setMONTH(unsigned long value) volatile {
            raw = (raw & ~(0xF << 22)) | ((((value)) << 22) & (0xF << 22));
            return *(Register*)this;
          }
          /**
            Gets Year
            @return value in range 0..63
          */
          __attribute__((always_inline)) unsigned long getYEAR() volatile {
            return ((raw & (0x3F << 26)) >> 26);
          }
          /**
            Sets Year
            @param value value in range 0..63
          */
          __attribute__((always_inline)) Register& setYEAR(unsigned long value) volatile {
            raw = (raw & ~(0x3F << 26)) | ((((value)) << 26) & (0x3F << 26));
            return *(Register*)this;
          }
        };
      };
      
      /**
        MODE2 Alarm n Mask
      */
      namespace MASK {
        enum class SEL {
          // Alarm Disabled
          OFF = 0x0,
          // Match seconds only
          SS = 0x1,
          // Match seconds and minutes only
          MMSS = 0x2,
          // Match seconds, minutes, and hours only
          HHMMSS = 0x3,
          // Match seconds, minutes, hours, and days only
          DDHHMMSS = 0x4,
          // Match seconds, minutes, hours, days, and months only
          MMDDHHMMSS = 0x5,
          // Match seconds, minutes, hours, days, months, and years
          YYMMDDHHMMSS = 0x6,
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
            Gets Alarm Mask Selection
            @return enumeration value:
            target::rtc::MODE2::MASK::SEL::OFF (0x0) Alarm Disabled
            target::rtc::MODE2::MASK::SEL::SS (0x1) Match seconds only
            target::rtc::MODE2::MASK::SEL::MMSS (0x2) Match seconds and minutes only
            target::rtc::MODE2::MASK::SEL::HHMMSS (0x3) Match seconds, minutes, and hours only
            target::rtc::MODE2::MASK::SEL::DDHHMMSS (0x4) Match seconds, minutes, hours, and days only
            target::rtc::MODE2::MASK::SEL::MMDDHHMMSS (0x5) Match seconds, minutes, hours, days, and months only
            target::rtc::MODE2::MASK::SEL::YYMMDDHHMMSS (0x6) Match seconds, minutes, hours, days, months, and years
          */
          __attribute__((always_inline)) target::rtc::MODE2::MASK::SEL getSEL() volatile {
            return static_cast<target::rtc::MODE2::MASK::SEL>((raw & (0x7 << 0)) >> 0);
          }
          /**
            Sets Alarm Mask Selection
            @param value enumeration value:
            target::rtc::MODE2::MASK::SEL::OFF (0x0) Alarm Disabled
            target::rtc::MODE2::MASK::SEL::SS (0x1) Match seconds only
            target::rtc::MODE2::MASK::SEL::MMSS (0x2) Match seconds and minutes only
            target::rtc::MODE2::MASK::SEL::HHMMSS (0x3) Match seconds, minutes, and hours only
            target::rtc::MODE2::MASK::SEL::DDHHMMSS (0x4) Match seconds, minutes, hours, and days only
            target::rtc::MODE2::MASK::SEL::MMDDHHMMSS (0x5) Match seconds, minutes, hours, days, and months only
            target::rtc::MODE2::MASK::SEL::YYMMDDHHMMSS (0x6) Match seconds, minutes, hours, days, months, and years
          */
          __attribute__((always_inline)) Register& setSEL(target::rtc::MODE2::MASK::SEL value) volatile {
            raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
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
              MODE0 Control
            */
            MODE0::CTRL::Register CTRL;
          };
          struct {
            char _space_READREQ[0x2];
            /**
              Read Request
            */
            MODE0::READREQ::Register READREQ;
          };
          struct {
            char _space_EVCTRL[0x4];
            /**
              MODE0 Event Control
            */
            MODE0::EVCTRL::Register EVCTRL;
          };
          struct {
            char _space_INTENCLR[0x6];
            /**
              MODE0 Interrupt Enable Clear
            */
            MODE0::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0x7];
            /**
              MODE0 Interrupt Enable Set
            */
            MODE0::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0x8];
            /**
              MODE0 Interrupt Flag Status and Clear
            */
            MODE0::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0xa];
            /**
              Status
            */
            MODE0::STATUS::Register STATUS;
          };
          struct {
            char _space_DBGCTRL[0xb];
            /**
              Debug Control
            */
            MODE0::DBGCTRL::Register DBGCTRL;
          };
          struct {
            char _space_FREQCORR[0xc];
            /**
              Frequency Correction
            */
            MODE0::FREQCORR::Register FREQCORR;
          };
          struct {
            char _space_COUNT[0x10];
            /**
              MODE0 Counter Value
            */
            MODE0::COUNT::Register COUNT;
          };
          struct {
            char _space_COMP[0x18];
            /**
              MODE0 Compare n Value
            */
            MODE0::COMP::Register COMP;
          };
        } MODE0;
        union {
          struct {
            /**
              MODE1 Control
            */
            MODE1::CTRL::Register CTRL;
          };
          struct {
            char _space_READREQ[0x2];
            /**
              Read Request
            */
            MODE1::READREQ::Register READREQ;
          };
          struct {
            char _space_EVCTRL[0x4];
            /**
              MODE1 Event Control
            */
            MODE1::EVCTRL::Register EVCTRL;
          };
          struct {
            char _space_INTENCLR[0x6];
            /**
              MODE1 Interrupt Enable Clear
            */
            MODE1::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0x7];
            /**
              MODE1 Interrupt Enable Set
            */
            MODE1::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0x8];
            /**
              MODE1 Interrupt Flag Status and Clear
            */
            MODE1::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0xa];
            /**
              Status
            */
            MODE1::STATUS::Register STATUS;
          };
          struct {
            char _space_DBGCTRL[0xb];
            /**
              Debug Control
            */
            MODE1::DBGCTRL::Register DBGCTRL;
          };
          struct {
            char _space_FREQCORR[0xc];
            /**
              Frequency Correction
            */
            MODE1::FREQCORR::Register FREQCORR;
          };
          struct {
            char _space_COUNT[0x10];
            /**
              MODE1 Counter Value
            */
            MODE1::COUNT::Register COUNT;
          };
          struct {
            char _space_PER[0x14];
            /**
              MODE1 Counter Period
            */
            MODE1::PER::Register PER;
          };
          struct {
            char _space_COMP[0x18];
            /**
              MODE1 Compare n Value
            */
            MODE1::COMP::Register COMP[2];
          };
        } MODE1;
        union {
          struct {
            /**
              MODE2 Control
            */
            MODE2::CTRL::Register CTRL;
          };
          struct {
            char _space_READREQ[0x2];
            /**
              Read Request
            */
            MODE2::READREQ::Register READREQ;
          };
          struct {
            char _space_EVCTRL[0x4];
            /**
              MODE2 Event Control
            */
            MODE2::EVCTRL::Register EVCTRL;
          };
          struct {
            char _space_INTENCLR[0x6];
            /**
              MODE2 Interrupt Enable Clear
            */
            MODE2::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0x7];
            /**
              MODE2 Interrupt Enable Set
            */
            MODE2::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0x8];
            /**
              MODE2 Interrupt Flag Status and Clear
            */
            MODE2::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0xa];
            /**
              Status
            */
            MODE2::STATUS::Register STATUS;
          };
          struct {
            char _space_DBGCTRL[0xb];
            /**
              Debug Control
            */
            MODE2::DBGCTRL::Register DBGCTRL;
          };
          struct {
            char _space_FREQCORR[0xc];
            /**
              Frequency Correction
            */
            MODE2::FREQCORR::Register FREQCORR;
          };
          struct {
            char _space_CLOCK[0x10];
            /**
              MODE2 Clock Value
            */
            MODE2::CLOCK::Register CLOCK;
          };
          struct {
            char _space_ALARM[0x18];
            /**
              MODE2 Alarm n Value
            */
            MODE2::ALARM::Register ALARM;
          };
          struct {
            char _space_MASK[0x1c];
            /**
              MODE2 Alarm n Mask
            */
            MODE2::MASK::Register MASK;
          };
        } MODE2;
      };
    };
  }
  
  extern volatile rtc::Peripheral RTC;
}