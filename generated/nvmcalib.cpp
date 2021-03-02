namespace target {
  namespace nvmcalib {
    
    /**
      Calibration data that are measured and written during production test, index 0
    */
    namespace SOFT0 {
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
          Gets ADC Linearity Calibration, bits 0..4. Should be written to CALIB register.
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getADC_LINEARITY_LSB() volatile {
          return ((raw & (0x1F << 27)) >> 27);
        }
        /**
          Sets ADC Linearity Calibration, bits 0..4. Should be written to CALIB register.
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setADC_LINEARITY_LSB(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 27)) | ((((value)) << 27) & (0x1F << 27));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Calibration data that are measured and written during production test, index 1
    */
    namespace SOFT1 {
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
          Gets ADC Linearity Calibration, bits 5..7. Should be written to CALIB register.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getADC_LINEARITY_MSB() volatile {
          return ((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets ADC Linearity Calibration, bits 5..7. Should be written to CALIB register.
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setADC_LINEARITY_MSB(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets ADC Bias Calibration. Should be written to CALIB register.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getADC_BIASCAL() volatile {
          return ((raw & (0x7 << 3)) >> 3);
        }
        /**
          Sets ADC Bias Calibration. Should be written to CALIB register.
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setADC_BIASCAL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 3)) | ((((value)) << 3) & (0x7 << 3));
          return *(Register*)this;
        }
        /**
          Gets OSC32KCalibration. Should be written to OSC32K register.
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getOSC32K_CAL() volatile {
          return ((raw & (0x7F << 6)) >> 6);
        }
        /**
          Sets OSC32KCalibration. Should be written to OSC32K register.
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setOSC32K_CAL(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 6)) | ((((value)) << 6) & (0x7F << 6));
          return *(Register*)this;
        }
        /**
          Gets USB TRANSN calibration value. Should be written to the USB PADCAL register.
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getUSB_TRANSN() volatile {
          return ((raw & (0x1F << 13)) >> 13);
        }
        /**
          Sets USB TRANSN calibration value. Should be written to the USB PADCAL register.
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setUSB_TRANSN(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 13)) | ((((value)) << 13) & (0x1F << 13));
          return *(Register*)this;
        }
        /**
          Gets USB TRANSP calibration value. Should be written to the USB PADCAL register.
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getUSB_TRANSP() volatile {
          return ((raw & (0x1F << 18)) >> 18);
        }
        /**
          Sets USB TRANSP calibration value. Should be written to the USB PADCAL register.
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setUSB_TRANSP(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 18)) | ((((value)) << 18) & (0x1F << 18));
          return *(Register*)this;
        }
        /**
          Gets USB TRIM calibration value. Should be written to the USB PADCAL register.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getUSB_TRIM() volatile {
          return ((raw & (0x7 << 23)) >> 23);
        }
        /**
          Sets USB TRIM calibration value. Should be written to the USB PADCAL register.
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setUSB_TRIM(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 23)) | ((((value)) << 23) & (0x7 << 23));
          return *(Register*)this;
        }
        /**
          Gets DFLL48M Coarse calibration value. Should be written to the SYSCTRL DFLLVAL register.
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getDFLL48M_COARSE_CAL() volatile {
          return ((raw & (0x3F << 26)) >> 26);
        }
        /**
          Sets DFLL48M Coarse calibration value. Should be written to the SYSCTRL DFLLVAL register.
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setDFLL48M_COARSE_CAL(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 26)) | ((((value)) << 26) & (0x3F << 26));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Calibration data that are measured and written during production test, index 0
          */
          SOFT0::Register SOFT0;
        };
        struct {
          char _space_SOFT1[0x4];
          /**
            Calibration data that are measured and written during production test, index 1
          */
          SOFT1::Register SOFT1;
        };
      };
    };
  }
  
  extern volatile nvmcalib::Peripheral NVMCALIB;
}