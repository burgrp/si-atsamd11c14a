namespace target {
  namespace pm {
    
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
          Gets Clock Failure Detector Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCFDEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Clock Failure Detector Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCFDEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Backup Clock Select
          @return boolean value
        */
        __attribute__((always_inline)) bool getBKUPCLK() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Backup Clock Select
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBKUPCLK(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Sleep Mode
    */
    namespace SLEEP {
      enum class IDLE {
        // The CPU clock domain is stopped
        CPU = 0x0,
        // The CPU and AHB clock domains are stopped
        AHB = 0x1,
        // The CPU, AHB and APB clock domains are stopped
        APB = 0x2,
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
          Gets Idle Mode Configuration
          @return enumeration value:
          target::pm::SLEEP::IDLE::CPU (0x0) The CPU clock domain is stopped
          target::pm::SLEEP::IDLE::AHB (0x1) The CPU and AHB clock domains are stopped
          target::pm::SLEEP::IDLE::APB (0x2) The CPU, AHB and APB clock domains are stopped
        */
        __attribute__((always_inline)) target::pm::SLEEP::IDLE getIDLE() volatile {
          return static_cast<target::pm::SLEEP::IDLE>((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Idle Mode Configuration
          @param value enumeration value:
          target::pm::SLEEP::IDLE::CPU (0x0) The CPU clock domain is stopped
          target::pm::SLEEP::IDLE::AHB (0x1) The CPU and AHB clock domains are stopped
          target::pm::SLEEP::IDLE::APB (0x2) The CPU, AHB and APB clock domains are stopped
        */
        __attribute__((always_inline)) Register& setIDLE(target::pm::SLEEP::IDLE value) volatile {
          raw = (raw & ~(0x3 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      External Reset Controller
    */
    namespace EXTCTRL {
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
          Gets External Reset Disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETDIS() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets External Reset Disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETDIS(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      CPU Clock Select
    */
    namespace CPUSEL {
      enum class CPUDIV {
        // Divide by 1
        DIV1 = 0x0,
        // Divide by 2
        DIV2 = 0x1,
        // Divide by 4
        DIV4 = 0x2,
        // Divide by 8
        DIV8 = 0x3,
        // Divide by 16
        DIV16 = 0x4,
        // Divide by 32
        DIV32 = 0x5,
        // Divide by 64
        DIV64 = 0x6,
        // Divide by 128
        DIV128 = 0x7,
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
          Gets CPU Prescaler Selection
          @return enumeration value:
          target::pm::CPUSEL::CPUDIV::DIV1 (0x0) Divide by 1
          target::pm::CPUSEL::CPUDIV::DIV2 (0x1) Divide by 2
          target::pm::CPUSEL::CPUDIV::DIV4 (0x2) Divide by 4
          target::pm::CPUSEL::CPUDIV::DIV8 (0x3) Divide by 8
          target::pm::CPUSEL::CPUDIV::DIV16 (0x4) Divide by 16
          target::pm::CPUSEL::CPUDIV::DIV32 (0x5) Divide by 32
          target::pm::CPUSEL::CPUDIV::DIV64 (0x6) Divide by 64
          target::pm::CPUSEL::CPUDIV::DIV128 (0x7) Divide by 128
        */
        __attribute__((always_inline)) target::pm::CPUSEL::CPUDIV getCPUDIV() volatile {
          return static_cast<target::pm::CPUSEL::CPUDIV>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets CPU Prescaler Selection
          @param value enumeration value:
          target::pm::CPUSEL::CPUDIV::DIV1 (0x0) Divide by 1
          target::pm::CPUSEL::CPUDIV::DIV2 (0x1) Divide by 2
          target::pm::CPUSEL::CPUDIV::DIV4 (0x2) Divide by 4
          target::pm::CPUSEL::CPUDIV::DIV8 (0x3) Divide by 8
          target::pm::CPUSEL::CPUDIV::DIV16 (0x4) Divide by 16
          target::pm::CPUSEL::CPUDIV::DIV32 (0x5) Divide by 32
          target::pm::CPUSEL::CPUDIV::DIV64 (0x6) Divide by 64
          target::pm::CPUSEL::CPUDIV::DIV128 (0x7) Divide by 128
        */
        __attribute__((always_inline)) Register& setCPUDIV(target::pm::CPUSEL::CPUDIV value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APBA Clock Select
    */
    namespace APBASEL {
      enum class APBADIV {
        // Divide by 1
        DIV1 = 0x0,
        // Divide by 2
        DIV2 = 0x1,
        // Divide by 4
        DIV4 = 0x2,
        // Divide by 8
        DIV8 = 0x3,
        // Divide by 16
        DIV16 = 0x4,
        // Divide by 32
        DIV32 = 0x5,
        // Divide by 64
        DIV64 = 0x6,
        // Divide by 128
        DIV128 = 0x7,
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
          Gets APBA Prescaler Selection
          @return enumeration value:
          target::pm::APBASEL::APBADIV::DIV1 (0x0) Divide by 1
          target::pm::APBASEL::APBADIV::DIV2 (0x1) Divide by 2
          target::pm::APBASEL::APBADIV::DIV4 (0x2) Divide by 4
          target::pm::APBASEL::APBADIV::DIV8 (0x3) Divide by 8
          target::pm::APBASEL::APBADIV::DIV16 (0x4) Divide by 16
          target::pm::APBASEL::APBADIV::DIV32 (0x5) Divide by 32
          target::pm::APBASEL::APBADIV::DIV64 (0x6) Divide by 64
          target::pm::APBASEL::APBADIV::DIV128 (0x7) Divide by 128
        */
        __attribute__((always_inline)) target::pm::APBASEL::APBADIV getAPBADIV() volatile {
          return static_cast<target::pm::APBASEL::APBADIV>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets APBA Prescaler Selection
          @param value enumeration value:
          target::pm::APBASEL::APBADIV::DIV1 (0x0) Divide by 1
          target::pm::APBASEL::APBADIV::DIV2 (0x1) Divide by 2
          target::pm::APBASEL::APBADIV::DIV4 (0x2) Divide by 4
          target::pm::APBASEL::APBADIV::DIV8 (0x3) Divide by 8
          target::pm::APBASEL::APBADIV::DIV16 (0x4) Divide by 16
          target::pm::APBASEL::APBADIV::DIV32 (0x5) Divide by 32
          target::pm::APBASEL::APBADIV::DIV64 (0x6) Divide by 64
          target::pm::APBASEL::APBADIV::DIV128 (0x7) Divide by 128
        */
        __attribute__((always_inline)) Register& setAPBADIV(target::pm::APBASEL::APBADIV value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APBB Clock Select
    */
    namespace APBBSEL {
      enum class APBBDIV {
        // Divide by 1
        DIV1 = 0x0,
        // Divide by 2
        DIV2 = 0x1,
        // Divide by 4
        DIV4 = 0x2,
        // Divide by 8
        DIV8 = 0x3,
        // Divide by 16
        DIV16 = 0x4,
        // Divide by 32
        DIV32 = 0x5,
        // Divide by 64
        DIV64 = 0x6,
        // Divide by 128
        DIV128 = 0x7,
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
          Gets APBB Prescaler Selection
          @return enumeration value:
          target::pm::APBBSEL::APBBDIV::DIV1 (0x0) Divide by 1
          target::pm::APBBSEL::APBBDIV::DIV2 (0x1) Divide by 2
          target::pm::APBBSEL::APBBDIV::DIV4 (0x2) Divide by 4
          target::pm::APBBSEL::APBBDIV::DIV8 (0x3) Divide by 8
          target::pm::APBBSEL::APBBDIV::DIV16 (0x4) Divide by 16
          target::pm::APBBSEL::APBBDIV::DIV32 (0x5) Divide by 32
          target::pm::APBBSEL::APBBDIV::DIV64 (0x6) Divide by 64
          target::pm::APBBSEL::APBBDIV::DIV128 (0x7) Divide by 128
        */
        __attribute__((always_inline)) target::pm::APBBSEL::APBBDIV getAPBBDIV() volatile {
          return static_cast<target::pm::APBBSEL::APBBDIV>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets APBB Prescaler Selection
          @param value enumeration value:
          target::pm::APBBSEL::APBBDIV::DIV1 (0x0) Divide by 1
          target::pm::APBBSEL::APBBDIV::DIV2 (0x1) Divide by 2
          target::pm::APBBSEL::APBBDIV::DIV4 (0x2) Divide by 4
          target::pm::APBBSEL::APBBDIV::DIV8 (0x3) Divide by 8
          target::pm::APBBSEL::APBBDIV::DIV16 (0x4) Divide by 16
          target::pm::APBBSEL::APBBDIV::DIV32 (0x5) Divide by 32
          target::pm::APBBSEL::APBBDIV::DIV64 (0x6) Divide by 64
          target::pm::APBBSEL::APBBDIV::DIV128 (0x7) Divide by 128
        */
        __attribute__((always_inline)) Register& setAPBBDIV(target::pm::APBBSEL::APBBDIV value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APBC Clock Select
    */
    namespace APBCSEL {
      enum class APBCDIV {
        // Divide by 1
        DIV1 = 0x0,
        // Divide by 2
        DIV2 = 0x1,
        // Divide by 4
        DIV4 = 0x2,
        // Divide by 8
        DIV8 = 0x3,
        // Divide by 16
        DIV16 = 0x4,
        // Divide by 32
        DIV32 = 0x5,
        // Divide by 64
        DIV64 = 0x6,
        // Divide by 128
        DIV128 = 0x7,
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
          Gets APBC Prescaler Selection
          @return enumeration value:
          target::pm::APBCSEL::APBCDIV::DIV1 (0x0) Divide by 1
          target::pm::APBCSEL::APBCDIV::DIV2 (0x1) Divide by 2
          target::pm::APBCSEL::APBCDIV::DIV4 (0x2) Divide by 4
          target::pm::APBCSEL::APBCDIV::DIV8 (0x3) Divide by 8
          target::pm::APBCSEL::APBCDIV::DIV16 (0x4) Divide by 16
          target::pm::APBCSEL::APBCDIV::DIV32 (0x5) Divide by 32
          target::pm::APBCSEL::APBCDIV::DIV64 (0x6) Divide by 64
          target::pm::APBCSEL::APBCDIV::DIV128 (0x7) Divide by 128
        */
        __attribute__((always_inline)) target::pm::APBCSEL::APBCDIV getAPBCDIV() volatile {
          return static_cast<target::pm::APBCSEL::APBCDIV>((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets APBC Prescaler Selection
          @param value enumeration value:
          target::pm::APBCSEL::APBCDIV::DIV1 (0x0) Divide by 1
          target::pm::APBCSEL::APBCDIV::DIV2 (0x1) Divide by 2
          target::pm::APBCSEL::APBCDIV::DIV4 (0x2) Divide by 4
          target::pm::APBCSEL::APBCDIV::DIV8 (0x3) Divide by 8
          target::pm::APBCSEL::APBCDIV::DIV16 (0x4) Divide by 16
          target::pm::APBCSEL::APBCDIV::DIV32 (0x5) Divide by 32
          target::pm::APBCSEL::APBCDIV::DIV64 (0x6) Divide by 64
          target::pm::APBCSEL::APBCDIV::DIV128 (0x7) Divide by 128
        */
        __attribute__((always_inline)) Register& setAPBCDIV(target::pm::APBCSEL::APBCDIV value) volatile {
          raw = (raw & ~(0x7 << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      AHB Mask
    */
    namespace AHBMASK {
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
          Gets HPB0 AHB Clock Mask
          @param index in range 0..2
          @return boolean value
        */
        __attribute__((always_inline)) bool getHPB(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets HPB0 AHB Clock Mask
          @param index in range 0..2
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHPB(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets DSU AHB Clock Mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getDSU() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets DSU AHB Clock Mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDSU(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets NVMCTRL AHB Clock Mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getNVMCTRL() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets NVMCTRL AHB Clock Mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNVMCTRL(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets DMAC AHB Clock Mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getDMAC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets DMAC AHB Clock Mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDMAC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets USB AHB Clock Mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSB() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets USB AHB Clock Mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSB(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APBA Mask
    */
    namespace APBAMASK {
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
          Gets PAC0 APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPAC0() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets PAC0 APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPAC0(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets PM APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPM() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets PM APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPM(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets SYSCTRL APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYSCTRL() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets SYSCTRL APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYSCTRL(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets GCLK APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getGCLK() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets GCLK APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setGCLK(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets WDT APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWDT() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets WDT APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWDT(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets RTC APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRTC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets RTC APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRTC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets EIC APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEIC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets EIC APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEIC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APBB Mask
    */
    namespace APBBMASK {
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
          Gets PAC1 APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPAC1() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets PAC1 APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPAC1(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets DSU APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDSU() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets DSU APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDSU(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets NVMCTRL APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getNVMCTRL() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets NVMCTRL APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNVMCTRL(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets PORT APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPORT() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets PORT APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPORT(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets DMAC APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDMAC() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets DMAC APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDMAC(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets USB APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSB() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets USB APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSB(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets HMATRIX APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHMATRIX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets HMATRIX APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHMATRIX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APBC Mask
    */
    namespace APBCMASK {
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
          Gets SERCOM0 APB Clock Enable
          @param index in range 0..1
          @return boolean value
        */
        __attribute__((always_inline)) bool getSERCOM(int index) volatile {
          return ((raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0)));
        }
        /**
          Sets SERCOM0 APB Clock Enable
          @param index in range 0..1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSERCOM(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((((value)) << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets TC1 APB Clock Enable
          @param index in range 1..2
          @return boolean value
        */
        __attribute__((always_inline)) bool getTC(int index) volatile {
          return ((raw & (0x1 << (6 + 1 * (index - 1)))) >> (6 + 1 * (index - 1)));
        }
        /**
          Sets TC1 APB Clock Enable
          @param index in range 1..2
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTC(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (6 + 1 * (index - 1)))) | ((((value)) << (6 + 1 * (index - 1))) & (0x1 << (6 + 1 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets PAC2 APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPAC2() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets PAC2 APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPAC2(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets EVSYS APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEVSYS() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets EVSYS APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEVSYS(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets TCC0 APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCC0() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets TCC0 APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCC0(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets ADC APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getADC() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets ADC APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADC(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets AC APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getAC() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets AC APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAC(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets DAC APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDAC() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets DAC APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDAC(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets PTC APB Clock Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPTC() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets PTC APB Clock Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPTC(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
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
          Gets Clock Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCKRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Clock Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCKRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Clock Failure Detector Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCFD() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Clock Failure Detector Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCFD(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
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
          Gets Clock Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCKRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Clock Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCKRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Clock Failure Detector Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCFD() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Clock Failure Detector Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCFD(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
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
          Gets Clock Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getCKRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Clock Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCKRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Clock Failure Detector
          @return boolean value
        */
        __attribute__((always_inline)) bool getCFD() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Clock Failure Detector
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCFD(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Reset Cause
    */
    namespace RCAUSE {
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
          Gets Power On Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getPOR() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Power On Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPOR(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Brown Out 12 Detector Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD12() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Brown Out 12 Detector Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD12(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Brown Out 33 Detector Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getBOD33() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Brown Out 33 Detector Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBOD33(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets External Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getEXT() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets External Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEXT(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Watchdog Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getWDT() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Watchdog Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWDT(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets System Reset Request
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYST() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets System Reset Request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYST(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
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
          char _space_SLEEP[0x1];
          /**
            Sleep Mode
          */
          SLEEP::Register SLEEP;
        };
        struct {
          char _space_EXTCTRL[0x2];
          /**
            External Reset Controller
          */
          EXTCTRL::Register EXTCTRL;
        };
        struct {
          char _space_CPUSEL[0x8];
          /**
            CPU Clock Select
          */
          CPUSEL::Register CPUSEL;
        };
        struct {
          char _space_APBASEL[0x9];
          /**
            APBA Clock Select
          */
          APBASEL::Register APBASEL;
        };
        struct {
          char _space_APBBSEL[0xa];
          /**
            APBB Clock Select
          */
          APBBSEL::Register APBBSEL;
        };
        struct {
          char _space_APBCSEL[0xb];
          /**
            APBC Clock Select
          */
          APBCSEL::Register APBCSEL;
        };
        struct {
          char _space_AHBMASK[0x14];
          /**
            AHB Mask
          */
          AHBMASK::Register AHBMASK;
        };
        struct {
          char _space_APBAMASK[0x18];
          /**
            APBA Mask
          */
          APBAMASK::Register APBAMASK;
        };
        struct {
          char _space_APBBMASK[0x1c];
          /**
            APBB Mask
          */
          APBBMASK::Register APBBMASK;
        };
        struct {
          char _space_APBCMASK[0x20];
          /**
            APBC Mask
          */
          APBCMASK::Register APBCMASK;
        };
        struct {
          char _space_INTENCLR[0x34];
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0x35];
          /**
            Interrupt Enable Set
          */
          INTENSET::Register INTENSET;
        };
        struct {
          char _space_INTFLAG[0x36];
          /**
            Interrupt Flag Status and Clear
          */
          INTFLAG::Register INTFLAG;
        };
        struct {
          char _space_RCAUSE[0x38];
          /**
            Reset Cause
          */
          RCAUSE::Register RCAUSE;
        };
      };
    };
  }
  
  extern volatile pm::Peripheral PM;
}