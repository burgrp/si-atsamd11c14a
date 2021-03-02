namespace target {
  namespace evsys {
    
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
          Gets Generic Clock Requests
          @return boolean value
        */
        __attribute__((always_inline)) bool getGCLKREQ() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Generic Clock Requests
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setGCLKREQ(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel
    */
    namespace CHANNEL {
      enum class PATH {
        // Synchronous path
        SYNCHRONOUS = 0x0,
        // Resynchronized path
        RESYNCHRONIZED = 0x1,
        // Asynchronous path
        ASYNCHRONOUS = 0x2,
      };
      
      enum class EDGSEL {
        // No event output when using the resynchronized or synchronous path
        NO_EVT_OUTPUT = 0x0,
        // Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
        RISING_EDGE = 0x1,
        // Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
        FALLING_EDGE = 0x2,
        // Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        BOTH_EDGES = 0x3,
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
          Gets Channel Selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCHANNEL() volatile {
          return ((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Channel Selection
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setCHANNEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets Software Event
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWEVT() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Software Event
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWEVT(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Event Generator Selection
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getEVGEN() volatile {
          return ((raw & (0x3F << 16)) >> 16);
        }
        /**
          Sets Event Generator Selection
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setEVGEN(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 16)) | ((((value)) << 16) & (0x3F << 16));
          return *(Register*)this;
        }
        /**
          Gets Path Selection
          @return enumeration value:
          target::evsys::CHANNEL::PATH::SYNCHRONOUS (0x0) Synchronous path
          target::evsys::CHANNEL::PATH::RESYNCHRONIZED (0x1) Resynchronized path
          target::evsys::CHANNEL::PATH::ASYNCHRONOUS (0x2) Asynchronous path
        */
        __attribute__((always_inline)) target::evsys::CHANNEL::PATH getPATH() volatile {
          return static_cast<target::evsys::CHANNEL::PATH>((raw & (0x3 << 24)) >> 24);
        }
        /**
          Sets Path Selection
          @param value enumeration value:
          target::evsys::CHANNEL::PATH::SYNCHRONOUS (0x0) Synchronous path
          target::evsys::CHANNEL::PATH::RESYNCHRONIZED (0x1) Resynchronized path
          target::evsys::CHANNEL::PATH::ASYNCHRONOUS (0x2) Asynchronous path
        */
        __attribute__((always_inline)) Register& setPATH(target::evsys::CHANNEL::PATH value) volatile {
          raw = (raw & ~(0x3 << 24)) | (((static_cast<unsigned long>(value)) << 24) & (0x3 << 24));
          return *(Register*)this;
        }
        /**
          Gets Edge Detection Selection
          @return enumeration value:
          target::evsys::CHANNEL::EDGSEL::NO_EVT_OUTPUT (0x0) No event output when using the resynchronized or synchronous path
          target::evsys::CHANNEL::EDGSEL::RISING_EDGE (0x1) Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
          target::evsys::CHANNEL::EDGSEL::FALLING_EDGE (0x2) Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
          target::evsys::CHANNEL::EDGSEL::BOTH_EDGES (0x3) Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        */
        __attribute__((always_inline)) target::evsys::CHANNEL::EDGSEL getEDGSEL() volatile {
          return static_cast<target::evsys::CHANNEL::EDGSEL>((raw & (0x3 << 26)) >> 26);
        }
        /**
          Sets Edge Detection Selection
          @param value enumeration value:
          target::evsys::CHANNEL::EDGSEL::NO_EVT_OUTPUT (0x0) No event output when using the resynchronized or synchronous path
          target::evsys::CHANNEL::EDGSEL::RISING_EDGE (0x1) Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path
          target::evsys::CHANNEL::EDGSEL::FALLING_EDGE (0x2) Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path
          target::evsys::CHANNEL::EDGSEL::BOTH_EDGES (0x3) Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path
        */
        __attribute__((always_inline)) Register& setEDGSEL(target::evsys::CHANNEL::EDGSEL value) volatile {
          raw = (raw & ~(0x3 << 26)) | (((static_cast<unsigned long>(value)) << 26) & (0x3 << 26));
          return *(Register*)this;
        }
      };
    };
    
    /**
      User Multiplexer
    */
    namespace USER {
      enum class CHANNEL {
        // No Channel Output Selected
        NO_CHANNEL_OUTPUT_SELECTED = 0x0,
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
          Gets User Multiplexer Selection
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getUSER() volatile {
          return ((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets User Multiplexer Selection
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setUSER(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
        /**
          Gets Channel Event Selection
          @return enumeration value:
          target::evsys::USER::CHANNEL::NO_CHANNEL_OUTPUT_SELECTED (0x0) No Channel Output Selected
        */
        __attribute__((always_inline)) target::evsys::USER::CHANNEL getCHANNEL() volatile {
          return static_cast<target::evsys::USER::CHANNEL>((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Channel Event Selection
          @param value enumeration value:
          target::evsys::USER::CHANNEL::NO_CHANNEL_OUTPUT_SELECTED (0x0) No Channel Output Selected
        */
        __attribute__((always_inline)) Register& setCHANNEL(target::evsys::USER::CHANNEL value) volatile {
          raw = (raw & ~(0xF << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Channel Status
    */
    namespace CHSTATUS {
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
          Gets Channel 0 User Ready
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSRRDY(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 User Ready
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSRRDY(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Channel 0 Busy
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getCHBUSY(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Busy
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCHBUSY(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
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
          Gets Channel 0 Overrun Interrupt Enable
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Overrun Interrupt Enable
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Channel 0 Event Detection Interrupt Enable
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getEVD(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Event Detection Interrupt Enable
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEVD(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
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
          Gets Channel 0 Overrun Interrupt Enable
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Overrun Interrupt Enable
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Channel 0 Event Detection Interrupt Enable
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getEVD(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Event Detection Interrupt Enable
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEVD(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
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
          Gets Channel 0 Overrun
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVR(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Overrun
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVR(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Channel 0 Event Detection
          @param index in range 0..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getEVD(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Channel 0 Event Detection
          @param index in range 0..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEVD(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
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
          char _space_CHANNEL[0x4];
          /**
            Channel
          */
          CHANNEL::Register CHANNEL;
        };
        struct {
          char _space_USER[0x8];
          /**
            User Multiplexer
          */
          USER::Register USER;
        };
        struct {
          char _space_CHSTATUS[0xc];
          /**
            Channel Status
          */
          CHSTATUS::Register CHSTATUS;
        };
        struct {
          char _space_INTENCLR[0x10];
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0x14];
          /**
            Interrupt Enable Set
          */
          INTENSET::Register INTENSET;
        };
        struct {
          char _space_INTFLAG[0x18];
          /**
            Interrupt Flag Status and Clear
          */
          INTFLAG::Register INTFLAG;
        };
      };
    };
  }
  
  extern volatile evsys::Peripheral EVSYS;
}