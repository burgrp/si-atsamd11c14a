namespace target {
  namespace ac {
    
    /**
      Control A
    */
    namespace CTRLA {
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
          Gets Run in Standby
          @return boolean value
        */
        __attribute__((always_inline)) bool getRUNSTDBY() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Run in Standby
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Low-Power Mux
          @return boolean value
        */
        __attribute__((always_inline)) bool getLPMUX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Low-Power Mux
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLPMUX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control B
    */
    namespace CTRLB {
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
          Gets Comparator 0 Start Comparison
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTART(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0 Start Comparison
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTART(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Event Control
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
          Gets Comparator 0 Event Output Enable
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOMPEO(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0 Event Output Enable
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOMPEO(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Comparator 0 Event Input
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOMPEI(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 0)))) >> (8 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0 Event Input
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOMPEI(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 0)))) | ((((value)) << (8 + 1 * (index - 0))) & (0x1 << (8 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Window 0 Event Output Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWINEO0() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Window 0 Event Output Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWINEO0(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
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
          Gets Comparator 0 Interrupt Enable
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOMP(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0 Interrupt Enable
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOMP(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Window 0 Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWIN0() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Window 0 Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWIN0(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
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
          Gets Comparator 0 Interrupt Enable
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOMP(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0 Interrupt Enable
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOMP(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Window 0 Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWIN0() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Window 0 Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWIN0(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
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
          Gets Comparator 0
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOMP(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOMP(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Window 0
          @return boolean value
        */
        __attribute__((always_inline)) bool getWIN0() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Window 0
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWIN0(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Status A
    */
    namespace STATUSA {
      enum class WSTATE0 {
        // Signal is above window
        ABOVE = 0x0,
        // Signal is inside window
        INSIDE = 0x1,
        // Signal is below window
        BELOW = 0x2,
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
          Gets Comparator 0 Current State
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTATE(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0 Current State
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTATE(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Window 0 Current State
          @return enumeration value:
          target::ac::STATUSA::WSTATE0::ABOVE (0x0) Signal is above window
          target::ac::STATUSA::WSTATE0::INSIDE (0x1) Signal is inside window
          target::ac::STATUSA::WSTATE0::BELOW (0x2) Signal is below window
        */
        __attribute__((always_inline)) target::ac::STATUSA::WSTATE0 getWSTATE0() volatile {
          return static_cast<target::ac::STATUSA::WSTATE0>((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Window 0 Current State
          @param value enumeration value:
          target::ac::STATUSA::WSTATE0::ABOVE (0x0) Signal is above window
          target::ac::STATUSA::WSTATE0::INSIDE (0x1) Signal is inside window
          target::ac::STATUSA::WSTATE0::BELOW (0x2) Signal is below window
        */
        __attribute__((always_inline)) Register& setWSTATE0(target::ac::STATUSA::WSTATE0 value) volatile {
          raw = (raw & ~(0x3 << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Status B
    */
    namespace STATUSB {
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
          Gets Comparator 0 Ready
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getREADY(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0 Ready
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREADY(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
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
      Status C
    */
    namespace STATUSC {
      enum class WSTATE0 {
        // Signal is above window
        ABOVE = 0x0,
        // Signal is inside window
        INSIDE = 0x1,
        // Signal is below window
        BELOW = 0x2,
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
          Gets Comparator 0 Current State
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTATE(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Comparator 0 Current State
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTATE(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Window 0 Current State
          @return enumeration value:
          target::ac::STATUSC::WSTATE0::ABOVE (0x0) Signal is above window
          target::ac::STATUSC::WSTATE0::INSIDE (0x1) Signal is inside window
          target::ac::STATUSC::WSTATE0::BELOW (0x2) Signal is below window
        */
        __attribute__((always_inline)) target::ac::STATUSC::WSTATE0 getWSTATE0() volatile {
          return static_cast<target::ac::STATUSC::WSTATE0>((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Window 0 Current State
          @param value enumeration value:
          target::ac::STATUSC::WSTATE0::ABOVE (0x0) Signal is above window
          target::ac::STATUSC::WSTATE0::INSIDE (0x1) Signal is inside window
          target::ac::STATUSC::WSTATE0::BELOW (0x2) Signal is below window
        */
        __attribute__((always_inline)) Register& setWSTATE0(target::ac::STATUSC::WSTATE0 value) volatile {
          raw = (raw & ~(0x3 << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Window Control
    */
    namespace WINCTRL {
      enum class WINTSEL0 {
        // Interrupt on signal above window
        ABOVE = 0x0,
        // Interrupt on signal inside window
        INSIDE = 0x1,
        // Interrupt on signal below window
        BELOW = 0x2,
        // Interrupt on signal outside window
        OUTSIDE = 0x3,
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
          Gets Window 0 Mode Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWEN0() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Window 0 Mode Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWEN0(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Window 0 Interrupt Selection
          @return enumeration value:
          target::ac::WINCTRL::WINTSEL0::ABOVE (0x0) Interrupt on signal above window
          target::ac::WINCTRL::WINTSEL0::INSIDE (0x1) Interrupt on signal inside window
          target::ac::WINCTRL::WINTSEL0::BELOW (0x2) Interrupt on signal below window
          target::ac::WINCTRL::WINTSEL0::OUTSIDE (0x3) Interrupt on signal outside window
        */
        __attribute__((always_inline)) target::ac::WINCTRL::WINTSEL0 getWINTSEL0() volatile {
          return static_cast<target::ac::WINCTRL::WINTSEL0>((raw & (0x3 << 1)) >> 1);
        }
        /**
          Sets Window 0 Interrupt Selection
          @param value enumeration value:
          target::ac::WINCTRL::WINTSEL0::ABOVE (0x0) Interrupt on signal above window
          target::ac::WINCTRL::WINTSEL0::INSIDE (0x1) Interrupt on signal inside window
          target::ac::WINCTRL::WINTSEL0::BELOW (0x2) Interrupt on signal below window
          target::ac::WINCTRL::WINTSEL0::OUTSIDE (0x3) Interrupt on signal outside window
        */
        __attribute__((always_inline)) Register& setWINTSEL0(target::ac::WINCTRL::WINTSEL0 value) volatile {
          raw = (raw & ~(0x3 << 1)) | (((static_cast<unsigned long>(value)) << 1) & (0x3 << 1));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Comparator Control n
    */
    namespace COMPCTRL {
      enum class SPEED {
        // Low speed
        LOW = 0x0,
        // High speed
        HIGH = 0x1,
      };
      
      enum class INTSEL {
        // Interrupt on comparator output toggle
        TOGGLE = 0x0,
        // Interrupt on comparator output rising
        RISING = 0x1,
        // Interrupt on comparator output falling
        FALLING = 0x2,
        // Interrupt on end of comparison (single-shot mode only)
        EOC = 0x3,
      };
      
      enum class MUXNEG {
        // I/O pin 0
        PIN0 = 0x0,
        // I/O pin 1
        PIN1 = 0x1,
        // I/O pin 2
        PIN2 = 0x2,
        // I/O pin 3
        PIN3 = 0x3,
        // Ground
        GND = 0x4,
        // VDD scaler
        VSCALE = 0x5,
        // Internal bandgap voltage
        BANDGAP = 0x6,
        // DAC output
        DAC = 0x7,
      };
      
      enum class MUXPOS {
        // I/O pin 0
        PIN0 = 0x0,
        // I/O pin 1
        PIN1 = 0x1,
        // I/O pin 2
        PIN2 = 0x2,
        // I/O pin 3
        PIN3 = 0x3,
      };
      
      enum class OUT {
        // The output of COMPn is not routed to the COMPn I/O port
        OFF = 0x0,
        // The asynchronous output of COMPn is routed to the COMPn I/O port
        ASYNC = 0x1,
        // The synchronous output (including filtering) of COMPn is routed to the COMPn I/O port
        SYNC = 0x2,
      };
      
      enum class FLEN {
        // No filtering
        OFF = 0x0,
        // 3-bit majority function (2 of 3)
        MAJ3 = 0x1,
        // 5-bit majority function (3 of 5)
        MAJ5 = 0x2,
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
          Gets Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getENABLE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Single-Shot Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getSINGLE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Single-Shot Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSINGLE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Speed Selection
          @return enumeration value:
          target::ac::COMPCTRL::SPEED::LOW (0x0) Low speed
          target::ac::COMPCTRL::SPEED::HIGH (0x1) High speed
        */
        __attribute__((always_inline)) target::ac::COMPCTRL::SPEED getSPEED() volatile {
          return static_cast<target::ac::COMPCTRL::SPEED>((raw & (0x3 << 2)) >> 2);
        }
        /**
          Sets Speed Selection
          @param value enumeration value:
          target::ac::COMPCTRL::SPEED::LOW (0x0) Low speed
          target::ac::COMPCTRL::SPEED::HIGH (0x1) High speed
        */
        __attribute__((always_inline)) Register& setSPEED(target::ac::COMPCTRL::SPEED value) volatile {
          raw = (raw & ~(0x3 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x3 << 2));
          return *(Register*)this;
        }
        /**
          Gets Interrupt Selection
          @return enumeration value:
          target::ac::COMPCTRL::INTSEL::TOGGLE (0x0) Interrupt on comparator output toggle
          target::ac::COMPCTRL::INTSEL::RISING (0x1) Interrupt on comparator output rising
          target::ac::COMPCTRL::INTSEL::FALLING (0x2) Interrupt on comparator output falling
          target::ac::COMPCTRL::INTSEL::EOC (0x3) Interrupt on end of comparison (single-shot mode only)
        */
        __attribute__((always_inline)) target::ac::COMPCTRL::INTSEL getINTSEL() volatile {
          return static_cast<target::ac::COMPCTRL::INTSEL>((raw & (0x3 << 5)) >> 5);
        }
        /**
          Sets Interrupt Selection
          @param value enumeration value:
          target::ac::COMPCTRL::INTSEL::TOGGLE (0x0) Interrupt on comparator output toggle
          target::ac::COMPCTRL::INTSEL::RISING (0x1) Interrupt on comparator output rising
          target::ac::COMPCTRL::INTSEL::FALLING (0x2) Interrupt on comparator output falling
          target::ac::COMPCTRL::INTSEL::EOC (0x3) Interrupt on end of comparison (single-shot mode only)
        */
        __attribute__((always_inline)) Register& setINTSEL(target::ac::COMPCTRL::INTSEL value) volatile {
          raw = (raw & ~(0x3 << 5)) | (((static_cast<unsigned long>(value)) << 5) & (0x3 << 5));
          return *(Register*)this;
        }
        /**
          Gets Negative Input Mux Selection
          @return enumeration value:
          target::ac::COMPCTRL::MUXNEG::PIN0 (0x0) I/O pin 0
          target::ac::COMPCTRL::MUXNEG::PIN1 (0x1) I/O pin 1
          target::ac::COMPCTRL::MUXNEG::PIN2 (0x2) I/O pin 2
          target::ac::COMPCTRL::MUXNEG::PIN3 (0x3) I/O pin 3
          target::ac::COMPCTRL::MUXNEG::GND (0x4) Ground
          target::ac::COMPCTRL::MUXNEG::VSCALE (0x5) VDD scaler
          target::ac::COMPCTRL::MUXNEG::BANDGAP (0x6) Internal bandgap voltage
          target::ac::COMPCTRL::MUXNEG::DAC (0x7) DAC output
        */
        __attribute__((always_inline)) target::ac::COMPCTRL::MUXNEG getMUXNEG() volatile {
          return static_cast<target::ac::COMPCTRL::MUXNEG>((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Negative Input Mux Selection
          @param value enumeration value:
          target::ac::COMPCTRL::MUXNEG::PIN0 (0x0) I/O pin 0
          target::ac::COMPCTRL::MUXNEG::PIN1 (0x1) I/O pin 1
          target::ac::COMPCTRL::MUXNEG::PIN2 (0x2) I/O pin 2
          target::ac::COMPCTRL::MUXNEG::PIN3 (0x3) I/O pin 3
          target::ac::COMPCTRL::MUXNEG::GND (0x4) Ground
          target::ac::COMPCTRL::MUXNEG::VSCALE (0x5) VDD scaler
          target::ac::COMPCTRL::MUXNEG::BANDGAP (0x6) Internal bandgap voltage
          target::ac::COMPCTRL::MUXNEG::DAC (0x7) DAC output
        */
        __attribute__((always_inline)) Register& setMUXNEG(target::ac::COMPCTRL::MUXNEG value) volatile {
          raw = (raw & ~(0x7 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
        /**
          Gets Positive Input Mux Selection
          @return enumeration value:
          target::ac::COMPCTRL::MUXPOS::PIN0 (0x0) I/O pin 0
          target::ac::COMPCTRL::MUXPOS::PIN1 (0x1) I/O pin 1
          target::ac::COMPCTRL::MUXPOS::PIN2 (0x2) I/O pin 2
          target::ac::COMPCTRL::MUXPOS::PIN3 (0x3) I/O pin 3
        */
        __attribute__((always_inline)) target::ac::COMPCTRL::MUXPOS getMUXPOS() volatile {
          return static_cast<target::ac::COMPCTRL::MUXPOS>((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Positive Input Mux Selection
          @param value enumeration value:
          target::ac::COMPCTRL::MUXPOS::PIN0 (0x0) I/O pin 0
          target::ac::COMPCTRL::MUXPOS::PIN1 (0x1) I/O pin 1
          target::ac::COMPCTRL::MUXPOS::PIN2 (0x2) I/O pin 2
          target::ac::COMPCTRL::MUXPOS::PIN3 (0x3) I/O pin 3
        */
        __attribute__((always_inline)) Register& setMUXPOS(target::ac::COMPCTRL::MUXPOS value) volatile {
          raw = (raw & ~(0x3 << 12)) | (((static_cast<unsigned long>(value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Swap Inputs and Invert
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWAP() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Swap Inputs and Invert
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWAP(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Output
          @return enumeration value:
          target::ac::COMPCTRL::OUT::OFF (0x0) The output of COMPn is not routed to the COMPn I/O port
          target::ac::COMPCTRL::OUT::ASYNC (0x1) The asynchronous output of COMPn is routed to the COMPn I/O port
          target::ac::COMPCTRL::OUT::SYNC (0x2) The synchronous output (including filtering) of COMPn is routed to the COMPn I/O port
        */
        __attribute__((always_inline)) target::ac::COMPCTRL::OUT getOUT() volatile {
          return static_cast<target::ac::COMPCTRL::OUT>((raw & (0x3 << 16)) >> 16);
        }
        /**
          Sets Output
          @param value enumeration value:
          target::ac::COMPCTRL::OUT::OFF (0x0) The output of COMPn is not routed to the COMPn I/O port
          target::ac::COMPCTRL::OUT::ASYNC (0x1) The asynchronous output of COMPn is routed to the COMPn I/O port
          target::ac::COMPCTRL::OUT::SYNC (0x2) The synchronous output (including filtering) of COMPn is routed to the COMPn I/O port
        */
        __attribute__((always_inline)) Register& setOUT(target::ac::COMPCTRL::OUT value) volatile {
          raw = (raw & ~(0x3 << 16)) | (((static_cast<unsigned long>(value)) << 16) & (0x3 << 16));
          return *(Register*)this;
        }
        /**
          Gets Hysteresis Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHYST() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets Hysteresis Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHYST(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets Filter Length
          @return enumeration value:
          target::ac::COMPCTRL::FLEN::OFF (0x0) No filtering
          target::ac::COMPCTRL::FLEN::MAJ3 (0x1) 3-bit majority function (2 of 3)
          target::ac::COMPCTRL::FLEN::MAJ5 (0x2) 5-bit majority function (3 of 5)
        */
        __attribute__((always_inline)) target::ac::COMPCTRL::FLEN getFLEN() volatile {
          return static_cast<target::ac::COMPCTRL::FLEN>((raw & (0x7 << 24)) >> 24);
        }
        /**
          Sets Filter Length
          @param value enumeration value:
          target::ac::COMPCTRL::FLEN::OFF (0x0) No filtering
          target::ac::COMPCTRL::FLEN::MAJ3 (0x1) 3-bit majority function (2 of 3)
          target::ac::COMPCTRL::FLEN::MAJ5 (0x2) 5-bit majority function (3 of 5)
        */
        __attribute__((always_inline)) Register& setFLEN(target::ac::COMPCTRL::FLEN value) volatile {
          raw = (raw & ~(0x7 << 24)) | (((static_cast<unsigned long>(value)) << 24) & (0x7 << 24));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Scaler n
    */
    namespace SCALER {
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
          Gets Scaler Value
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getVALUE() volatile {
          return ((raw & (0x3F << 0)) >> 0);
        }
        /**
          Sets Scaler Value
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setVALUE(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
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
          char _space_CTRLB[0x1];
          /**
            Control B
          */
          CTRLB::Register CTRLB;
        };
        struct {
          char _space_EVCTRL[0x2];
          /**
            Event Control
          */
          EVCTRL::Register EVCTRL;
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
          char _space_STATUSA[0x8];
          /**
            Status A
          */
          STATUSA::Register STATUSA;
        };
        struct {
          char _space_STATUSB[0x9];
          /**
            Status B
          */
          STATUSB::Register STATUSB;
        };
        struct {
          char _space_STATUSC[0xa];
          /**
            Status C
          */
          STATUSC::Register STATUSC;
        };
        struct {
          char _space_WINCTRL[0xc];
          /**
            Window Control
          */
          WINCTRL::Register WINCTRL;
        };
        struct {
          char _space_COMPCTRL[0x10];
          /**
            Comparator Control n
          */
          COMPCTRL::Register COMPCTRL[2];
        };
        struct {
          char _space_SCALER[0x20];
          /**
            Scaler n
          */
          SCALER::Register SCALER[2];
        };
      };
    };
  }
  
  extern volatile ac::Peripheral AC;
}