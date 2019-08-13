namespace target {
  namespace nvic {
    namespace reg {
      
      /**
        Interrupt Set Enable Register
      */
      class ISER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SETENA
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSETENA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets SETENA
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setSETENA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Interrupt Clear Enable Register
      */
      class ICER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CLRENA
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCLRENA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets CLRENA
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setCLRENA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Interrupt Set-Pending Register
      */
      class ISPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SETPEND
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getSETPEND() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets SETPEND
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setSETPEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Interrupt Clear-Pending Register
      */
      class ICPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CLRPEND
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getCLRPEND() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets CLRPEND
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setCLRPEND(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Interrupt Priority Register 0
      */
      class IPR0 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PRI_00
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_00() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets PRI_00
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_00(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PRI_01
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_01() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets PRI_01
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_01(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets PRI_02
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_02() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PRI_02
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_02(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PRI_03
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_03() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets PRI_03
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_03(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        Interrupt Priority Register 1
      */
      class IPR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PRI_40
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_40() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets PRI_40
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_40(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PRI_41
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_41() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets PRI_41
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_41(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets PRI_42
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_42() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PRI_42
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_42(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PRI_43
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_43() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets PRI_43
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_43(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        Interrupt Priority Register 2
      */
      class IPR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PRI_80
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_80() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets PRI_80
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_80(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PRI_81
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_81() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets PRI_81
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_81(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets PRI_82
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_82() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PRI_82
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_82(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PRI_83
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_83() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets PRI_83
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_83(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        Interrupt Priority Register 3
      */
      class IPR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PRI_120
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_120() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets PRI_120
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_120(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PRI_121
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_121() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets PRI_121
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_121(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets PRI_122
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_122() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PRI_122
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_122(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PRI_123
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_123() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets PRI_123
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_123(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        Interrupt Priority Register 4
      */
      class IPR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PRI_160
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_160() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets PRI_160
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_160(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PRI_161
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_161() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets PRI_161
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_161(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets PRI_162
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_162() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PRI_162
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_162(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PRI_163
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_163() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets PRI_163
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_163(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        Interrupt Priority Register 5
      */
      class IPR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PRI_200
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_200() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets PRI_200
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_200(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PRI_201
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_201() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets PRI_201
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_201(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets PRI_202
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_202() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PRI_202
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_202(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PRI_203
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_203() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets PRI_203
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_203(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        Interrupt Priority Register 6
      */
      class IPR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PRI_240
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_240() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets PRI_240
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_240(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PRI_241
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_241() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets PRI_241
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_241(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets PRI_242
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_242() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PRI_242
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_242(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PRI_243
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_243() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets PRI_243
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_243(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
        }
      };
      
      /**
        Interrupt Priority Register 7
      */
      class IPR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PRI_280
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_280() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets PRI_280
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_280(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PRI_281
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_281() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets PRI_281
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_281(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets PRI_282
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_282() volatile {
          return (raw & (0x3 << 22)) >> 22;
        }
        /**
          Sets PRI_282
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_282(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
        }
        /**
          Gets PRI_283
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPRI_283() volatile {
          return (raw & (0x3 << 30)) >> 30;
        }
        /**
          Sets PRI_283
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPRI_283(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 30)) | ((value << 30) & (0x3 << 30));
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
          volatile reg::ISER ISER;
        };
        struct {
          volatile char _space_ICER[0x80];
          /**
            Interrupt Clear Enable Register
          */
          volatile reg::ICER ICER;
        };
        struct {
          volatile char _space_ISPR[0x100];
          /**
            Interrupt Set-Pending Register
          */
          volatile reg::ISPR ISPR;
        };
        struct {
          volatile char _space_ICPR[0x180];
          /**
            Interrupt Clear-Pending Register
          */
          volatile reg::ICPR ICPR;
        };
        struct {
          volatile char _space_IPR0[0x300];
          /**
            Interrupt Priority Register 0
          */
          volatile reg::IPR0 IPR0;
        };
        struct {
          volatile char _space_IPR1[0x304];
          /**
            Interrupt Priority Register 1
          */
          volatile reg::IPR1 IPR1;
        };
        struct {
          volatile char _space_IPR2[0x308];
          /**
            Interrupt Priority Register 2
          */
          volatile reg::IPR2 IPR2;
        };
        struct {
          volatile char _space_IPR3[0x30c];
          /**
            Interrupt Priority Register 3
          */
          volatile reg::IPR3 IPR3;
        };
        struct {
          volatile char _space_IPR4[0x310];
          /**
            Interrupt Priority Register 4
          */
          volatile reg::IPR4 IPR4;
        };
        struct {
          volatile char _space_IPR5[0x314];
          /**
            Interrupt Priority Register 5
          */
          volatile reg::IPR5 IPR5;
        };
        struct {
          volatile char _space_IPR6[0x318];
          /**
            Interrupt Priority Register 6
          */
          volatile reg::IPR6 IPR6;
        };
        struct {
          volatile char _space_IPR7[0x31c];
          /**
            Interrupt Priority Register 7
          */
          volatile reg::IPR7 IPR7;
        };
      };
    };
  }
  
  extern nvic::Peripheral NVIC;
}