namespace target {
  namespace tcc {
    
    /**
      Control A
    */
    namespace CTRLA {
      enum class RESOLUTION {
        // Dithering is disabled
        NONE = 0x0,
        // Dithering is done every 16 PWM frames
        DITH4 = 0x1,
        // Dithering is done every 32 PWM frames
        DITH5 = 0x2,
        // Dithering is done every 64 PWM frames
        DITH6 = 0x3,
      };
      
      enum class PRESCALER {
        // No division
        DIV1 = 0x0,
        // Divide by 2
        DIV2 = 0x1,
        // Divide by 4
        DIV4 = 0x2,
        // Divide by 8
        DIV8 = 0x3,
        // Divide by 16
        DIV16 = 0x4,
        // Divide by 64
        DIV64 = 0x5,
        // Divide by 256
        DIV256 = 0x6,
        // Divide by 1024
        DIV1024 = 0x7,
      };
      
      enum class PRESCSYNC {
        // Reload or reset counter on next GCLK
        GCLK = 0x0,
        // Reload or reset counter on next prescaler clock
        PRESC = 0x1,
        // Reload or reset counter on next GCLK and reset prescaler counter
        RESYNC = 0x2,
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
          Gets Capture Channel 0 Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getCPTEN(int index) volatile {
          return ((raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0)));
        }
        /**
          Sets Capture Channel 0 Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCPTEN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((((value)) << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
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
          Gets Enhanced Resolution
          @return enumeration value:
          target::tcc::CTRLA::RESOLUTION::NONE (0x0) Dithering is disabled
          target::tcc::CTRLA::RESOLUTION::DITH4 (0x1) Dithering is done every 16 PWM frames
          target::tcc::CTRLA::RESOLUTION::DITH5 (0x2) Dithering is done every 32 PWM frames
          target::tcc::CTRLA::RESOLUTION::DITH6 (0x3) Dithering is done every 64 PWM frames
        */
        __attribute__((always_inline)) target::tcc::CTRLA::RESOLUTION getRESOLUTION() volatile {
          return static_cast<target::tcc::CTRLA::RESOLUTION>((raw & (0x3 << 5)) >> 5);
        }
        /**
          Sets Enhanced Resolution
          @param value enumeration value:
          target::tcc::CTRLA::RESOLUTION::NONE (0x0) Dithering is disabled
          target::tcc::CTRLA::RESOLUTION::DITH4 (0x1) Dithering is done every 16 PWM frames
          target::tcc::CTRLA::RESOLUTION::DITH5 (0x2) Dithering is done every 32 PWM frames
          target::tcc::CTRLA::RESOLUTION::DITH6 (0x3) Dithering is done every 64 PWM frames
        */
        __attribute__((always_inline)) Register& setRESOLUTION(target::tcc::CTRLA::RESOLUTION value) volatile {
          raw = (raw & ~(0x3 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x3 << 5));
          return *(Register*)this;
        }
        /**
          Gets Prescaler
          @return enumeration value:
          target::tcc::CTRLA::PRESCALER::DIV1 (0x0) No division
          target::tcc::CTRLA::PRESCALER::DIV2 (0x1) Divide by 2
          target::tcc::CTRLA::PRESCALER::DIV4 (0x2) Divide by 4
          target::tcc::CTRLA::PRESCALER::DIV8 (0x3) Divide by 8
          target::tcc::CTRLA::PRESCALER::DIV16 (0x4) Divide by 16
          target::tcc::CTRLA::PRESCALER::DIV64 (0x5) Divide by 64
          target::tcc::CTRLA::PRESCALER::DIV256 (0x6) Divide by 256
          target::tcc::CTRLA::PRESCALER::DIV1024 (0x7) Divide by 1024
        */
        __attribute__((always_inline)) target::tcc::CTRLA::PRESCALER getPRESCALER() volatile {
          return static_cast<target::tcc::CTRLA::PRESCALER>((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Prescaler
          @param value enumeration value:
          target::tcc::CTRLA::PRESCALER::DIV1 (0x0) No division
          target::tcc::CTRLA::PRESCALER::DIV2 (0x1) Divide by 2
          target::tcc::CTRLA::PRESCALER::DIV4 (0x2) Divide by 4
          target::tcc::CTRLA::PRESCALER::DIV8 (0x3) Divide by 8
          target::tcc::CTRLA::PRESCALER::DIV16 (0x4) Divide by 16
          target::tcc::CTRLA::PRESCALER::DIV64 (0x5) Divide by 64
          target::tcc::CTRLA::PRESCALER::DIV256 (0x6) Divide by 256
          target::tcc::CTRLA::PRESCALER::DIV1024 (0x7) Divide by 1024
        */
        __attribute__((always_inline)) Register& setPRESCALER(target::tcc::CTRLA::PRESCALER value) volatile {
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
          Gets Prescaler and Counter Synchronization Selection
          @return enumeration value:
          target::tcc::CTRLA::PRESCSYNC::GCLK (0x0) Reload or reset counter on next GCLK
          target::tcc::CTRLA::PRESCSYNC::PRESC (0x1) Reload or reset counter on next prescaler clock
          target::tcc::CTRLA::PRESCSYNC::RESYNC (0x2) Reload or reset counter on next GCLK and reset prescaler counter
        */
        __attribute__((always_inline)) target::tcc::CTRLA::PRESCSYNC getPRESCSYNC() volatile {
          return static_cast<target::tcc::CTRLA::PRESCSYNC>((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Prescaler and Counter Synchronization Selection
          @param value enumeration value:
          target::tcc::CTRLA::PRESCSYNC::GCLK (0x0) Reload or reset counter on next GCLK
          target::tcc::CTRLA::PRESCSYNC::PRESC (0x1) Reload or reset counter on next prescaler clock
          target::tcc::CTRLA::PRESCSYNC::RESYNC (0x2) Reload or reset counter on next GCLK and reset prescaler counter
        */
        __attribute__((always_inline)) Register& setPRESCSYNC(target::tcc::CTRLA::PRESCSYNC value) volatile {
          raw = (raw & ~(0x3 << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Auto Lock
          @return boolean value
        */
        __attribute__((always_inline)) bool getALOCK() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Auto Lock
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control B Clear
    */
    namespace CTRLBCLR {
      enum class IDXCMD {
        // Command disabled: Index toggles between cycles A and B
        DISABLE = 0x0,
        // Set index: cycle B will be forced in the next cycle
        SET = 0x1,
        // Clear index: cycle A will be forced in the next cycle
        CLEAR = 0x2,
        // Hold index: the next cycle will be the same as the current cycle
        HOLD = 0x3,
      };
      
      enum class CMD {
        // No action
        NONE = 0x0,
        // Clear start, restart or retrigger
        RETRIGGER = 0x1,
        // Force stop
        STOP = 0x2,
        // Force update or double buffered registers
        UPDATE = 0x3,
        // Force COUNT read synchronization
        READSYNC = 0x4,
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
          Gets Lock Update
          @return boolean value
        */
        __attribute__((always_inline)) bool getLUPD() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Lock Update
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLUPD(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
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
          Gets Ramp Index Command
          @return enumeration value:
          target::tcc::CTRLBCLR::IDXCMD::DISABLE (0x0) Command disabled: Index toggles between cycles A and B
          target::tcc::CTRLBCLR::IDXCMD::SET (0x1) Set index: cycle B will be forced in the next cycle
          target::tcc::CTRLBCLR::IDXCMD::CLEAR (0x2) Clear index: cycle A will be forced in the next cycle
          target::tcc::CTRLBCLR::IDXCMD::HOLD (0x3) Hold index: the next cycle will be the same as the current cycle
        */
        __attribute__((always_inline)) target::tcc::CTRLBCLR::IDXCMD getIDXCMD() volatile {
          return static_cast<target::tcc::CTRLBCLR::IDXCMD>((raw & (0x3 << 3)) >> 3);
        }
        /**
          Sets Ramp Index Command
          @param value enumeration value:
          target::tcc::CTRLBCLR::IDXCMD::DISABLE (0x0) Command disabled: Index toggles between cycles A and B
          target::tcc::CTRLBCLR::IDXCMD::SET (0x1) Set index: cycle B will be forced in the next cycle
          target::tcc::CTRLBCLR::IDXCMD::CLEAR (0x2) Clear index: cycle A will be forced in the next cycle
          target::tcc::CTRLBCLR::IDXCMD::HOLD (0x3) Hold index: the next cycle will be the same as the current cycle
        */
        __attribute__((always_inline)) Register& setIDXCMD(target::tcc::CTRLBCLR::IDXCMD value) volatile {
          raw = (raw & ~(0x3 << 3)) | (((static_cast<unsigned long>(value)) << 3) & (0x3 << 3));
          return *(Register*)this;
        }
        /**
          Gets TCC Command
          @return enumeration value:
          target::tcc::CTRLBCLR::CMD::NONE (0x0) No action
          target::tcc::CTRLBCLR::CMD::RETRIGGER (0x1) Clear start, restart or retrigger
          target::tcc::CTRLBCLR::CMD::STOP (0x2) Force stop
          target::tcc::CTRLBCLR::CMD::UPDATE (0x3) Force update or double buffered registers
          target::tcc::CTRLBCLR::CMD::READSYNC (0x4) Force COUNT read synchronization
        */
        __attribute__((always_inline)) target::tcc::CTRLBCLR::CMD getCMD() volatile {
          return static_cast<target::tcc::CTRLBCLR::CMD>((raw & (0x7 << 5)) >> 5);
        }
        /**
          Sets TCC Command
          @param value enumeration value:
          target::tcc::CTRLBCLR::CMD::NONE (0x0) No action
          target::tcc::CTRLBCLR::CMD::RETRIGGER (0x1) Clear start, restart or retrigger
          target::tcc::CTRLBCLR::CMD::STOP (0x2) Force stop
          target::tcc::CTRLBCLR::CMD::UPDATE (0x3) Force update or double buffered registers
          target::tcc::CTRLBCLR::CMD::READSYNC (0x4) Force COUNT read synchronization
        */
        __attribute__((always_inline)) Register& setCMD(target::tcc::CTRLBCLR::CMD value) volatile {
          raw = (raw & ~(0x7 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x7 << 5));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control B Set
    */
    namespace CTRLBSET {
      enum class IDXCMD {
        // Command disabled: Index toggles between cycles A and B
        DISABLE = 0x0,
        // Set index: cycle B will be forced in the next cycle
        SET = 0x1,
        // Clear index: cycle A will be forced in the next cycle
        CLEAR = 0x2,
        // Hold index: the next cycle will be the same as the current cycle
        HOLD = 0x3,
      };
      
      enum class CMD {
        // No action
        NONE = 0x0,
        // Clear start, restart or retrigger
        RETRIGGER = 0x1,
        // Force stop
        STOP = 0x2,
        // Force update or double buffered registers
        UPDATE = 0x3,
        // Force COUNT read synchronization
        READSYNC = 0x4,
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
          Gets Lock Update
          @return boolean value
        */
        __attribute__((always_inline)) bool getLUPD() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Lock Update
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLUPD(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
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
          Gets Ramp Index Command
          @return enumeration value:
          target::tcc::CTRLBSET::IDXCMD::DISABLE (0x0) Command disabled: Index toggles between cycles A and B
          target::tcc::CTRLBSET::IDXCMD::SET (0x1) Set index: cycle B will be forced in the next cycle
          target::tcc::CTRLBSET::IDXCMD::CLEAR (0x2) Clear index: cycle A will be forced in the next cycle
          target::tcc::CTRLBSET::IDXCMD::HOLD (0x3) Hold index: the next cycle will be the same as the current cycle
        */
        __attribute__((always_inline)) target::tcc::CTRLBSET::IDXCMD getIDXCMD() volatile {
          return static_cast<target::tcc::CTRLBSET::IDXCMD>((raw & (0x3 << 3)) >> 3);
        }
        /**
          Sets Ramp Index Command
          @param value enumeration value:
          target::tcc::CTRLBSET::IDXCMD::DISABLE (0x0) Command disabled: Index toggles between cycles A and B
          target::tcc::CTRLBSET::IDXCMD::SET (0x1) Set index: cycle B will be forced in the next cycle
          target::tcc::CTRLBSET::IDXCMD::CLEAR (0x2) Clear index: cycle A will be forced in the next cycle
          target::tcc::CTRLBSET::IDXCMD::HOLD (0x3) Hold index: the next cycle will be the same as the current cycle
        */
        __attribute__((always_inline)) Register& setIDXCMD(target::tcc::CTRLBSET::IDXCMD value) volatile {
          raw = (raw & ~(0x3 << 3)) | (((static_cast<unsigned long>(value)) << 3) & (0x3 << 3));
          return *(Register*)this;
        }
        /**
          Gets TCC Command
          @return enumeration value:
          target::tcc::CTRLBSET::CMD::NONE (0x0) No action
          target::tcc::CTRLBSET::CMD::RETRIGGER (0x1) Clear start, restart or retrigger
          target::tcc::CTRLBSET::CMD::STOP (0x2) Force stop
          target::tcc::CTRLBSET::CMD::UPDATE (0x3) Force update or double buffered registers
          target::tcc::CTRLBSET::CMD::READSYNC (0x4) Force COUNT read synchronization
        */
        __attribute__((always_inline)) target::tcc::CTRLBSET::CMD getCMD() volatile {
          return static_cast<target::tcc::CTRLBSET::CMD>((raw & (0x7 << 5)) >> 5);
        }
        /**
          Sets TCC Command
          @param value enumeration value:
          target::tcc::CTRLBSET::CMD::NONE (0x0) No action
          target::tcc::CTRLBSET::CMD::RETRIGGER (0x1) Clear start, restart or retrigger
          target::tcc::CTRLBSET::CMD::STOP (0x2) Force stop
          target::tcc::CTRLBSET::CMD::UPDATE (0x3) Force update or double buffered registers
          target::tcc::CTRLBSET::CMD::READSYNC (0x4) Force COUNT read synchronization
        */
        __attribute__((always_inline)) Register& setCMD(target::tcc::CTRLBSET::CMD value) volatile {
          raw = (raw & ~(0x7 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x7 << 5));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Synchronization Busy
    */
    namespace SYNCBUSY {
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
          Gets Compare Channel 0 Busy
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Compare Channel 0 Busy
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Compare Channel Buffer 0 Busy
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getCCB(int index) volatile {
          return ((raw & (0x1 << (19 + 1 * (index - 0)))) >> (19 + 1 * (index - 0)));
        }
        /**
          Sets Compare Channel Buffer 0 Busy
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCCB(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (19 + 1 * (index - 0)))) | ((((value)) << (19 + 1 * (index - 0))) & (0x1 << (19 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Swrst Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWRST() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Swrst Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Enable Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Enable Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Ctrlb Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTRLB() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Ctrlb Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTRLB(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Status Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTATUS() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Status Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTATUS(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Count Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOUNT() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Count Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOUNT(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Pattern Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getPATT() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Pattern Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPATT(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Wave Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getWAVE() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Wave Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWAVE(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Period busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getPER() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Period busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPER(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Pattern Buffer Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getPATTB() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Pattern Buffer Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPATTB(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Wave Buffer Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getWAVEB() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets Wave Buffer Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWAVEB(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets Period Buffer Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getPERB() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Period Buffer Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPERB(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Recoverable Fault A Configuration
    */
    namespace FCTRLA {
      enum class SRC {
        // Fault input disabled
        DISABLE = 0x0,
        // MCEx (x=0,1) event input
        ENABLE = 0x1,
        // Inverted MCEx (x=0,1) event input
        INVERT = 0x2,
        // Alternate fault (A or B) state at the end of the previous period
        ALTFAULT = 0x3,
      };
      
      enum class BLANK {
        // Blanking applied from start of ramp
        START = 0x0,
        // Blanking applied from rising edge of the output waveform
        RISE = 0x1,
        // Blanking applied from falling edge of the output waveform
        FALL = 0x2,
        // Blanking applied from each toggle of the output waveform
        BOTH = 0x3,
      };
      
      enum class HALT {
        // Halt action disabled
        DISABLE = 0x0,
        // Hardware halt action
        HW = 0x1,
        // Software halt action
        SW = 0x2,
        // Non-recoverable fault
        NR = 0x3,
      };
      
      enum class CHSEL {
        // Capture value stored in channel 0
        CC0 = 0x0,
        // Capture value stored in channel 1
        CC1 = 0x1,
        // Capture value stored in channel 2
        CC2 = 0x2,
        // Capture value stored in channel 3
        CC3 = 0x3,
      };
      
      enum class CAPTURE {
        // No capture
        DISABLE = 0x0,
        // Capture on fault
        CAPT = 0x1,
        // Minimum capture
        CAPTMIN = 0x2,
        // Maximum capture
        CAPTMAX = 0x3,
        // Minimum local detection
        LOCMIN = 0x4,
        // Maximum local detection
        LOCMAX = 0x5,
        // Minimum and maximum local detection
        DERIV0 = 0x6,
        // Capture with ramp index as MSB value
        CAPTMARK = 0x7,
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
          Gets Fault A Source
          @return enumeration value:
          target::tcc::FCTRLA::SRC::DISABLE (0x0) Fault input disabled
          target::tcc::FCTRLA::SRC::ENABLE (0x1) MCEx (x=0,1) event input
          target::tcc::FCTRLA::SRC::INVERT (0x2) Inverted MCEx (x=0,1) event input
          target::tcc::FCTRLA::SRC::ALTFAULT (0x3) Alternate fault (A or B) state at the end of the previous period
        */
        __attribute__((always_inline)) target::tcc::FCTRLA::SRC getSRC() volatile {
          return static_cast<target::tcc::FCTRLA::SRC>((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Fault A Source
          @param value enumeration value:
          target::tcc::FCTRLA::SRC::DISABLE (0x0) Fault input disabled
          target::tcc::FCTRLA::SRC::ENABLE (0x1) MCEx (x=0,1) event input
          target::tcc::FCTRLA::SRC::INVERT (0x2) Inverted MCEx (x=0,1) event input
          target::tcc::FCTRLA::SRC::ALTFAULT (0x3) Alternate fault (A or B) state at the end of the previous period
        */
        __attribute__((always_inline)) Register& setSRC(target::tcc::FCTRLA::SRC value) volatile {
          raw = (raw & ~(0x3 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets Fault A Keeper
          @return boolean value
        */
        __attribute__((always_inline)) bool getKEEP() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Fault A Keeper
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setKEEP(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Fault A Qualification
          @return boolean value
        */
        __attribute__((always_inline)) bool getQUAL() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Fault A Qualification
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setQUAL(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Fault A Blanking Mode
          @return enumeration value:
          target::tcc::FCTRLA::BLANK::START (0x0) Blanking applied from start of ramp
          target::tcc::FCTRLA::BLANK::RISE (0x1) Blanking applied from rising edge of the output waveform
          target::tcc::FCTRLA::BLANK::FALL (0x2) Blanking applied from falling edge of the output waveform
          target::tcc::FCTRLA::BLANK::BOTH (0x3) Blanking applied from each toggle of the output waveform
        */
        __attribute__((always_inline)) target::tcc::FCTRLA::BLANK getBLANK() volatile {
          return static_cast<target::tcc::FCTRLA::BLANK>((raw & (0x3 << 5)) >> 5);
        }
        /**
          Sets Fault A Blanking Mode
          @param value enumeration value:
          target::tcc::FCTRLA::BLANK::START (0x0) Blanking applied from start of ramp
          target::tcc::FCTRLA::BLANK::RISE (0x1) Blanking applied from rising edge of the output waveform
          target::tcc::FCTRLA::BLANK::FALL (0x2) Blanking applied from falling edge of the output waveform
          target::tcc::FCTRLA::BLANK::BOTH (0x3) Blanking applied from each toggle of the output waveform
        */
        __attribute__((always_inline)) Register& setBLANK(target::tcc::FCTRLA::BLANK value) volatile {
          raw = (raw & ~(0x3 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x3 << 5));
          return *(Register*)this;
        }
        /**
          Gets Fault A Restart
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESTART() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Fault A Restart
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESTART(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Fault A Halt Mode
          @return enumeration value:
          target::tcc::FCTRLA::HALT::DISABLE (0x0) Halt action disabled
          target::tcc::FCTRLA::HALT::HW (0x1) Hardware halt action
          target::tcc::FCTRLA::HALT::SW (0x2) Software halt action
          target::tcc::FCTRLA::HALT::NR (0x3) Non-recoverable fault
        */
        __attribute__((always_inline)) target::tcc::FCTRLA::HALT getHALT() volatile {
          return static_cast<target::tcc::FCTRLA::HALT>((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Fault A Halt Mode
          @param value enumeration value:
          target::tcc::FCTRLA::HALT::DISABLE (0x0) Halt action disabled
          target::tcc::FCTRLA::HALT::HW (0x1) Hardware halt action
          target::tcc::FCTRLA::HALT::SW (0x2) Software halt action
          target::tcc::FCTRLA::HALT::NR (0x3) Non-recoverable fault
        */
        __attribute__((always_inline)) Register& setHALT(target::tcc::FCTRLA::HALT value) volatile {
          raw = (raw & ~(0x3 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Fault A Capture Channel
          @return enumeration value:
          target::tcc::FCTRLA::CHSEL::CC0 (0x0) Capture value stored in channel 0
          target::tcc::FCTRLA::CHSEL::CC1 (0x1) Capture value stored in channel 1
          target::tcc::FCTRLA::CHSEL::CC2 (0x2) Capture value stored in channel 2
          target::tcc::FCTRLA::CHSEL::CC3 (0x3) Capture value stored in channel 3
        */
        __attribute__((always_inline)) target::tcc::FCTRLA::CHSEL getCHSEL() volatile {
          return static_cast<target::tcc::FCTRLA::CHSEL>((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Fault A Capture Channel
          @param value enumeration value:
          target::tcc::FCTRLA::CHSEL::CC0 (0x0) Capture value stored in channel 0
          target::tcc::FCTRLA::CHSEL::CC1 (0x1) Capture value stored in channel 1
          target::tcc::FCTRLA::CHSEL::CC2 (0x2) Capture value stored in channel 2
          target::tcc::FCTRLA::CHSEL::CC3 (0x3) Capture value stored in channel 3
        */
        __attribute__((always_inline)) Register& setCHSEL(target::tcc::FCTRLA::CHSEL value) volatile {
          raw = (raw & ~(0x3 << 10)) | (((static_cast<unsigned long>(value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Fault A Capture Action
          @return enumeration value:
          target::tcc::FCTRLA::CAPTURE::DISABLE (0x0) No capture
          target::tcc::FCTRLA::CAPTURE::CAPT (0x1) Capture on fault
          target::tcc::FCTRLA::CAPTURE::CAPTMIN (0x2) Minimum capture
          target::tcc::FCTRLA::CAPTURE::CAPTMAX (0x3) Maximum capture
          target::tcc::FCTRLA::CAPTURE::LOCMIN (0x4) Minimum local detection
          target::tcc::FCTRLA::CAPTURE::LOCMAX (0x5) Maximum local detection
          target::tcc::FCTRLA::CAPTURE::DERIV0 (0x6) Minimum and maximum local detection
          target::tcc::FCTRLA::CAPTURE::CAPTMARK (0x7) Capture with ramp index as MSB value
        */
        __attribute__((always_inline)) target::tcc::FCTRLA::CAPTURE getCAPTURE() volatile {
          return static_cast<target::tcc::FCTRLA::CAPTURE>((raw & (0x7 << 12)) >> 12);
        }
        /**
          Sets Fault A Capture Action
          @param value enumeration value:
          target::tcc::FCTRLA::CAPTURE::DISABLE (0x0) No capture
          target::tcc::FCTRLA::CAPTURE::CAPT (0x1) Capture on fault
          target::tcc::FCTRLA::CAPTURE::CAPTMIN (0x2) Minimum capture
          target::tcc::FCTRLA::CAPTURE::CAPTMAX (0x3) Maximum capture
          target::tcc::FCTRLA::CAPTURE::LOCMIN (0x4) Minimum local detection
          target::tcc::FCTRLA::CAPTURE::LOCMAX (0x5) Maximum local detection
          target::tcc::FCTRLA::CAPTURE::DERIV0 (0x6) Minimum and maximum local detection
          target::tcc::FCTRLA::CAPTURE::CAPTMARK (0x7) Capture with ramp index as MSB value
        */
        __attribute__((always_inline)) Register& setCAPTURE(target::tcc::FCTRLA::CAPTURE value) volatile {
          raw = (raw & ~(0x7 << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x7 << 12));
          return *(Register*)this;
        }
        /**
          Gets Fault A Blanking Prescaler
          @return boolean value
        */
        __attribute__((always_inline)) bool getBLANKPRESC() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Fault A Blanking Prescaler
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBLANKPRESC(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Fault A Blanking Time
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getBLANKVAL() volatile {
          return ((raw & (0xFF << 16)) >> 16);
        }
        /**
          Sets Fault A Blanking Time
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setBLANKVAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((((value)) << 16) & (0xFF << 16));
          return *(Register*)this;
        }
        /**
          Gets Fault A Filter Value
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getFILTERVAL() volatile {
          return ((raw & (0xF << 24)) >> 24);
        }
        /**
          Sets Fault A Filter Value
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setFILTERVAL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((((value)) << 24) & (0xF << 24));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Recoverable Fault B Configuration
    */
    namespace FCTRLB {
      enum class SRC {
        // Fault input disabled
        DISABLE = 0x0,
        // MCEx (x=0,1) event input
        ENABLE = 0x1,
        // Inverted MCEx (x=0,1) event input
        INVERT = 0x2,
        // Alternate fault (A or B) state at the end of the previous period
        ALTFAULT = 0x3,
      };
      
      enum class BLANK {
        // Blanking applied from start of ramp
        START = 0x0,
        // Blanking applied from rising edge of the output waveform
        RISE = 0x1,
        // Blanking applied from falling edge of the output waveform
        FALL = 0x2,
        // Blanking applied from each toggle of the output waveform
        BOTH = 0x3,
      };
      
      enum class HALT {
        // Halt action disabled
        DISABLE = 0x0,
        // Hardware halt action
        HW = 0x1,
        // Software halt action
        SW = 0x2,
        // Non-recoverable fault
        NR = 0x3,
      };
      
      enum class CHSEL {
        // Capture value stored in channel 0
        CC0 = 0x0,
        // Capture value stored in channel 1
        CC1 = 0x1,
        // Capture value stored in channel 2
        CC2 = 0x2,
        // Capture value stored in channel 3
        CC3 = 0x3,
      };
      
      enum class CAPTURE {
        // No capture
        DISABLE = 0x0,
        // Capture on fault
        CAPT = 0x1,
        // Minimum capture
        CAPTMIN = 0x2,
        // Maximum capture
        CAPTMAX = 0x3,
        // Minimum local detection
        LOCMIN = 0x4,
        // Maximum local detection
        LOCMAX = 0x5,
        // Minimum and maximum local detection
        DERIV0 = 0x6,
        // Capture with ramp index as MSB value
        CAPTMARK = 0x7,
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
          Gets Fault B Source
          @return enumeration value:
          target::tcc::FCTRLB::SRC::DISABLE (0x0) Fault input disabled
          target::tcc::FCTRLB::SRC::ENABLE (0x1) MCEx (x=0,1) event input
          target::tcc::FCTRLB::SRC::INVERT (0x2) Inverted MCEx (x=0,1) event input
          target::tcc::FCTRLB::SRC::ALTFAULT (0x3) Alternate fault (A or B) state at the end of the previous period
        */
        __attribute__((always_inline)) target::tcc::FCTRLB::SRC getSRC() volatile {
          return static_cast<target::tcc::FCTRLB::SRC>((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Fault B Source
          @param value enumeration value:
          target::tcc::FCTRLB::SRC::DISABLE (0x0) Fault input disabled
          target::tcc::FCTRLB::SRC::ENABLE (0x1) MCEx (x=0,1) event input
          target::tcc::FCTRLB::SRC::INVERT (0x2) Inverted MCEx (x=0,1) event input
          target::tcc::FCTRLB::SRC::ALTFAULT (0x3) Alternate fault (A or B) state at the end of the previous period
        */
        __attribute__((always_inline)) Register& setSRC(target::tcc::FCTRLB::SRC value) volatile {
          raw = (raw & ~(0x3 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets Fault B Keeper
          @return boolean value
        */
        __attribute__((always_inline)) bool getKEEP() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Fault B Keeper
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setKEEP(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Fault B Qualification
          @return boolean value
        */
        __attribute__((always_inline)) bool getQUAL() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Fault B Qualification
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setQUAL(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Fault B Blanking Mode
          @return enumeration value:
          target::tcc::FCTRLB::BLANK::START (0x0) Blanking applied from start of ramp
          target::tcc::FCTRLB::BLANK::RISE (0x1) Blanking applied from rising edge of the output waveform
          target::tcc::FCTRLB::BLANK::FALL (0x2) Blanking applied from falling edge of the output waveform
          target::tcc::FCTRLB::BLANK::BOTH (0x3) Blanking applied from each toggle of the output waveform
        */
        __attribute__((always_inline)) target::tcc::FCTRLB::BLANK getBLANK() volatile {
          return static_cast<target::tcc::FCTRLB::BLANK>((raw & (0x3 << 5)) >> 5);
        }
        /**
          Sets Fault B Blanking Mode
          @param value enumeration value:
          target::tcc::FCTRLB::BLANK::START (0x0) Blanking applied from start of ramp
          target::tcc::FCTRLB::BLANK::RISE (0x1) Blanking applied from rising edge of the output waveform
          target::tcc::FCTRLB::BLANK::FALL (0x2) Blanking applied from falling edge of the output waveform
          target::tcc::FCTRLB::BLANK::BOTH (0x3) Blanking applied from each toggle of the output waveform
        */
        __attribute__((always_inline)) Register& setBLANK(target::tcc::FCTRLB::BLANK value) volatile {
          raw = (raw & ~(0x3 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x3 << 5));
          return *(Register*)this;
        }
        /**
          Gets Fault B Restart
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESTART() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Fault B Restart
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESTART(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Fault B Halt Mode
          @return enumeration value:
          target::tcc::FCTRLB::HALT::DISABLE (0x0) Halt action disabled
          target::tcc::FCTRLB::HALT::HW (0x1) Hardware halt action
          target::tcc::FCTRLB::HALT::SW (0x2) Software halt action
          target::tcc::FCTRLB::HALT::NR (0x3) Non-recoverable fault
        */
        __attribute__((always_inline)) target::tcc::FCTRLB::HALT getHALT() volatile {
          return static_cast<target::tcc::FCTRLB::HALT>((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Fault B Halt Mode
          @param value enumeration value:
          target::tcc::FCTRLB::HALT::DISABLE (0x0) Halt action disabled
          target::tcc::FCTRLB::HALT::HW (0x1) Hardware halt action
          target::tcc::FCTRLB::HALT::SW (0x2) Software halt action
          target::tcc::FCTRLB::HALT::NR (0x3) Non-recoverable fault
        */
        __attribute__((always_inline)) Register& setHALT(target::tcc::FCTRLB::HALT value) volatile {
          raw = (raw & ~(0x3 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Fault B Capture Channel
          @return enumeration value:
          target::tcc::FCTRLB::CHSEL::CC0 (0x0) Capture value stored in channel 0
          target::tcc::FCTRLB::CHSEL::CC1 (0x1) Capture value stored in channel 1
          target::tcc::FCTRLB::CHSEL::CC2 (0x2) Capture value stored in channel 2
          target::tcc::FCTRLB::CHSEL::CC3 (0x3) Capture value stored in channel 3
        */
        __attribute__((always_inline)) target::tcc::FCTRLB::CHSEL getCHSEL() volatile {
          return static_cast<target::tcc::FCTRLB::CHSEL>((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Fault B Capture Channel
          @param value enumeration value:
          target::tcc::FCTRLB::CHSEL::CC0 (0x0) Capture value stored in channel 0
          target::tcc::FCTRLB::CHSEL::CC1 (0x1) Capture value stored in channel 1
          target::tcc::FCTRLB::CHSEL::CC2 (0x2) Capture value stored in channel 2
          target::tcc::FCTRLB::CHSEL::CC3 (0x3) Capture value stored in channel 3
        */
        __attribute__((always_inline)) Register& setCHSEL(target::tcc::FCTRLB::CHSEL value) volatile {
          raw = (raw & ~(0x3 << 10)) | (((static_cast<unsigned long>(value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Fault B Capture Action
          @return enumeration value:
          target::tcc::FCTRLB::CAPTURE::DISABLE (0x0) No capture
          target::tcc::FCTRLB::CAPTURE::CAPT (0x1) Capture on fault
          target::tcc::FCTRLB::CAPTURE::CAPTMIN (0x2) Minimum capture
          target::tcc::FCTRLB::CAPTURE::CAPTMAX (0x3) Maximum capture
          target::tcc::FCTRLB::CAPTURE::LOCMIN (0x4) Minimum local detection
          target::tcc::FCTRLB::CAPTURE::LOCMAX (0x5) Maximum local detection
          target::tcc::FCTRLB::CAPTURE::DERIV0 (0x6) Minimum and maximum local detection
          target::tcc::FCTRLB::CAPTURE::CAPTMARK (0x7) Capture with ramp index as MSB value
        */
        __attribute__((always_inline)) target::tcc::FCTRLB::CAPTURE getCAPTURE() volatile {
          return static_cast<target::tcc::FCTRLB::CAPTURE>((raw & (0x7 << 12)) >> 12);
        }
        /**
          Sets Fault B Capture Action
          @param value enumeration value:
          target::tcc::FCTRLB::CAPTURE::DISABLE (0x0) No capture
          target::tcc::FCTRLB::CAPTURE::CAPT (0x1) Capture on fault
          target::tcc::FCTRLB::CAPTURE::CAPTMIN (0x2) Minimum capture
          target::tcc::FCTRLB::CAPTURE::CAPTMAX (0x3) Maximum capture
          target::tcc::FCTRLB::CAPTURE::LOCMIN (0x4) Minimum local detection
          target::tcc::FCTRLB::CAPTURE::LOCMAX (0x5) Maximum local detection
          target::tcc::FCTRLB::CAPTURE::DERIV0 (0x6) Minimum and maximum local detection
          target::tcc::FCTRLB::CAPTURE::CAPTMARK (0x7) Capture with ramp index as MSB value
        */
        __attribute__((always_inline)) Register& setCAPTURE(target::tcc::FCTRLB::CAPTURE value) volatile {
          raw = (raw & ~(0x7 << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x7 << 12));
          return *(Register*)this;
        }
        /**
          Gets Fault B Blanking Prescaler
          @return boolean value
        */
        __attribute__((always_inline)) bool getBLANKPRESC() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Fault B Blanking Prescaler
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBLANKPRESC(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Fault B Blanking Time
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getBLANKVAL() volatile {
          return ((raw & (0xFF << 16)) >> 16);
        }
        /**
          Sets Fault B Blanking Time
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setBLANKVAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((((value)) << 16) & (0xFF << 16));
          return *(Register*)this;
        }
        /**
          Gets Fault B Filter Value
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getFILTERVAL() volatile {
          return ((raw & (0xF << 24)) >> 24);
        }
        /**
          Sets Fault B Filter Value
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setFILTERVAL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((((value)) << 24) & (0xF << 24));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Waveform Extension Configuration
    */
    namespace WEXCTRL {
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
          Gets Dead-time Insertion Generator 0 Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTIEN(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Dead-time Insertion Generator 0 Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTIEN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Output Matrix
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOTMX() volatile {
          return ((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Output Matrix
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setOTMX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((((value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets Dead-time Low Side Outputs Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDTLS() volatile {
          return ((raw & (0xFF << 16)) >> 16);
        }
        /**
          Sets Dead-time Low Side Outputs Value
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setDTLS(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((((value)) << 16) & (0xFF << 16));
          return *(Register*)this;
        }
        /**
          Gets Dead-time High Side Outputs Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDTHS() volatile {
          return ((raw & (0xFF << 24)) >> 24);
        }
        /**
          Sets Dead-time High Side Outputs Value
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setDTHS(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((((value)) << 24) & (0xFF << 24));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Driver Control
    */
    namespace DRVCTRL {
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
          Gets Non-Recoverable State 0 Output Enable
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getNRE(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Non-Recoverable State 0 Output Enable
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNRE(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Non-Recoverable State 0 Output Value
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getNRV(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Non-Recoverable State 0 Output Value
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNRV(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Output Waveform 0 Inversion
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getINVEN(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Output Waveform 0 Inversion
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setINVEN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Non-Recoverable Fault Input 0 Filter Value
          @param index in range 0..1
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getFILTERVAL(int index) volatile {
          return ((raw & (0xF << (24 + 4 * (index - 0)))) >> (24 + 4 * (index - 0)));
        }
        /**
          Sets Non-Recoverable Fault Input 0 Filter Value
          @param index in range 0..1
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setFILTERVAL(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (24 + 4 * (index - 0)))) | ((((value)) << (24 + 4 * (index - 0))) & (0xF << (24 + 4 * (index - 0))));
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
          Gets Debug Running Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBGRUN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Debug Running Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Fault Detection on Debug Break Detection
          @return boolean value
        */
        __attribute__((always_inline)) bool getFDDBD() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Fault Detection on Debug Break Detection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFDDBD(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
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
        // Start, restart or re-trigger counter on event
        RETRIGGER = 0x1,
        // Count on event
        COUNTEV = 0x2,
        // Start counter on event
        START = 0x3,
        // Increment counter on event
        INC = 0x4,
        // Count on active state of asynchronous event
        COUNT = 0x5,
        // Non-recoverable fault
        FAULT = 0x7,
      };
      
      enum class CNTSEL {
        // An interrupt/event is generated when a new counter cycle starts
        START = 0x0,
        // An interrupt/event is generated when a counter cycle ends
        END = 0x1,
        // An interrupt/event is generated when a counter cycle ends, except for the first and last cycles
        BETWEEN = 0x2,
        // An interrupt/event is generated when a new counter cycle starts or a counter cycle ends
        BOUNDARY = 0x3,
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
          Gets Timer/counter Input Event0 Action
          @param index in range 0..1
          @return enumeration value:
          target::tcc::EVCTRL::EVACT::OFF (0x0) Event action disabled
          target::tcc::EVCTRL::EVACT::RETRIGGER (0x1) Start, restart or re-trigger counter on event
          target::tcc::EVCTRL::EVACT::COUNTEV (0x2) Count on event
          target::tcc::EVCTRL::EVACT::START (0x3) Start counter on event
          target::tcc::EVCTRL::EVACT::INC (0x4) Increment counter on event
          target::tcc::EVCTRL::EVACT::COUNT (0x5) Count on active state of asynchronous event
          target::tcc::EVCTRL::EVACT::FAULT (0x7) Non-recoverable fault
        */
        __attribute__((always_inline)) target::tcc::EVCTRL::EVACT getEVACT(int index) volatile {
          return static_cast<target::tcc::EVCTRL::EVACT>((raw & (0x7 << (0 + 3 * (index - 0)))) >> (0 + 3 * (index - 0)));
        }
        /**
          Sets Timer/counter Input Event0 Action
          @param index in range 0..1
          @param value enumeration value:
          target::tcc::EVCTRL::EVACT::OFF (0x0) Event action disabled
          target::tcc::EVCTRL::EVACT::RETRIGGER (0x1) Start, restart or re-trigger counter on event
          target::tcc::EVCTRL::EVACT::COUNTEV (0x2) Count on event
          target::tcc::EVCTRL::EVACT::START (0x3) Start counter on event
          target::tcc::EVCTRL::EVACT::INC (0x4) Increment counter on event
          target::tcc::EVCTRL::EVACT::COUNT (0x5) Count on active state of asynchronous event
          target::tcc::EVCTRL::EVACT::FAULT (0x7) Non-recoverable fault
        */
        __attribute__((always_inline)) Register& setEVACT(int index, target::tcc::EVCTRL::EVACT value) volatile {
          raw = (raw & ~(0x7 << (0 + 3 * (index - 0)))) | (((static_cast<unsigned long>(value)) << (0 + 3 * (index - 0))) & (0x7 << (0 + 3 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Inverted Event 0 Input Enable
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCINV(int index) volatile {
          return ((raw & (0x1 << (12 + 1 * (index - 0)))) >> (12 + 1 * (index - 0)));
        }
        /**
          Sets Inverted Event 0 Input Enable
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCINV(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (12 + 1 * (index - 0)))) | ((((value)) << (12 + 1 * (index - 0))) & (0x1 << (12 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Timer/counter Event 0 Input Enable
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCEI(int index) volatile {
          return ((raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0)));
        }
        /**
          Sets Timer/counter Event 0 Input Enable
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCEI(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((((value)) << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Match or Capture Channel 0 Event Input Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getMCEI(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Match or Capture Channel 0 Event Input Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMCEI(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Match or Capture Channel 0 Event Output Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getMCEO(int index) volatile {
          return ((raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0)));
        }
        /**
          Sets Match or Capture Channel 0 Event Output Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMCEO(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((((value)) << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Timer/counter Output Event Mode
          @return enumeration value:
          target::tcc::EVCTRL::CNTSEL::START (0x0) An interrupt/event is generated when a new counter cycle starts
          target::tcc::EVCTRL::CNTSEL::END (0x1) An interrupt/event is generated when a counter cycle ends
          target::tcc::EVCTRL::CNTSEL::BETWEEN (0x2) An interrupt/event is generated when a counter cycle ends, except for the first and last cycles
          target::tcc::EVCTRL::CNTSEL::BOUNDARY (0x3) An interrupt/event is generated when a new counter cycle starts or a counter cycle ends
        */
        __attribute__((always_inline)) target::tcc::EVCTRL::CNTSEL getCNTSEL() volatile {
          return static_cast<target::tcc::EVCTRL::CNTSEL>((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets Timer/counter Output Event Mode
          @param value enumeration value:
          target::tcc::EVCTRL::CNTSEL::START (0x0) An interrupt/event is generated when a new counter cycle starts
          target::tcc::EVCTRL::CNTSEL::END (0x1) An interrupt/event is generated when a counter cycle ends
          target::tcc::EVCTRL::CNTSEL::BETWEEN (0x2) An interrupt/event is generated when a counter cycle ends, except for the first and last cycles
          target::tcc::EVCTRL::CNTSEL::BOUNDARY (0x3) An interrupt/event is generated when a new counter cycle starts or a counter cycle ends
        */
        __attribute__((always_inline)) Register& setCNTSEL(target::tcc::EVCTRL::CNTSEL value) volatile {
          raw = (raw & ~(0x3 << 6)) | (((static_cast<unsigned long>(value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets Overflow/Underflow Output Event Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVFEO() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Overflow/Underflow Output Event Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVFEO(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Retrigger Output Event Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTRGEO() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Retrigger Output Event Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTRGEO(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Timer/counter Output Event Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCNTEO() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Timer/counter Output Event Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCNTEO(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
      };
    };
    
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
          Gets Non-Recoverable Fault 0 Interrupt Enable
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULT(int index) volatile {
          return ((raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0)));
        }
        /**
          Sets Non-Recoverable Fault 0 Interrupt Enable
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((((value)) << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Match or Capture Channel 0 Interrupt Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getMC(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Match or Capture Channel 0 Interrupt Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
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
          Gets Retrigger Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTRG() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Retrigger Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTRG(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Counter Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCNT() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Counter Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCNT(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Error Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getERR() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Error Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERR(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Non-Recoverable Debug Fault Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFS() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Non-Recoverable Debug Fault Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFS(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault A Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTA() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Recoverable Fault A Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTA(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault B Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTB() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Recoverable Fault B Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTB(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
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
          Gets Non-Recoverable Fault 0 Interrupt Enable
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULT(int index) volatile {
          return ((raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0)));
        }
        /**
          Sets Non-Recoverable Fault 0 Interrupt Enable
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((((value)) << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Match or Capture Channel 0 Interrupt Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getMC(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Match or Capture Channel 0 Interrupt Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
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
          Gets Retrigger Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTRG() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Retrigger Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTRG(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Counter Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCNT() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Counter Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCNT(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Error Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getERR() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Error Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERR(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Non-Recoverable Debug Fault Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFS() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Non-Recoverable Debug Fault Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFS(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault A Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTA() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Recoverable Fault A Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTA(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault B Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTB() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Recoverable Fault B Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTB(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
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
          Gets Non-Recoverable Fault 0
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULT(int index) volatile {
          return ((raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0)));
        }
        /**
          Sets Non-Recoverable Fault 0
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((((value)) << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Match or Capture 0
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getMC(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Match or Capture 0
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMC(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
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
          Gets Retrigger
          @return boolean value
        */
        __attribute__((always_inline)) bool getTRG() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Retrigger
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTRG(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Counter
          @return boolean value
        */
        __attribute__((always_inline)) bool getCNT() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Counter
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCNT(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getERR() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERR(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Non-Recoverable Debug Fault
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFS() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Non-Recoverable Debug Fault
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFS(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault A
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTA() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Recoverable Fault A
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTA(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault B
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTB() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Recoverable Fault B
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTB(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Status
    */
    namespace STATUS {
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
          Gets Non-Recoverable Fault0 Input
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULT_IN(int index) volatile {
          return ((raw & (0x1 << (10 + 1 * (index - 0)))) >> (10 + 1 * (index - 0)));
        }
        /**
          Sets Non-Recoverable Fault0 Input
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULT_IN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (10 + 1 * (index - 0)))) | ((((value)) << (10 + 1 * (index - 0))) & (0x1 << (10 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Non-Recoverable Fault 0 State
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULT(int index) volatile {
          return ((raw & (0x1 << (14 + 1 * (index - 0)))) >> (14 + 1 * (index - 0)));
        }
        /**
          Sets Non-Recoverable Fault 0 State
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (14 + 1 * (index - 0)))) | ((((value)) << (14 + 1 * (index - 0))) & (0x1 << (14 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Compare Channel 0 Buffer Valid
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getCCBV(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Compare Channel 0 Buffer Valid
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCCBV(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Compare Channel 0 Value
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getCMP(int index) volatile {
          return ((raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0)));
        }
        /**
          Sets Compare Channel 0 Value
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCMP(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((((value)) << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Stop
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTOP() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Stop
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTOP(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Ramp
          @return boolean value
        */
        __attribute__((always_inline)) bool getIDX() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Ramp
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIDX(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Non-Recoverable Debug Fault State
          @return boolean value
        */
        __attribute__((always_inline)) bool getDFS() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Non-Recoverable Debug Fault State
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDFS(bool value) volatile {
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
          Gets Pattern Buffer Valid
          @return boolean value
        */
        __attribute__((always_inline)) bool getPATTBV() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Pattern Buffer Valid
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPATTBV(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Wave Buffer Valid
          @return boolean value
        */
        __attribute__((always_inline)) bool getWAVEBV() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Wave Buffer Valid
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWAVEBV(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Period Buffer Valid
          @return boolean value
        */
        __attribute__((always_inline)) bool getPERBV() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Period Buffer Valid
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPERBV(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault A Input
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTAIN() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Recoverable Fault A Input
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTAIN(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault B Input
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTBIN() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Recoverable Fault B Input
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTBIN(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault A State
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTA() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Recoverable Fault A State
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTA(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Recoverable Fault B State
          @return boolean value
        */
        __attribute__((always_inline)) bool getFAULTB() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Recoverable Fault B State
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFAULTB(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Count
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
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Counter Value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Count
    */
    namespace COUNT_DITH4 {
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
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return ((raw & (0xFFFFF << 4)) >> 4);
        }
        /**
          Sets Counter Value
          @param value value in range 0..1048575
        */
        __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((((value)) << 4) & (0xFFFFF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Count
    */
    namespace COUNT_DITH5 {
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
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return ((raw & (0x7FFFF << 5)) >> 5);
        }
        /**
          Sets Counter Value
          @param value value in range 0..524287
        */
        __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((((value)) << 5) & (0x7FFFF << 5));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Count
    */
    namespace COUNT_DITH6 {
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
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getCOUNT() volatile {
          return ((raw & (0x3FFFF << 6)) >> 6);
        }
        /**
          Sets Counter Value
          @param value value in range 0..262143
        */
        __attribute__((always_inline)) Register& setCOUNT(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((((value)) << 6) & (0x3FFFF << 6));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Pattern
    */
    namespace PATT {
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
          Gets Pattern Generator 0 Output Enable
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getPGE(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Pattern Generator 0 Output Enable
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPGE(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Pattern Generator 0 Output Value
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getPGV(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Pattern Generator 0 Output Value
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPGV(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Waveform Control
    */
    namespace WAVE {
      enum class WAVEGEN {
        // Normal frequency
        NFRQ = 0x0,
        // Match frequency
        MFRQ = 0x1,
        // Normal PWM
        NPWM = 0x2,
        // Dual-slope critical
        DSCRITICAL = 0x4,
        // Dual-slope with interrupt/event condition when COUNT reaches ZERO
        DSBOTTOM = 0x5,
        // Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP
        DSBOTH = 0x6,
        // Dual-slope with interrupt/event condition when COUNT reaches TOP
        DSTOP = 0x7,
      };
      
      enum class RAMP {
        // RAMP1 operation
        RAMP1 = 0x0,
        // Alternative RAMP2 operation
        RAMP2A = 0x1,
        // RAMP2 operation
        RAMP2 = 0x2,
        // Critical RAMP2 operation
        RAMP2C = 0x3,
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
          Gets Circular Channel 0 Enable
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getCICCEN(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Circular Channel 0 Enable
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCICCEN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Channel 0 Polarity
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getPOL(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Polarity
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPOL(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Swap DTI Output Pair 0
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWAP(int index) volatile {
          return ((raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0)));
        }
        /**
          Sets Swap DTI Output Pair 0
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWAP(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((((value)) << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Waveform Generation
          @return enumeration value:
          target::tcc::WAVE::WAVEGEN::NFRQ (0x0) Normal frequency
          target::tcc::WAVE::WAVEGEN::MFRQ (0x1) Match frequency
          target::tcc::WAVE::WAVEGEN::NPWM (0x2) Normal PWM
          target::tcc::WAVE::WAVEGEN::DSCRITICAL (0x4) Dual-slope critical
          target::tcc::WAVE::WAVEGEN::DSBOTTOM (0x5) Dual-slope with interrupt/event condition when COUNT reaches ZERO
          target::tcc::WAVE::WAVEGEN::DSBOTH (0x6) Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP
          target::tcc::WAVE::WAVEGEN::DSTOP (0x7) Dual-slope with interrupt/event condition when COUNT reaches TOP
        */
        __attribute__((always_inline)) target::tcc::WAVE::WAVEGEN getWAVEGEN() volatile {
          return static_cast<target::tcc::WAVE::WAVEGEN>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Waveform Generation
          @param value enumeration value:
          target::tcc::WAVE::WAVEGEN::NFRQ (0x0) Normal frequency
          target::tcc::WAVE::WAVEGEN::MFRQ (0x1) Match frequency
          target::tcc::WAVE::WAVEGEN::NPWM (0x2) Normal PWM
          target::tcc::WAVE::WAVEGEN::DSCRITICAL (0x4) Dual-slope critical
          target::tcc::WAVE::WAVEGEN::DSBOTTOM (0x5) Dual-slope with interrupt/event condition when COUNT reaches ZERO
          target::tcc::WAVE::WAVEGEN::DSBOTH (0x6) Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP
          target::tcc::WAVE::WAVEGEN::DSTOP (0x7) Dual-slope with interrupt/event condition when COUNT reaches TOP
        */
        __attribute__((always_inline)) Register& setWAVEGEN(target::tcc::WAVE::WAVEGEN value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets Ramp Mode
          @return enumeration value:
          target::tcc::WAVE::RAMP::RAMP1 (0x0) RAMP1 operation
          target::tcc::WAVE::RAMP::RAMP2A (0x1) Alternative RAMP2 operation
          target::tcc::WAVE::RAMP::RAMP2 (0x2) RAMP2 operation
          target::tcc::WAVE::RAMP::RAMP2C (0x3) Critical RAMP2 operation
        */
        __attribute__((always_inline)) target::tcc::WAVE::RAMP getRAMP() volatile {
          return static_cast<target::tcc::WAVE::RAMP>((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Ramp Mode
          @param value enumeration value:
          target::tcc::WAVE::RAMP::RAMP1 (0x0) RAMP1 operation
          target::tcc::WAVE::RAMP::RAMP2A (0x1) Alternative RAMP2 operation
          target::tcc::WAVE::RAMP::RAMP2 (0x2) RAMP2 operation
          target::tcc::WAVE::RAMP::RAMP2C (0x3) Critical RAMP2 operation
        */
        __attribute__((always_inline)) Register& setRAMP(target::tcc::WAVE::RAMP value) volatile {
          raw = (raw & ~(0x3 << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular period Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIPEREN() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Circular period Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIPEREN(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Period
    */
    namespace PER {
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
          Gets Period Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Period Value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setPER(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Period
    */
    namespace PER_DITH4 {
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
          Gets Dithering Cycle Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Dithering Cycle Number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Period Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return ((raw & (0xFFFFF << 4)) >> 4);
        }
        /**
          Sets Period Value
          @param value value in range 0..1048575
        */
        __attribute__((always_inline)) Register& setPER(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((((value)) << 4) & (0xFFFFF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Period
    */
    namespace PER_DITH5 {
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
          Gets Dithering Cycle Number
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return ((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets Dithering Cycle Number
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
        /**
          Gets Period Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return ((raw & (0x7FFFF << 5)) >> 5);
        }
        /**
          Sets Period Value
          @param value value in range 0..524287
        */
        __attribute__((always_inline)) Register& setPER(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((((value)) << 5) & (0x7FFFF << 5));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Period
    */
    namespace PER_DITH6 {
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
          Gets Dithering Cycle Number
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return ((raw & (0x3F << 0)) >> 0);
        }
        /**
          Sets Dithering Cycle Number
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
          return *(Register*)this;
        }
        /**
          Gets Period Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return ((raw & (0x3FFFF << 6)) >> 6);
        }
        /**
          Sets Period Value
          @param value value in range 0..262143
        */
        __attribute__((always_inline)) Register& setPER(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((((value)) << 6) & (0x3FFFF << 6));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Compare and Capture
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
          Gets Channel Compare/Capture Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Channel Compare/Capture Value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setCC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Compare and Capture
    */
    namespace CC_DITH4 {
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
          Gets Dithering Cycle Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Dithering Cycle Number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Compare/Capture Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return ((raw & (0xFFFFF << 4)) >> 4);
        }
        /**
          Sets Channel Compare/Capture Value
          @param value value in range 0..1048575
        */
        __attribute__((always_inline)) Register& setCC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((((value)) << 4) & (0xFFFFF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Compare and Capture
    */
    namespace CC_DITH5 {
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
          Gets Dithering Cycle Number
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return ((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets Dithering Cycle Number
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Compare/Capture Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return ((raw & (0x7FFFF << 5)) >> 5);
        }
        /**
          Sets Channel Compare/Capture Value
          @param value value in range 0..524287
        */
        __attribute__((always_inline)) Register& setCC(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((((value)) << 5) & (0x7FFFF << 5));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Compare and Capture
    */
    namespace CC_DITH6 {
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
          Gets Dithering Cycle Number
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDITHERCY() volatile {
          return ((raw & (0x3F << 0)) >> 0);
        }
        /**
          Sets Dithering Cycle Number
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setDITHERCY(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Compare/Capture Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getCC() volatile {
          return ((raw & (0x3FFFF << 6)) >> 6);
        }
        /**
          Sets Channel Compare/Capture Value
          @param value value in range 0..262143
        */
        __attribute__((always_inline)) Register& setCC(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((((value)) << 6) & (0x3FFFF << 6));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Pattern Buffer
    */
    namespace PATTB {
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
          Gets Pattern Generator 0 Output Enable Buffer
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getPGEB(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Pattern Generator 0 Output Enable Buffer
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPGEB(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Pattern Generator 0 Output Enable
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getPGVB(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Pattern Generator 0 Output Enable
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPGVB(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Waveform Control Buffer
    */
    namespace WAVEB {
      enum class WAVEGENB {
        // Normal frequency
        NFRQ = 0x0,
        // Match frequency
        MFRQ = 0x1,
        // Normal PWM
        NPWM = 0x2,
        // Dual-slope critical
        DSCRITICAL = 0x4,
        // Dual-slope with interrupt/event condition when COUNT reaches ZERO
        DSBOTTOM = 0x5,
        // Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP
        DSBOTH = 0x6,
        // Dual-slope with interrupt/event condition when COUNT reaches TOP
        DSTOP = 0x7,
      };
      
      enum class RAMPB {
        // RAMP1 operation
        RAMP1 = 0x0,
        // Alternative RAMP2 operation
        RAMP2A = 0x1,
        // RAMP2 operation
        RAMP2 = 0x2,
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
          Gets Circular Channel 0 Enable Buffer
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getCICCENB(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Circular Channel 0 Enable Buffer
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCICCENB(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Channel 0 Polarity Buffer
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getPOLB(int index) volatile {
          return ((raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Polarity Buffer
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPOLB(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((((value)) << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Swap DTI Output Pair 0 Buffer
          @param index in range 0..3
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWAPB(int index) volatile {
          return ((raw & (0x1 << (24 + 1 * (index - 0)))) >> (24 + 1 * (index - 0)));
        }
        /**
          Sets Swap DTI Output Pair 0 Buffer
          @param index in range 0..3
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWAPB(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (24 + 1 * (index - 0)))) | ((((value)) << (24 + 1 * (index - 0))) & (0x1 << (24 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Waveform Generation Buffer
          @return enumeration value:
          target::tcc::WAVEB::WAVEGENB::NFRQ (0x0) Normal frequency
          target::tcc::WAVEB::WAVEGENB::MFRQ (0x1) Match frequency
          target::tcc::WAVEB::WAVEGENB::NPWM (0x2) Normal PWM
          target::tcc::WAVEB::WAVEGENB::DSCRITICAL (0x4) Dual-slope critical
          target::tcc::WAVEB::WAVEGENB::DSBOTTOM (0x5) Dual-slope with interrupt/event condition when COUNT reaches ZERO
          target::tcc::WAVEB::WAVEGENB::DSBOTH (0x6) Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP
          target::tcc::WAVEB::WAVEGENB::DSTOP (0x7) Dual-slope with interrupt/event condition when COUNT reaches TOP
        */
        __attribute__((always_inline)) target::tcc::WAVEB::WAVEGENB getWAVEGENB() volatile {
          return static_cast<target::tcc::WAVEB::WAVEGENB>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Waveform Generation Buffer
          @param value enumeration value:
          target::tcc::WAVEB::WAVEGENB::NFRQ (0x0) Normal frequency
          target::tcc::WAVEB::WAVEGENB::MFRQ (0x1) Match frequency
          target::tcc::WAVEB::WAVEGENB::NPWM (0x2) Normal PWM
          target::tcc::WAVEB::WAVEGENB::DSCRITICAL (0x4) Dual-slope critical
          target::tcc::WAVEB::WAVEGENB::DSBOTTOM (0x5) Dual-slope with interrupt/event condition when COUNT reaches ZERO
          target::tcc::WAVEB::WAVEGENB::DSBOTH (0x6) Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP
          target::tcc::WAVEB::WAVEGENB::DSTOP (0x7) Dual-slope with interrupt/event condition when COUNT reaches TOP
        */
        __attribute__((always_inline)) Register& setWAVEGENB(target::tcc::WAVEB::WAVEGENB value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets Ramp Mode Buffer
          @return enumeration value:
          target::tcc::WAVEB::RAMPB::RAMP1 (0x0) RAMP1 operation
          target::tcc::WAVEB::RAMPB::RAMP2A (0x1) Alternative RAMP2 operation
          target::tcc::WAVEB::RAMPB::RAMP2 (0x2) RAMP2 operation
        */
        __attribute__((always_inline)) target::tcc::WAVEB::RAMPB getRAMPB() volatile {
          return static_cast<target::tcc::WAVEB::RAMPB>((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Ramp Mode Buffer
          @param value enumeration value:
          target::tcc::WAVEB::RAMPB::RAMP1 (0x0) RAMP1 operation
          target::tcc::WAVEB::RAMPB::RAMP2A (0x1) Alternative RAMP2 operation
          target::tcc::WAVEB::RAMPB::RAMP2 (0x2) RAMP2 operation
        */
        __attribute__((always_inline)) Register& setRAMPB(target::tcc::WAVEB::RAMPB value) volatile {
          raw = (raw & ~(0x3 << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular Period Enable Buffer
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIPERENB() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Circular Period Enable Buffer
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIPERENB(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Period Buffer
    */
    namespace PERB {
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
          Gets Period Buffer Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Period Buffer Value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setPERB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Period Buffer
    */
    namespace PERB_DITH4 {
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
          Gets Dithering Buffer Cycle Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Period Buffer Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return ((raw & (0xFFFFF << 4)) >> 4);
        }
        /**
          Sets Period Buffer Value
          @param value value in range 0..1048575
        */
        __attribute__((always_inline)) Register& setPERB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((((value)) << 4) & (0xFFFFF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Period Buffer
    */
    namespace PERB_DITH5 {
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
          Gets Dithering Buffer Cycle Number
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return ((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
        /**
          Gets Period Buffer Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return ((raw & (0x7FFFF << 5)) >> 5);
        }
        /**
          Sets Period Buffer Value
          @param value value in range 0..524287
        */
        __attribute__((always_inline)) Register& setPERB(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((((value)) << 5) & (0x7FFFF << 5));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Period Buffer
    */
    namespace PERB_DITH6 {
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
          Gets Dithering Buffer Cycle Number
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return ((raw & (0x3F << 0)) >> 0);
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
          return *(Register*)this;
        }
        /**
          Gets Period Buffer Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getPERB() volatile {
          return ((raw & (0x3FFFF << 6)) >> 6);
        }
        /**
          Sets Period Buffer Value
          @param value value in range 0..262143
        */
        __attribute__((always_inline)) Register& setPERB(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((((value)) << 6) & (0x3FFFF << 6));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Compare and Capture Buffer
    */
    namespace CCB {
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
          Gets Channel Compare/Capture Buffer Value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Channel Compare/Capture Buffer Value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setCCB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Compare and Capture Buffer
    */
    namespace CCB_DITH4 {
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
          Gets Dithering Buffer Cycle Number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Compare/Capture Buffer Value
          @return value in range 0..1048575
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return ((raw & (0xFFFFF << 4)) >> 4);
        }
        /**
          Sets Channel Compare/Capture Buffer Value
          @param value value in range 0..1048575
        */
        __attribute__((always_inline)) Register& setCCB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFF << 4)) | ((((value)) << 4) & (0xFFFFF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Compare and Capture Buffer
    */
    namespace CCB_DITH5 {
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
          Gets Dithering Buffer Cycle Number
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return ((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Compare/Capture Buffer Value
          @return value in range 0..524287
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return ((raw & (0x7FFFF << 5)) >> 5);
        }
        /**
          Sets Channel Compare/Capture Buffer Value
          @param value value in range 0..524287
        */
        __attribute__((always_inline)) Register& setCCB(unsigned long value) volatile {
          raw = (raw & ~(0x7FFFF << 5)) | ((((value)) << 5) & (0x7FFFF << 5));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Compare and Capture Buffer
    */
    namespace CCB_DITH6 {
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
          Gets Dithering Buffer Cycle Number
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDITHERCYB() volatile {
          return ((raw & (0x3F << 0)) >> 0);
        }
        /**
          Sets Dithering Buffer Cycle Number
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setDITHERCYB(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Compare/Capture Buffer Value
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getCCB() volatile {
          return ((raw & (0x3FFFF << 6)) >> 6);
        }
        /**
          Sets Channel Compare/Capture Buffer Value
          @param value value in range 0..262143
        */
        __attribute__((always_inline)) Register& setCCB(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 6)) | ((((value)) << 6) & (0x3FFFF << 6));
          return *(Register*)this;
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
          CTRLA::Register CTRLA;
        };
        struct {
          char _space_CTRLBCLR[0x4];
          /**
            Control B Clear
          */
          CTRLBCLR::Register CTRLBCLR;
        };
        struct {
          char _space_CTRLBSET[0x5];
          /**
            Control B Set
          */
          CTRLBSET::Register CTRLBSET;
        };
        struct {
          char _space_SYNCBUSY[0x8];
          /**
            Synchronization Busy
          */
          SYNCBUSY::Register SYNCBUSY;
        };
        struct {
          char _space_FCTRLA[0xc];
          /**
            Recoverable Fault A Configuration
          */
          FCTRLA::Register FCTRLA;
        };
        struct {
          char _space_FCTRLB[0x10];
          /**
            Recoverable Fault B Configuration
          */
          FCTRLB::Register FCTRLB;
        };
        struct {
          char _space_WEXCTRL[0x14];
          /**
            Waveform Extension Configuration
          */
          WEXCTRL::Register WEXCTRL;
        };
        struct {
          char _space_DRVCTRL[0x18];
          /**
            Driver Control
          */
          DRVCTRL::Register DRVCTRL;
        };
        struct {
          char _space_DBGCTRL[0x1e];
          /**
            Debug Control
          */
          DBGCTRL::Register DBGCTRL;
        };
        struct {
          char _space_EVCTRL[0x20];
          /**
            Event Control
          */
          EVCTRL::Register EVCTRL;
        };
        struct {
          char _space_INTENCLR[0x24];
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0x28];
          /**
            Interrupt Enable Set
          */
          INTENSET::Register INTENSET;
        };
        struct {
          char _space_INTFLAG[0x2c];
          /**
            Interrupt Flag Status and Clear
          */
          INTFLAG::Register INTFLAG;
        };
        struct {
          char _space_STATUS[0x30];
          /**
            Status
          */
          STATUS::Register STATUS;
        };
        struct {
          char _space_COUNT[0x34];
          /**
            Count
          */
          COUNT::Register COUNT;
        };
        struct {
          char _space_COUNT_DITH4[0x34];
          /**
            Count
          */
          COUNT_DITH4::Register COUNT_DITH4;
        };
        struct {
          char _space_COUNT_DITH5[0x34];
          /**
            Count
          */
          COUNT_DITH5::Register COUNT_DITH5;
        };
        struct {
          char _space_COUNT_DITH6[0x34];
          /**
            Count
          */
          COUNT_DITH6::Register COUNT_DITH6;
        };
        struct {
          char _space_PATT[0x38];
          /**
            Pattern
          */
          PATT::Register PATT;
        };
        struct {
          char _space_WAVE[0x3c];
          /**
            Waveform Control
          */
          WAVE::Register WAVE;
        };
        struct {
          char _space_PER[0x40];
          /**
            Period
          */
          PER::Register PER;
        };
        struct {
          char _space_PER_DITH4[0x40];
          /**
            Period
          */
          PER_DITH4::Register PER_DITH4;
        };
        struct {
          char _space_PER_DITH5[0x40];
          /**
            Period
          */
          PER_DITH5::Register PER_DITH5;
        };
        struct {
          char _space_PER_DITH6[0x40];
          /**
            Period
          */
          PER_DITH6::Register PER_DITH6;
        };
        struct {
          char _space_CC[0x44];
          /**
            Compare and Capture
          */
          CC::Register CC[4];
        };
        struct {
          char _space_CC_DITH4[0x44];
          /**
            Compare and Capture
          */
          CC_DITH4::Register CC_DITH4[4];
        };
        struct {
          char _space_CC_DITH5[0x44];
          /**
            Compare and Capture
          */
          CC_DITH5::Register CC_DITH5[4];
        };
        struct {
          char _space_CC_DITH6[0x44];
          /**
            Compare and Capture
          */
          CC_DITH6::Register CC_DITH6[4];
        };
        struct {
          char _space_PATTB[0x64];
          /**
            Pattern Buffer
          */
          PATTB::Register PATTB;
        };
        struct {
          char _space_WAVEB[0x68];
          /**
            Waveform Control Buffer
          */
          WAVEB::Register WAVEB;
        };
        struct {
          char _space_PERB[0x6c];
          /**
            Period Buffer
          */
          PERB::Register PERB;
        };
        struct {
          char _space_PERB_DITH4[0x6c];
          /**
            Period Buffer
          */
          PERB_DITH4::Register PERB_DITH4;
        };
        struct {
          char _space_PERB_DITH5[0x6c];
          /**
            Period Buffer
          */
          PERB_DITH5::Register PERB_DITH5;
        };
        struct {
          char _space_PERB_DITH6[0x6c];
          /**
            Period Buffer
          */
          PERB_DITH6::Register PERB_DITH6;
        };
        struct {
          char _space_CCB[0x70];
          /**
            Compare and Capture Buffer
          */
          CCB::Register CCB[4];
        };
        struct {
          char _space_CCB_DITH4[0x70];
          /**
            Compare and Capture Buffer
          */
          CCB_DITH4::Register CCB_DITH4[4];
        };
        struct {
          char _space_CCB_DITH5[0x70];
          /**
            Compare and Capture Buffer
          */
          CCB_DITH5::Register CCB_DITH5[4];
        };
        struct {
          char _space_CCB_DITH6[0x70];
          /**
            Compare and Capture Buffer
          */
          CCB_DITH6::Register CCB_DITH6[4];
        };
      };
    };
  }
  
  extern volatile tcc::Peripheral TCC0;
}