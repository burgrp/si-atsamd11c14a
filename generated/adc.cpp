namespace target {
  namespace adc {
    
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
      };
    };
    
    /**
      Reference Control
    */
    namespace REFCTRL {
      enum class REFSEL {
        // 1.0V voltage reference
        INT1V = 0x0,
        // 1/1.48 VDDANA
        INTVCC0 = 0x1,
        // 1/2 VDDANA (only for VDDANA > 2.0V)
        INTVCC1 = 0x2,
        // External reference
        AREFA = 0x3,
        // External reference
        AREFB = 0x4,
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
          Gets Reference Selection
          @return enumeration value:
          target::adc::REFCTRL::REFSEL::INT1V (0x0) 1.0V voltage reference
          target::adc::REFCTRL::REFSEL::INTVCC0 (0x1) 1/1.48 VDDANA
          target::adc::REFCTRL::REFSEL::INTVCC1 (0x2) 1/2 VDDANA (only for VDDANA > 2.0V)
          target::adc::REFCTRL::REFSEL::AREFA (0x3) External reference
          target::adc::REFCTRL::REFSEL::AREFB (0x4) External reference
        */
        __attribute__((always_inline)) target::adc::REFCTRL::REFSEL getREFSEL() volatile {
          return static_cast<target::adc::REFCTRL::REFSEL>((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Reference Selection
          @param value enumeration value:
          target::adc::REFCTRL::REFSEL::INT1V (0x0) 1.0V voltage reference
          target::adc::REFCTRL::REFSEL::INTVCC0 (0x1) 1/1.48 VDDANA
          target::adc::REFCTRL::REFSEL::INTVCC1 (0x2) 1/2 VDDANA (only for VDDANA > 2.0V)
          target::adc::REFCTRL::REFSEL::AREFA (0x3) External reference
          target::adc::REFCTRL::REFSEL::AREFB (0x4) External reference
        */
        __attribute__((always_inline)) Register& setREFSEL(target::adc::REFCTRL::REFSEL value) volatile {
          raw = (raw & ~(0xF << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Reference Buffer Offset Compensation Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getREFCOMP() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Reference Buffer Offset Compensation Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREFCOMP(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Average Control
    */
    namespace AVGCTRL {
      enum class SAMPLENUM {
        // 1 sample
        _1_SAMPLE = 0x0,
        // 2 samples
        _2_SAMPLES = 0x1,
        // 4 samples
        _4_SAMPLES = 0x2,
        // 8 samples
        _8_SAMPLES = 0x3,
        // 16 samples
        _16_SAMPLES = 0x4,
        // 32 samples
        _32_SAMPLES = 0x5,
        // 64 samples
        _64_SAMPLES = 0x6,
        // 128 samples
        _128_SAMPLES = 0x7,
        // 256 samples
        _256_SAMPLES = 0x8,
        // 512 samples
        _512_SAMPLES = 0x9,
        // 1024 samples
        _1024_SAMPLES = 0xa,
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
          Gets Number of Samples to be Collected
          @return enumeration value:
          target::adc::AVGCTRL::SAMPLENUM::_1_SAMPLE (0x0) 1 sample
          target::adc::AVGCTRL::SAMPLENUM::_2_SAMPLES (0x1) 2 samples
          target::adc::AVGCTRL::SAMPLENUM::_4_SAMPLES (0x2) 4 samples
          target::adc::AVGCTRL::SAMPLENUM::_8_SAMPLES (0x3) 8 samples
          target::adc::AVGCTRL::SAMPLENUM::_16_SAMPLES (0x4) 16 samples
          target::adc::AVGCTRL::SAMPLENUM::_32_SAMPLES (0x5) 32 samples
          target::adc::AVGCTRL::SAMPLENUM::_64_SAMPLES (0x6) 64 samples
          target::adc::AVGCTRL::SAMPLENUM::_128_SAMPLES (0x7) 128 samples
          target::adc::AVGCTRL::SAMPLENUM::_256_SAMPLES (0x8) 256 samples
          target::adc::AVGCTRL::SAMPLENUM::_512_SAMPLES (0x9) 512 samples
          target::adc::AVGCTRL::SAMPLENUM::_1024_SAMPLES (0xa) 1024 samples
        */
        __attribute__((always_inline)) target::adc::AVGCTRL::SAMPLENUM getSAMPLENUM() volatile {
          return static_cast<target::adc::AVGCTRL::SAMPLENUM>((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Number of Samples to be Collected
          @param value enumeration value:
          target::adc::AVGCTRL::SAMPLENUM::_1_SAMPLE (0x0) 1 sample
          target::adc::AVGCTRL::SAMPLENUM::_2_SAMPLES (0x1) 2 samples
          target::adc::AVGCTRL::SAMPLENUM::_4_SAMPLES (0x2) 4 samples
          target::adc::AVGCTRL::SAMPLENUM::_8_SAMPLES (0x3) 8 samples
          target::adc::AVGCTRL::SAMPLENUM::_16_SAMPLES (0x4) 16 samples
          target::adc::AVGCTRL::SAMPLENUM::_32_SAMPLES (0x5) 32 samples
          target::adc::AVGCTRL::SAMPLENUM::_64_SAMPLES (0x6) 64 samples
          target::adc::AVGCTRL::SAMPLENUM::_128_SAMPLES (0x7) 128 samples
          target::adc::AVGCTRL::SAMPLENUM::_256_SAMPLES (0x8) 256 samples
          target::adc::AVGCTRL::SAMPLENUM::_512_SAMPLES (0x9) 512 samples
          target::adc::AVGCTRL::SAMPLENUM::_1024_SAMPLES (0xa) 1024 samples
        */
        __attribute__((always_inline)) Register& setSAMPLENUM(target::adc::AVGCTRL::SAMPLENUM value) volatile {
          raw = (raw & ~(0xF << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Adjusting Result / Division Coefficient
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getADJRES() volatile {
          return ((raw & (0x7 << 4)) >> 4);
        }
        /**
          Sets Adjusting Result / Division Coefficient
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setADJRES(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((((value)) << 4) & (0x7 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Sampling Time Control
    */
    namespace SAMPCTRL {
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
          Gets Sampling Time Length
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getSAMPLEN() volatile {
          return ((raw & (0x3F << 0)) >> 0);
        }
        /**
          Sets Sampling Time Length
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setSAMPLEN(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control B
    */
    namespace CTRLB {
      enum class RESSEL {
        // 12-bit result
        _12BIT = 0x0,
        // For averaging mode output
        _16BIT = 0x1,
        // 10-bit result
        _10BIT = 0x2,
        // 8-bit result
        _8BIT = 0x3,
      };
      
      enum class PRESCALER {
        // Peripheral clock divided by 4
        DIV4 = 0x0,
        // Peripheral clock divided by 8
        DIV8 = 0x1,
        // Peripheral clock divided by 16
        DIV16 = 0x2,
        // Peripheral clock divided by 32
        DIV32 = 0x3,
        // Peripheral clock divided by 64
        DIV64 = 0x4,
        // Peripheral clock divided by 128
        DIV128 = 0x5,
        // Peripheral clock divided by 256
        DIV256 = 0x6,
        // Peripheral clock divided by 512
        DIV512 = 0x7,
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
          Gets Differential Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIFFMODE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Differential Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIFFMODE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Left-Adjusted Result
          @return boolean value
        */
        __attribute__((always_inline)) bool getLEFTADJ() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Left-Adjusted Result
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLEFTADJ(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Free Running Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getFREERUN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Free Running Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFREERUN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Digital Correction Logic Enabled
          @return boolean value
        */
        __attribute__((always_inline)) bool getCORREN() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Digital Correction Logic Enabled
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCORREN(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Conversion Result Resolution
          @return enumeration value:
          target::adc::CTRLB::RESSEL::_12BIT (0x0) 12-bit result
          target::adc::CTRLB::RESSEL::_16BIT (0x1) For averaging mode output
          target::adc::CTRLB::RESSEL::_10BIT (0x2) 10-bit result
          target::adc::CTRLB::RESSEL::_8BIT (0x3) 8-bit result
        */
        __attribute__((always_inline)) target::adc::CTRLB::RESSEL getRESSEL() volatile {
          return static_cast<target::adc::CTRLB::RESSEL>((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Conversion Result Resolution
          @param value enumeration value:
          target::adc::CTRLB::RESSEL::_12BIT (0x0) 12-bit result
          target::adc::CTRLB::RESSEL::_16BIT (0x1) For averaging mode output
          target::adc::CTRLB::RESSEL::_10BIT (0x2) 10-bit result
          target::adc::CTRLB::RESSEL::_8BIT (0x3) 8-bit result
        */
        __attribute__((always_inline)) Register& setRESSEL(target::adc::CTRLB::RESSEL value) volatile {
          raw = (raw & ~(0x3 << 4)) | (((static_cast<unsigned long>(value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Prescaler Configuration
          @return enumeration value:
          target::adc::CTRLB::PRESCALER::DIV4 (0x0) Peripheral clock divided by 4
          target::adc::CTRLB::PRESCALER::DIV8 (0x1) Peripheral clock divided by 8
          target::adc::CTRLB::PRESCALER::DIV16 (0x2) Peripheral clock divided by 16
          target::adc::CTRLB::PRESCALER::DIV32 (0x3) Peripheral clock divided by 32
          target::adc::CTRLB::PRESCALER::DIV64 (0x4) Peripheral clock divided by 64
          target::adc::CTRLB::PRESCALER::DIV128 (0x5) Peripheral clock divided by 128
          target::adc::CTRLB::PRESCALER::DIV256 (0x6) Peripheral clock divided by 256
          target::adc::CTRLB::PRESCALER::DIV512 (0x7) Peripheral clock divided by 512
        */
        __attribute__((always_inline)) target::adc::CTRLB::PRESCALER getPRESCALER() volatile {
          return static_cast<target::adc::CTRLB::PRESCALER>((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Prescaler Configuration
          @param value enumeration value:
          target::adc::CTRLB::PRESCALER::DIV4 (0x0) Peripheral clock divided by 4
          target::adc::CTRLB::PRESCALER::DIV8 (0x1) Peripheral clock divided by 8
          target::adc::CTRLB::PRESCALER::DIV16 (0x2) Peripheral clock divided by 16
          target::adc::CTRLB::PRESCALER::DIV32 (0x3) Peripheral clock divided by 32
          target::adc::CTRLB::PRESCALER::DIV64 (0x4) Peripheral clock divided by 64
          target::adc::CTRLB::PRESCALER::DIV128 (0x5) Peripheral clock divided by 128
          target::adc::CTRLB::PRESCALER::DIV256 (0x6) Peripheral clock divided by 256
          target::adc::CTRLB::PRESCALER::DIV512 (0x7) Peripheral clock divided by 512
        */
        __attribute__((always_inline)) Register& setPRESCALER(target::adc::CTRLB::PRESCALER value) volatile {
          raw = (raw & ~(0x7 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Window Monitor Control
    */
    namespace WINCTRL {
      enum class WINMODE {
        // No window mode (default)
        DISABLE = 0x0,
        // Mode 1: RESULT > WINLT
        MODE1 = 0x1,
        // Mode 2: RESULT < WINUT
        MODE2 = 0x2,
        // Mode 3: WINLT < RESULT < WINUT
        MODE3 = 0x3,
        // Mode 4: !(WINLT < RESULT < WINUT)
        MODE4 = 0x4,
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
          Gets Window Monitor Mode
          @return enumeration value:
          target::adc::WINCTRL::WINMODE::DISABLE (0x0) No window mode (default)
          target::adc::WINCTRL::WINMODE::MODE1 (0x1) Mode 1: RESULT > WINLT
          target::adc::WINCTRL::WINMODE::MODE2 (0x2) Mode 2: RESULT < WINUT
          target::adc::WINCTRL::WINMODE::MODE3 (0x3) Mode 3: WINLT < RESULT < WINUT
          target::adc::WINCTRL::WINMODE::MODE4 (0x4) Mode 4: !(WINLT < RESULT < WINUT)
        */
        __attribute__((always_inline)) target::adc::WINCTRL::WINMODE getWINMODE() volatile {
          return static_cast<target::adc::WINCTRL::WINMODE>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Window Monitor Mode
          @param value enumeration value:
          target::adc::WINCTRL::WINMODE::DISABLE (0x0) No window mode (default)
          target::adc::WINCTRL::WINMODE::MODE1 (0x1) Mode 1: RESULT > WINLT
          target::adc::WINCTRL::WINMODE::MODE2 (0x2) Mode 2: RESULT < WINUT
          target::adc::WINCTRL::WINMODE::MODE3 (0x3) Mode 3: WINLT < RESULT < WINUT
          target::adc::WINCTRL::WINMODE::MODE4 (0x4) Mode 4: !(WINLT < RESULT < WINUT)
        */
        __attribute__((always_inline)) Register& setWINMODE(target::adc::WINCTRL::WINMODE value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Software Trigger
    */
    namespace SWTRIG {
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
          Gets ADC Conversion Flush
          @return boolean value
        */
        __attribute__((always_inline)) bool getFLUSH() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets ADC Conversion Flush
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFLUSH(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets ADC Start Conversion
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTART() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets ADC Start Conversion
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTART(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Input Control
    */
    namespace INPUTCTRL {
      enum class MUXPOS {
        // ADC AIN0 Pin
        PIN0 = 0x0,
        // ADC AIN1 Pin
        PIN1 = 0x1,
        // ADC AIN2 Pin
        PIN2 = 0x2,
        // ADC AIN3 Pin
        PIN3 = 0x3,
        // ADC AIN4 Pin
        PIN4 = 0x4,
        // ADC AIN5 Pin
        PIN5 = 0x5,
        // ADC AIN6 Pin
        PIN6 = 0x6,
        // ADC AIN7 Pin
        PIN7 = 0x7,
        // ADC AIN8 Pin
        PIN8 = 0x8,
        // ADC AIN9 Pin
        PIN9 = 0x9,
        // ADC AIN10 Pin
        PIN10 = 0xa,
        // ADC AIN11 Pin
        PIN11 = 0xb,
        // ADC AIN12 Pin
        PIN12 = 0xc,
        // ADC AIN13 Pin
        PIN13 = 0xd,
        // ADC AIN14 Pin
        PIN14 = 0xe,
        // ADC AIN15 Pin
        PIN15 = 0xf,
        // ADC AIN16 Pin
        PIN16 = 0x10,
        // ADC AIN17 Pin
        PIN17 = 0x11,
        // ADC AIN18 Pin
        PIN18 = 0x12,
        // ADC AIN19 Pin
        PIN19 = 0x13,
        // Temperature Reference
        TEMP = 0x18,
        // Bandgap Voltage
        BANDGAP = 0x19,
        // 1/4 Scaled Core Supply
        SCALEDCOREVCC = 0x1a,
        // 1/4 Scaled I/O Supply
        SCALEDIOVCC = 0x1b,
        // DAC Output
        DAC = 0x1c,
      };
      
      enum class MUXNEG {
        // ADC AIN0 Pin
        PIN0 = 0x0,
        // ADC AIN1 Pin
        PIN1 = 0x1,
        // ADC AIN2 Pin
        PIN2 = 0x2,
        // ADC AIN3 Pin
        PIN3 = 0x3,
        // ADC AIN4 Pin
        PIN4 = 0x4,
        // ADC AIN5 Pin
        PIN5 = 0x5,
        // ADC AIN6 Pin
        PIN6 = 0x6,
        // ADC AIN7 Pin
        PIN7 = 0x7,
        // Internal Ground
        GND = 0x18,
        // I/O Ground
        IOGND = 0x19,
      };
      
      enum class GAIN {
        // 1x
        _1X = 0x0,
        // 2x
        _2X = 0x1,
        // 4x
        _4X = 0x2,
        // 8x
        _8X = 0x3,
        // 16x
        _16X = 0x4,
        // 1/2x
        DIV2 = 0xf,
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
          Gets Positive Mux Input Selection
          @return enumeration value:
          target::adc::INPUTCTRL::MUXPOS::PIN0 (0x0) ADC AIN0 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN1 (0x1) ADC AIN1 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN2 (0x2) ADC AIN2 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN3 (0x3) ADC AIN3 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN4 (0x4) ADC AIN4 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN5 (0x5) ADC AIN5 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN6 (0x6) ADC AIN6 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN7 (0x7) ADC AIN7 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN8 (0x8) ADC AIN8 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN9 (0x9) ADC AIN9 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN10 (0xa) ADC AIN10 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN11 (0xb) ADC AIN11 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN12 (0xc) ADC AIN12 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN13 (0xd) ADC AIN13 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN14 (0xe) ADC AIN14 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN15 (0xf) ADC AIN15 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN16 (0x10) ADC AIN16 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN17 (0x11) ADC AIN17 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN18 (0x12) ADC AIN18 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN19 (0x13) ADC AIN19 Pin
          target::adc::INPUTCTRL::MUXPOS::TEMP (0x18) Temperature Reference
          target::adc::INPUTCTRL::MUXPOS::BANDGAP (0x19) Bandgap Voltage
          target::adc::INPUTCTRL::MUXPOS::SCALEDCOREVCC (0x1a) 1/4 Scaled Core Supply
          target::adc::INPUTCTRL::MUXPOS::SCALEDIOVCC (0x1b) 1/4 Scaled I/O Supply
          target::adc::INPUTCTRL::MUXPOS::DAC (0x1c) DAC Output
        */
        __attribute__((always_inline)) target::adc::INPUTCTRL::MUXPOS getMUXPOS() volatile {
          return static_cast<target::adc::INPUTCTRL::MUXPOS>((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets Positive Mux Input Selection
          @param value enumeration value:
          target::adc::INPUTCTRL::MUXPOS::PIN0 (0x0) ADC AIN0 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN1 (0x1) ADC AIN1 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN2 (0x2) ADC AIN2 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN3 (0x3) ADC AIN3 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN4 (0x4) ADC AIN4 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN5 (0x5) ADC AIN5 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN6 (0x6) ADC AIN6 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN7 (0x7) ADC AIN7 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN8 (0x8) ADC AIN8 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN9 (0x9) ADC AIN9 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN10 (0xa) ADC AIN10 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN11 (0xb) ADC AIN11 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN12 (0xc) ADC AIN12 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN13 (0xd) ADC AIN13 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN14 (0xe) ADC AIN14 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN15 (0xf) ADC AIN15 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN16 (0x10) ADC AIN16 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN17 (0x11) ADC AIN17 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN18 (0x12) ADC AIN18 Pin
          target::adc::INPUTCTRL::MUXPOS::PIN19 (0x13) ADC AIN19 Pin
          target::adc::INPUTCTRL::MUXPOS::TEMP (0x18) Temperature Reference
          target::adc::INPUTCTRL::MUXPOS::BANDGAP (0x19) Bandgap Voltage
          target::adc::INPUTCTRL::MUXPOS::SCALEDCOREVCC (0x1a) 1/4 Scaled Core Supply
          target::adc::INPUTCTRL::MUXPOS::SCALEDIOVCC (0x1b) 1/4 Scaled I/O Supply
          target::adc::INPUTCTRL::MUXPOS::DAC (0x1c) DAC Output
        */
        __attribute__((always_inline)) Register& setMUXPOS(target::adc::INPUTCTRL::MUXPOS value) volatile {
          raw = (raw & ~(0x1F << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
        /**
          Gets Negative Mux Input Selection
          @return enumeration value:
          target::adc::INPUTCTRL::MUXNEG::PIN0 (0x0) ADC AIN0 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN1 (0x1) ADC AIN1 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN2 (0x2) ADC AIN2 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN3 (0x3) ADC AIN3 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN4 (0x4) ADC AIN4 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN5 (0x5) ADC AIN5 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN6 (0x6) ADC AIN6 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN7 (0x7) ADC AIN7 Pin
          target::adc::INPUTCTRL::MUXNEG::GND (0x18) Internal Ground
          target::adc::INPUTCTRL::MUXNEG::IOGND (0x19) I/O Ground
        */
        __attribute__((always_inline)) target::adc::INPUTCTRL::MUXNEG getMUXNEG() volatile {
          return static_cast<target::adc::INPUTCTRL::MUXNEG>((raw & (0x1F << 8)) >> 8);
        }
        /**
          Sets Negative Mux Input Selection
          @param value enumeration value:
          target::adc::INPUTCTRL::MUXNEG::PIN0 (0x0) ADC AIN0 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN1 (0x1) ADC AIN1 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN2 (0x2) ADC AIN2 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN3 (0x3) ADC AIN3 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN4 (0x4) ADC AIN4 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN5 (0x5) ADC AIN5 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN6 (0x6) ADC AIN6 Pin
          target::adc::INPUTCTRL::MUXNEG::PIN7 (0x7) ADC AIN7 Pin
          target::adc::INPUTCTRL::MUXNEG::GND (0x18) Internal Ground
          target::adc::INPUTCTRL::MUXNEG::IOGND (0x19) I/O Ground
        */
        __attribute__((always_inline)) Register& setMUXNEG(target::adc::INPUTCTRL::MUXNEG value) volatile {
          raw = (raw & ~(0x1F << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x1F << 8));
          return *(Register*)this;
        }
        /**
          Gets Number of Input Channels Included in Scan
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getINPUTSCAN() volatile {
          return ((raw & (0xF << 16)) >> 16);
        }
        /**
          Sets Number of Input Channels Included in Scan
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setINPUTSCAN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((((value)) << 16) & (0xF << 16));
          return *(Register*)this;
        }
        /**
          Gets Positive Mux Setting Offset
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getINPUTOFFSET() volatile {
          return ((raw & (0xF << 20)) >> 20);
        }
        /**
          Sets Positive Mux Setting Offset
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setINPUTOFFSET(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((((value)) << 20) & (0xF << 20));
          return *(Register*)this;
        }
        /**
          Gets Gain Factor Selection
          @return enumeration value:
          target::adc::INPUTCTRL::GAIN::_1X (0x0) 1x
          target::adc::INPUTCTRL::GAIN::_2X (0x1) 2x
          target::adc::INPUTCTRL::GAIN::_4X (0x2) 4x
          target::adc::INPUTCTRL::GAIN::_8X (0x3) 8x
          target::adc::INPUTCTRL::GAIN::_16X (0x4) 16x
          target::adc::INPUTCTRL::GAIN::DIV2 (0xf) 1/2x
        */
        __attribute__((always_inline)) target::adc::INPUTCTRL::GAIN getGAIN() volatile {
          return static_cast<target::adc::INPUTCTRL::GAIN>((raw & (0xF << 24)) >> 24);
        }
        /**
          Sets Gain Factor Selection
          @param value enumeration value:
          target::adc::INPUTCTRL::GAIN::_1X (0x0) 1x
          target::adc::INPUTCTRL::GAIN::_2X (0x1) 2x
          target::adc::INPUTCTRL::GAIN::_4X (0x2) 4x
          target::adc::INPUTCTRL::GAIN::_8X (0x3) 8x
          target::adc::INPUTCTRL::GAIN::_16X (0x4) 16x
          target::adc::INPUTCTRL::GAIN::DIV2 (0xf) 1/2x
        */
        __attribute__((always_inline)) Register& setGAIN(target::adc::INPUTCTRL::GAIN value) volatile {
          raw = (raw & ~(0xF << 24)) | (((static_cast<unsigned long>(value)) << 24) & (0xF << 24));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Event Control
    */
    namespace EVCTRL {
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
          Gets Start Conversion Event In
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTARTEI() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Start Conversion Event In
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTARTEI(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Synchronization Event In
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYNCEI() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Synchronization Event In
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYNCEI(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Result Ready Event Out
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESRDYEO() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Result Ready Event Out
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESRDYEO(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Window Monitor Event Out
          @return boolean value
        */
        __attribute__((always_inline)) bool getWINMONEO() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Window Monitor Event Out
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWINMONEO(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
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
          Gets Result Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Result Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Overrun Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVERRUN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Overrun Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVERRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Window Monitor Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWINMON() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Window Monitor Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWINMON(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
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
          Gets Result Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Result Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Overrun Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVERRUN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Overrun Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVERRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Window Monitor Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWINMON() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Window Monitor Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWINMON(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
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
          Gets Result Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Result Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Overrun
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVERRUN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Overrun
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVERRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Window Monitor
          @return boolean value
        */
        __attribute__((always_inline)) bool getWINMON() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Window Monitor
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWINMON(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
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
      Result
    */
    namespace RESULT {
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
          Gets Result Conversion Value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getRESULT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Result Conversion Value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setRESULT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Window Monitor Lower Threshold
    */
    namespace WINLT {
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
          Gets Window Lower Threshold
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getWINLT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Window Lower Threshold
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setWINLT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Window Monitor Upper Threshold
    */
    namespace WINUT {
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
          Gets Window Upper Threshold
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getWINUT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Window Upper Threshold
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setWINUT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Gain Correction
    */
    namespace GAINCORR {
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
          Gets Gain Correction Value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getGAINCORR() volatile {
          return ((raw & (0xFFF << 0)) >> 0);
        }
        /**
          Sets Gain Correction Value
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setGAINCORR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((((value)) << 0) & (0xFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Offset Correction
    */
    namespace OFFSETCORR {
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
          Gets Offset Correction Value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getOFFSETCORR() volatile {
          return ((raw & (0xFFF << 0)) >> 0);
        }
        /**
          Sets Offset Correction Value
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setOFFSETCORR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((((value)) << 0) & (0xFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Calibration
    */
    namespace CALIB {
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
          Gets Linearity Calibration Value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getLINEARITY_CAL() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Linearity Calibration Value
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setLINEARITY_CAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Bias Calibration Value
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getBIAS_CAL() volatile {
          return ((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Bias Calibration Value
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setBIAS_CAL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((((value)) << 8) & (0x7 << 8));
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
          Gets Debug Run
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBGRUN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Debug Run
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBGRUN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
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
          char _space_REFCTRL[0x1];
          /**
            Reference Control
          */
          REFCTRL::Register REFCTRL;
        };
        struct {
          char _space_AVGCTRL[0x2];
          /**
            Average Control
          */
          AVGCTRL::Register AVGCTRL;
        };
        struct {
          char _space_SAMPCTRL[0x3];
          /**
            Sampling Time Control
          */
          SAMPCTRL::Register SAMPCTRL;
        };
        struct {
          char _space_CTRLB[0x4];
          /**
            Control B
          */
          CTRLB::Register CTRLB;
        };
        struct {
          char _space_WINCTRL[0x8];
          /**
            Window Monitor Control
          */
          WINCTRL::Register WINCTRL;
        };
        struct {
          char _space_SWTRIG[0xc];
          /**
            Software Trigger
          */
          SWTRIG::Register SWTRIG;
        };
        struct {
          char _space_INPUTCTRL[0x10];
          /**
            Input Control
          */
          INPUTCTRL::Register INPUTCTRL;
        };
        struct {
          char _space_EVCTRL[0x14];
          /**
            Event Control
          */
          EVCTRL::Register EVCTRL;
        };
        struct {
          char _space_INTENCLR[0x16];
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0x17];
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
        struct {
          char _space_STATUS[0x19];
          /**
            Status
          */
          STATUS::Register STATUS;
        };
        struct {
          char _space_RESULT[0x1a];
          /**
            Result
          */
          RESULT::Register RESULT;
        };
        struct {
          char _space_WINLT[0x1c];
          /**
            Window Monitor Lower Threshold
          */
          WINLT::Register WINLT;
        };
        struct {
          char _space_WINUT[0x20];
          /**
            Window Monitor Upper Threshold
          */
          WINUT::Register WINUT;
        };
        struct {
          char _space_GAINCORR[0x24];
          /**
            Gain Correction
          */
          GAINCORR::Register GAINCORR;
        };
        struct {
          char _space_OFFSETCORR[0x26];
          /**
            Offset Correction
          */
          OFFSETCORR::Register OFFSETCORR;
        };
        struct {
          char _space_CALIB[0x28];
          /**
            Calibration
          */
          CALIB::Register CALIB;
        };
        struct {
          char _space_DBGCTRL[0x2a];
          /**
            Debug Control
          */
          DBGCTRL::Register DBGCTRL;
        };
      };
    };
  }
  
  extern volatile adc::Peripheral ADC;
}