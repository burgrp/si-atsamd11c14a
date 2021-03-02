namespace target {
  namespace eic {
    
    /**
      Control
    */
    namespace CTRL {
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
      Non-Maskable Interrupt Control
    */
    namespace NMICTRL {
      enum class NMISENSE {
        // No detection
        NONE = 0x0,
        // Rising-edge detection
        RISE = 0x1,
        // Falling-edge detection
        FALL = 0x2,
        // Both-edges detection
        BOTH = 0x3,
        // High-level detection
        HIGH = 0x4,
        // Low-level detection
        LOW = 0x5,
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
          Gets Non-Maskable Interrupt Sense
          @return enumeration value:
          target::eic::NMICTRL::NMISENSE::NONE (0x0) No detection
          target::eic::NMICTRL::NMISENSE::RISE (0x1) Rising-edge detection
          target::eic::NMICTRL::NMISENSE::FALL (0x2) Falling-edge detection
          target::eic::NMICTRL::NMISENSE::BOTH (0x3) Both-edges detection
          target::eic::NMICTRL::NMISENSE::HIGH (0x4) High-level detection
          target::eic::NMICTRL::NMISENSE::LOW (0x5) Low-level detection
        */
        __attribute__((always_inline)) target::eic::NMICTRL::NMISENSE getNMISENSE() volatile {
          return static_cast<target::eic::NMICTRL::NMISENSE>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Non-Maskable Interrupt Sense
          @param value enumeration value:
          target::eic::NMICTRL::NMISENSE::NONE (0x0) No detection
          target::eic::NMICTRL::NMISENSE::RISE (0x1) Rising-edge detection
          target::eic::NMICTRL::NMISENSE::FALL (0x2) Falling-edge detection
          target::eic::NMICTRL::NMISENSE::BOTH (0x3) Both-edges detection
          target::eic::NMICTRL::NMISENSE::HIGH (0x4) High-level detection
          target::eic::NMICTRL::NMISENSE::LOW (0x5) Low-level detection
        */
        __attribute__((always_inline)) Register& setNMISENSE(target::eic::NMICTRL::NMISENSE value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets Non-Maskable Interrupt Filter Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getNMIFILTEN() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Non-Maskable Interrupt Filter Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNMIFILTEN(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Non-Maskable Interrupt Flag Status and Clear
    */
    namespace NMIFLAG {
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
          Gets Non-Maskable Interrupt
          @return boolean value
        */
        __attribute__((always_inline)) bool getNMI() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Non-Maskable Interrupt
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNMI(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Event Control
    */
    namespace EVCTRL {
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
          Gets External Interrupt 0 Event Output Enable
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getEXTINTEO(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets External Interrupt 0 Event Output Enable
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEXTINTEO(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
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
          Gets External Interrupt 0 Enable
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getEXTINT(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets External Interrupt 0 Enable
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEXTINT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
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
          Gets External Interrupt 0 Enable
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getEXTINT(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets External Interrupt 0 Enable
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEXTINT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
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
          Gets External Interrupt 0
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getEXTINT(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets External Interrupt 0
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEXTINT(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Wake-Up Enable
    */
    namespace WAKEUP {
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
          Gets External Interrupt 0 Wake-up Enable
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getWAKEUPEN(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets External Interrupt 0 Wake-up Enable
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWAKEUPEN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Configuration n
    */
    namespace CONFIG {
      enum class SENSE {
        // No detection
        NONE = 0x0,
        // Rising-edge detection
        RISE = 0x1,
        // Falling-edge detection
        FALL = 0x2,
        // Both-edges detection
        BOTH = 0x3,
        // High-level detection
        HIGH = 0x4,
        // Low-level detection
        LOW = 0x5,
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
          Gets Input Sense 0 Configuration
          @param index in range 0..7
          @return enumeration value:
          target::eic::CONFIG::SENSE::NONE (0x0) No detection
          target::eic::CONFIG::SENSE::RISE (0x1) Rising-edge detection
          target::eic::CONFIG::SENSE::FALL (0x2) Falling-edge detection
          target::eic::CONFIG::SENSE::BOTH (0x3) Both-edges detection
          target::eic::CONFIG::SENSE::HIGH (0x4) High-level detection
          target::eic::CONFIG::SENSE::LOW (0x5) Low-level detection
        */
        __attribute__((always_inline)) target::eic::CONFIG::SENSE getSENSE(int index) volatile {
          return static_cast<target::eic::CONFIG::SENSE>((raw & (0x7 << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0)));
        }
        /**
          Sets Input Sense 0 Configuration
          @param index in range 0..7
          @param value enumeration value:
          target::eic::CONFIG::SENSE::NONE (0x0) No detection
          target::eic::CONFIG::SENSE::RISE (0x1) Rising-edge detection
          target::eic::CONFIG::SENSE::FALL (0x2) Falling-edge detection
          target::eic::CONFIG::SENSE::BOTH (0x3) Both-edges detection
          target::eic::CONFIG::SENSE::HIGH (0x4) High-level detection
          target::eic::CONFIG::SENSE::LOW (0x5) Low-level detection
        */
        __attribute__((always_inline)) Register& setSENSE(int index, target::eic::CONFIG::SENSE value) volatile {
          raw = (raw & ~(0x7 << (0 + 4 * (index - 0)))) | (((static_cast<unsigned long>(value)) << (0 + 4 * (index - 0))) & (0x7 << (0 + 4 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Filter 0 Enable
          @param index in range 0..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getFILTEN(int index) volatile {
          return ((raw & (0x1 << (3 + 4 * (index - 0)))) >> (3 + 4 * (index - 0)));
        }
        /**
          Sets Filter 0 Enable
          @param index in range 0..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFILTEN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 0)))) | ((((value)) << (3 + 4 * (index - 0))) & (0x1 << (3 + 4 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Control
          */
          CTRL::Register CTRL;
        };
        struct {
          char _space_STATUS[0x1];
          /**
            Status
          */
          STATUS::Register STATUS;
        };
        struct {
          char _space_NMICTRL[0x2];
          /**
            Non-Maskable Interrupt Control
          */
          NMICTRL::Register NMICTRL;
        };
        struct {
          char _space_NMIFLAG[0x3];
          /**
            Non-Maskable Interrupt Flag Status and Clear
          */
          NMIFLAG::Register NMIFLAG;
        };
        struct {
          char _space_EVCTRL[0x4];
          /**
            Event Control
          */
          EVCTRL::Register EVCTRL;
        };
        struct {
          char _space_INTENCLR[0x8];
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0xc];
          /**
            Interrupt Enable Set
          */
          INTENSET::Register INTENSET;
        };
        struct {
          char _space_INTFLAG[0x10];
          /**
            Interrupt Flag Status and Clear
          */
          INTFLAG::Register INTFLAG;
        };
        struct {
          char _space_WAKEUP[0x14];
          /**
            Wake-Up Enable
          */
          WAKEUP::Register WAKEUP;
        };
        struct {
          char _space_CONFIG[0x18];
          /**
            Configuration n
          */
          CONFIG::Register CONFIG;
        };
      };
    };
  }
  
  extern volatile eic::Peripheral EIC;
}