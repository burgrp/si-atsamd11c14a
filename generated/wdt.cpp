namespace target {
  namespace wdt {
    
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
          Gets Watchdog Timer Window Mode Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Watchdog Timer Window Mode Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Always-On
          @return boolean value
        */
        __attribute__((always_inline)) bool getALWAYSON() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Always-On
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALWAYSON(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Configuration
    */
    namespace CONFIG {
      enum class PER {
        // 8 clock cycles
        _8_CLOCK_CYCLES = 0x0,
        // 16 clock cycles
        _16_CLOCK_CYCLES = 0x1,
        // 32 clock cycles
        _32_CLOCK_CYCLES = 0x2,
        // 64 clock cycles
        _64_CLOCK_CYCLES = 0x3,
        // 128 clock cycles
        _128_CLOCK_CYCLES = 0x4,
        // 256 clock cycles
        _256_CLOCK_CYCLES = 0x5,
        // 512 clock cycles
        _512_CLOCK_CYCLES = 0x6,
        // 1024 clock cycles
        _1K = 0x7,
        // 2048 clock cycles
        _2K = 0x8,
        // 4096 clock cycles
        _4K = 0x9,
        // 8192 clock cycles
        _8K = 0xa,
        // 16384 clock cycles
        _16K = 0xb,
      };
      
      enum class WINDOW {
        // 8 clock cycles
        _8_CLOCK_CYCLES = 0x0,
        // 16 clock cycles
        _16_CLOCK_CYCLES = 0x1,
        // 32 clock cycles
        _32_CLOCK_CYCLES = 0x2,
        // 64 clock cycles
        _64_CLOCK_CYCLES = 0x3,
        // 128 clock cycles
        _128_CLOCK_CYCLES = 0x4,
        // 256 clock cycles
        _256_CLOCK_CYCLES = 0x5,
        // 512 clock cycles
        _512_CLOCK_CYCLES = 0x6,
        // 1024 clock cycles
        _1K = 0x7,
        // 2048 clock cycles
        _2K = 0x8,
        // 4096 clock cycles
        _4K = 0x9,
        // 8192 clock cycles
        _8K = 0xa,
        // 16384 clock cycles
        _16K = 0xb,
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
          Gets Time-Out Period
          @return enumeration value:
          target::wdt::CONFIG::PER::_8_CLOCK_CYCLES (0x0) 8 clock cycles
          target::wdt::CONFIG::PER::_16_CLOCK_CYCLES (0x1) 16 clock cycles
          target::wdt::CONFIG::PER::_32_CLOCK_CYCLES (0x2) 32 clock cycles
          target::wdt::CONFIG::PER::_64_CLOCK_CYCLES (0x3) 64 clock cycles
          target::wdt::CONFIG::PER::_128_CLOCK_CYCLES (0x4) 128 clock cycles
          target::wdt::CONFIG::PER::_256_CLOCK_CYCLES (0x5) 256 clock cycles
          target::wdt::CONFIG::PER::_512_CLOCK_CYCLES (0x6) 512 clock cycles
          target::wdt::CONFIG::PER::_1K (0x7) 1024 clock cycles
          target::wdt::CONFIG::PER::_2K (0x8) 2048 clock cycles
          target::wdt::CONFIG::PER::_4K (0x9) 4096 clock cycles
          target::wdt::CONFIG::PER::_8K (0xa) 8192 clock cycles
          target::wdt::CONFIG::PER::_16K (0xb) 16384 clock cycles
        */
        __attribute__((always_inline)) target::wdt::CONFIG::PER getPER() volatile {
          return static_cast<target::wdt::CONFIG::PER>((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Time-Out Period
          @param value enumeration value:
          target::wdt::CONFIG::PER::_8_CLOCK_CYCLES (0x0) 8 clock cycles
          target::wdt::CONFIG::PER::_16_CLOCK_CYCLES (0x1) 16 clock cycles
          target::wdt::CONFIG::PER::_32_CLOCK_CYCLES (0x2) 32 clock cycles
          target::wdt::CONFIG::PER::_64_CLOCK_CYCLES (0x3) 64 clock cycles
          target::wdt::CONFIG::PER::_128_CLOCK_CYCLES (0x4) 128 clock cycles
          target::wdt::CONFIG::PER::_256_CLOCK_CYCLES (0x5) 256 clock cycles
          target::wdt::CONFIG::PER::_512_CLOCK_CYCLES (0x6) 512 clock cycles
          target::wdt::CONFIG::PER::_1K (0x7) 1024 clock cycles
          target::wdt::CONFIG::PER::_2K (0x8) 2048 clock cycles
          target::wdt::CONFIG::PER::_4K (0x9) 4096 clock cycles
          target::wdt::CONFIG::PER::_8K (0xa) 8192 clock cycles
          target::wdt::CONFIG::PER::_16K (0xb) 16384 clock cycles
        */
        __attribute__((always_inline)) Register& setPER(target::wdt::CONFIG::PER value) volatile {
          raw = (raw & ~(0xF << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Window Mode Time-Out Period
          @return enumeration value:
          target::wdt::CONFIG::WINDOW::_8_CLOCK_CYCLES (0x0) 8 clock cycles
          target::wdt::CONFIG::WINDOW::_16_CLOCK_CYCLES (0x1) 16 clock cycles
          target::wdt::CONFIG::WINDOW::_32_CLOCK_CYCLES (0x2) 32 clock cycles
          target::wdt::CONFIG::WINDOW::_64_CLOCK_CYCLES (0x3) 64 clock cycles
          target::wdt::CONFIG::WINDOW::_128_CLOCK_CYCLES (0x4) 128 clock cycles
          target::wdt::CONFIG::WINDOW::_256_CLOCK_CYCLES (0x5) 256 clock cycles
          target::wdt::CONFIG::WINDOW::_512_CLOCK_CYCLES (0x6) 512 clock cycles
          target::wdt::CONFIG::WINDOW::_1K (0x7) 1024 clock cycles
          target::wdt::CONFIG::WINDOW::_2K (0x8) 2048 clock cycles
          target::wdt::CONFIG::WINDOW::_4K (0x9) 4096 clock cycles
          target::wdt::CONFIG::WINDOW::_8K (0xa) 8192 clock cycles
          target::wdt::CONFIG::WINDOW::_16K (0xb) 16384 clock cycles
        */
        __attribute__((always_inline)) target::wdt::CONFIG::WINDOW getWINDOW() volatile {
          return static_cast<target::wdt::CONFIG::WINDOW>((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets Window Mode Time-Out Period
          @param value enumeration value:
          target::wdt::CONFIG::WINDOW::_8_CLOCK_CYCLES (0x0) 8 clock cycles
          target::wdt::CONFIG::WINDOW::_16_CLOCK_CYCLES (0x1) 16 clock cycles
          target::wdt::CONFIG::WINDOW::_32_CLOCK_CYCLES (0x2) 32 clock cycles
          target::wdt::CONFIG::WINDOW::_64_CLOCK_CYCLES (0x3) 64 clock cycles
          target::wdt::CONFIG::WINDOW::_128_CLOCK_CYCLES (0x4) 128 clock cycles
          target::wdt::CONFIG::WINDOW::_256_CLOCK_CYCLES (0x5) 256 clock cycles
          target::wdt::CONFIG::WINDOW::_512_CLOCK_CYCLES (0x6) 512 clock cycles
          target::wdt::CONFIG::WINDOW::_1K (0x7) 1024 clock cycles
          target::wdt::CONFIG::WINDOW::_2K (0x8) 2048 clock cycles
          target::wdt::CONFIG::WINDOW::_4K (0x9) 4096 clock cycles
          target::wdt::CONFIG::WINDOW::_8K (0xa) 8192 clock cycles
          target::wdt::CONFIG::WINDOW::_16K (0xb) 16384 clock cycles
        */
        __attribute__((always_inline)) Register& setWINDOW(target::wdt::CONFIG::WINDOW value) volatile {
          raw = (raw & ~(0xF << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Early Warning Interrupt Control
    */
    namespace EWCTRL {
      enum class EWOFFSET {
        // 8 clock cycles
        _8_CLOCK_CYCLES = 0x0,
        // 16 clock cycles
        _16_CLOCK_CYCLES = 0x1,
        // 32 clock cycles
        _32_CLOCK_CYCLES = 0x2,
        // 64 clock cycles
        _64_CLOCK_CYCLES = 0x3,
        // 128 clock cycles
        _128_CLOCK_CYCLES = 0x4,
        // 256 clock cycles
        _256_CLOCK_CYCLES = 0x5,
        // 512 clock cycles
        _512_CLOCK_CYCLES = 0x6,
        // 1024 clock cycles
        _1K = 0x7,
        // 2048 clock cycles
        _2K = 0x8,
        // 4096 clock cycles
        _4K = 0x9,
        // 8192 clock cycles
        _8K = 0xa,
        // 16384 clock cycles
        _16K = 0xb,
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
          Gets Early Warning Interrupt Time Offset
          @return enumeration value:
          target::wdt::EWCTRL::EWOFFSET::_8_CLOCK_CYCLES (0x0) 8 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_16_CLOCK_CYCLES (0x1) 16 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_32_CLOCK_CYCLES (0x2) 32 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_64_CLOCK_CYCLES (0x3) 64 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_128_CLOCK_CYCLES (0x4) 128 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_256_CLOCK_CYCLES (0x5) 256 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_512_CLOCK_CYCLES (0x6) 512 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_1K (0x7) 1024 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_2K (0x8) 2048 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_4K (0x9) 4096 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_8K (0xa) 8192 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_16K (0xb) 16384 clock cycles
        */
        __attribute__((always_inline)) target::wdt::EWCTRL::EWOFFSET getEWOFFSET() volatile {
          return static_cast<target::wdt::EWCTRL::EWOFFSET>((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Early Warning Interrupt Time Offset
          @param value enumeration value:
          target::wdt::EWCTRL::EWOFFSET::_8_CLOCK_CYCLES (0x0) 8 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_16_CLOCK_CYCLES (0x1) 16 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_32_CLOCK_CYCLES (0x2) 32 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_64_CLOCK_CYCLES (0x3) 64 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_128_CLOCK_CYCLES (0x4) 128 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_256_CLOCK_CYCLES (0x5) 256 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_512_CLOCK_CYCLES (0x6) 512 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_1K (0x7) 1024 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_2K (0x8) 2048 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_4K (0x9) 4096 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_8K (0xa) 8192 clock cycles
          target::wdt::EWCTRL::EWOFFSET::_16K (0xb) 16384 clock cycles
        */
        __attribute__((always_inline)) Register& setEWOFFSET(target::wdt::EWCTRL::EWOFFSET value) volatile {
          raw = (raw & ~(0xF << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0xF << 0));
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
          Gets Early Warning Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEW() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Early Warning Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEW(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
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
          Gets Early Warning Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEW() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Early Warning Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEW(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
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
          Gets Early Warning
          @return boolean value
        */
        __attribute__((always_inline)) bool getEW() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Early Warning
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEW(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
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
      Clear
    */
    namespace CLEAR {
      enum class CLEAR {
        // Clear Key
        KEY = 0xa5,
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
          Gets Watchdog Clear
          @return enumeration value:
          target::wdt::CLEAR::CLEAR::KEY (0xa5) Clear Key
        */
        __attribute__((always_inline)) target::wdt::CLEAR::CLEAR getCLEAR() volatile {
          return static_cast<target::wdt::CLEAR::CLEAR>((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Watchdog Clear
          @param value enumeration value:
          target::wdt::CLEAR::CLEAR::KEY (0xa5) Clear Key
        */
        __attribute__((always_inline)) Register& setCLEAR(target::wdt::CLEAR::CLEAR value) volatile {
          raw = (raw & ~(0xFF << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0xFF << 0));
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
          char _space_CONFIG[0x1];
          /**
            Configuration
          */
          CONFIG::Register CONFIG;
        };
        struct {
          char _space_EWCTRL[0x2];
          /**
            Early Warning Interrupt Control
          */
          EWCTRL::Register EWCTRL;
        };
        struct {
          char _space_INTENCLR[0x4];
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0x5];
          /**
            Interrupt Enable Set
          */
          INTENSET::Register INTENSET;
        };
        struct {
          char _space_INTFLAG[0x6];
          /**
            Interrupt Flag Status and Clear
          */
          INTFLAG::Register INTFLAG;
        };
        struct {
          char _space_STATUS[0x7];
          /**
            Status
          */
          STATUS::Register STATUS;
        };
        struct {
          char _space_CLEAR[0x8];
          /**
            Clear
          */
          CLEAR::Register CLEAR;
        };
      };
    };
  }
  
  extern volatile wdt::Peripheral WDT;
}