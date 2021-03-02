namespace target {
  namespace nvic {
    
    /**
      Interrupt Set Enable Register
    */
    namespace ISER {
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
          Gets SETENA
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSETENA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets SETENA
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setSETENA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Clear Enable Register
    */
    namespace ICER {
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
          Gets CLRENA
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCLRENA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets CLRENA
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setCLRENA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Set-Pending Register
    */
    namespace ISPR {
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
          Gets SETPEND
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSETPEND() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets SETPEND
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setSETPEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Clear-Pending Register
    */
    namespace ICPR {
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
          Gets CLRPEND
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCLRPEND() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets CLRPEND
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setCLRPEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register 0
    */
    namespace IPR0 {
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
          Gets PRI_00
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_00() volatile {
          return ((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets PRI_00
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_00(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((((value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets PRI_01
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_01() volatile {
          return ((raw & (0x3 << 14)) >> 14);
        }
        /**
          Sets PRI_01
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_01(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
          return *(Register*)this;
        }
        /**
          Gets PRI_02
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_02() volatile {
          return ((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets PRI_02
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_02(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets PRI_03
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_03() volatile {
          return ((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets PRI_03
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_03(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((((value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register 1
    */
    namespace IPR1 {
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
          Gets PRI_40
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_40() volatile {
          return ((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets PRI_40
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_40(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((((value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets PRI_41
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_41() volatile {
          return ((raw & (0x3 << 14)) >> 14);
        }
        /**
          Sets PRI_41
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_41(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
          return *(Register*)this;
        }
        /**
          Gets PRI_42
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_42() volatile {
          return ((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets PRI_42
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_42(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets PRI_43
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_43() volatile {
          return ((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets PRI_43
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_43(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((((value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register 2
    */
    namespace IPR2 {
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
          Gets PRI_80
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_80() volatile {
          return ((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets PRI_80
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_80(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((((value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets PRI_81
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_81() volatile {
          return ((raw & (0x3 << 14)) >> 14);
        }
        /**
          Sets PRI_81
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_81(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
          return *(Register*)this;
        }
        /**
          Gets PRI_82
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_82() volatile {
          return ((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets PRI_82
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_82(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets PRI_83
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_83() volatile {
          return ((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets PRI_83
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_83(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((((value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register 3
    */
    namespace IPR3 {
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
          Gets PRI_120
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_120() volatile {
          return ((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets PRI_120
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_120(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((((value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets PRI_121
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_121() volatile {
          return ((raw & (0x3 << 14)) >> 14);
        }
        /**
          Sets PRI_121
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_121(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
          return *(Register*)this;
        }
        /**
          Gets PRI_122
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_122() volatile {
          return ((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets PRI_122
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_122(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets PRI_123
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_123() volatile {
          return ((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets PRI_123
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_123(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((((value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register 4
    */
    namespace IPR4 {
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
          Gets PRI_160
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_160() volatile {
          return ((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets PRI_160
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_160(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((((value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets PRI_161
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_161() volatile {
          return ((raw & (0x3 << 14)) >> 14);
        }
        /**
          Sets PRI_161
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_161(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
          return *(Register*)this;
        }
        /**
          Gets PRI_162
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_162() volatile {
          return ((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets PRI_162
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_162(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets PRI_163
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_163() volatile {
          return ((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets PRI_163
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_163(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((((value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register 5
    */
    namespace IPR5 {
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
          Gets PRI_200
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_200() volatile {
          return ((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets PRI_200
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_200(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((((value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets PRI_201
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_201() volatile {
          return ((raw & (0x3 << 14)) >> 14);
        }
        /**
          Sets PRI_201
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_201(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
          return *(Register*)this;
        }
        /**
          Gets PRI_202
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_202() volatile {
          return ((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets PRI_202
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_202(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets PRI_203
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_203() volatile {
          return ((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets PRI_203
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_203(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((((value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register 6
    */
    namespace IPR6 {
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
          Gets PRI_240
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_240() volatile {
          return ((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets PRI_240
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_240(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((((value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets PRI_241
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_241() volatile {
          return ((raw & (0x3 << 14)) >> 14);
        }
        /**
          Sets PRI_241
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_241(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
          return *(Register*)this;
        }
        /**
          Gets PRI_242
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_242() volatile {
          return ((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets PRI_242
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_242(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets PRI_243
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_243() volatile {
          return ((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets PRI_243
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_243(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((((value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt Priority Register 7
    */
    namespace IPR7 {
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
          Gets PRI_280
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_280() volatile {
          return ((raw & (0x3 << 6)) >> 6);
        }
        /**
          Sets PRI_280
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_280(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((((value)) << 6) & (0x3 << 6));
          return *(Register*)this;
        }
        /**
          Gets PRI_281
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_281() volatile {
          return ((raw & (0x3 << 14)) >> 14);
        }
        /**
          Sets PRI_281
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_281(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
          return *(Register*)this;
        }
        /**
          Gets PRI_282
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_282() volatile {
          return ((raw & (0x3 << 22)) >> 22);
        }
        /**
          Sets PRI_282
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_282(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
          return *(Register*)this;
        }
        /**
          Gets PRI_283
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_283() volatile {
          return ((raw & (0x3 << 30)) >> 30);
        }
        /**
          Sets PRI_283
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPRI_283(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((((value)) << 30) & (0x3 << 30));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Interrupt Set Enable Register
          */
          ISER::Register ISER;
        };
        struct {
          char _space_ICER[0x80];
          /**
            Interrupt Clear Enable Register
          */
          ICER::Register ICER;
        };
        struct {
          char _space_ISPR[0x100];
          /**
            Interrupt Set-Pending Register
          */
          ISPR::Register ISPR;
        };
        struct {
          char _space_ICPR[0x180];
          /**
            Interrupt Clear-Pending Register
          */
          ICPR::Register ICPR;
        };
        struct {
          char _space_IPR0[0x300];
          /**
            Interrupt Priority Register 0
          */
          IPR0::Register IPR0;
        };
        struct {
          char _space_IPR1[0x304];
          /**
            Interrupt Priority Register 1
          */
          IPR1::Register IPR1;
        };
        struct {
          char _space_IPR2[0x308];
          /**
            Interrupt Priority Register 2
          */
          IPR2::Register IPR2;
        };
        struct {
          char _space_IPR3[0x30c];
          /**
            Interrupt Priority Register 3
          */
          IPR3::Register IPR3;
        };
        struct {
          char _space_IPR4[0x310];
          /**
            Interrupt Priority Register 4
          */
          IPR4::Register IPR4;
        };
        struct {
          char _space_IPR5[0x314];
          /**
            Interrupt Priority Register 5
          */
          IPR5::Register IPR5;
        };
        struct {
          char _space_IPR6[0x318];
          /**
            Interrupt Priority Register 6
          */
          IPR6::Register IPR6;
        };
        struct {
          char _space_IPR7[0x31c];
          /**
            Interrupt Priority Register 7
          */
          IPR7::Register IPR7;
        };
      };
    };
  }
  
  extern volatile nvic::Peripheral NVIC;
}