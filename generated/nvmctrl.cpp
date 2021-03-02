namespace target {
  namespace nvmctrl {
    
    /**
      Control A
    */
    namespace CTRLA {
      enum class CMD {
        // Erase Row - Erases the row addressed by the ADDR register.
        ER = 0x2,
        // Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register.
        WP = 0x4,
        // Erase Auxiliary Row - Erases the auxiliary row addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.
        EAR = 0x5,
        // Write Auxiliary Page - Writes the contents of the page buffer to the page addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.
        WAP = 0x6,
        // Security Flow Command
        SF = 0xa,
        // Write lockbits
        WL = 0xf,
        // Lock Region - Locks the region containing the address location in the ADDR register.
        LR = 0x40,
        // Unlock Region - Unlocks the region containing the address location in the ADDR register.
        UR = 0x41,
        // Sets the power reduction mode.
        SPRM = 0x42,
        // Clears the power reduction mode.
        CPRM = 0x43,
        // Page Buffer Clear - Clears the page buffer.
        PBC = 0x44,
        // Set Security Bit - Sets the security bit by writing 0x00 to the first byte in the lockbit row.
        SSB = 0x45,
        // Invalidates all cache lines.
        INVALL = 0x46,
      };
      
      enum class CMDEX {
        // Execution Key
        KEY = 0xa5,
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
          Gets Command
          @return enumeration value:
          target::nvmctrl::CTRLA::CMD::ER (0x2) Erase Row - Erases the row addressed by the ADDR register.
          target::nvmctrl::CTRLA::CMD::WP (0x4) Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register.
          target::nvmctrl::CTRLA::CMD::EAR (0x5) Erase Auxiliary Row - Erases the auxiliary row addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.
          target::nvmctrl::CTRLA::CMD::WAP (0x6) Write Auxiliary Page - Writes the contents of the page buffer to the page addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.
          target::nvmctrl::CTRLA::CMD::SF (0xa) Security Flow Command
          target::nvmctrl::CTRLA::CMD::WL (0xf) Write lockbits
          target::nvmctrl::CTRLA::CMD::LR (0x40) Lock Region - Locks the region containing the address location in the ADDR register.
          target::nvmctrl::CTRLA::CMD::UR (0x41) Unlock Region - Unlocks the region containing the address location in the ADDR register.
          target::nvmctrl::CTRLA::CMD::SPRM (0x42) Sets the power reduction mode.
          target::nvmctrl::CTRLA::CMD::CPRM (0x43) Clears the power reduction mode.
          target::nvmctrl::CTRLA::CMD::PBC (0x44) Page Buffer Clear - Clears the page buffer.
          target::nvmctrl::CTRLA::CMD::SSB (0x45) Set Security Bit - Sets the security bit by writing 0x00 to the first byte in the lockbit row.
          target::nvmctrl::CTRLA::CMD::INVALL (0x46) Invalidates all cache lines.
        */
        __attribute__((always_inline)) target::nvmctrl::CTRLA::CMD getCMD() volatile {
          return static_cast<target::nvmctrl::CTRLA::CMD>((raw & (0x7F << 0)) >> 0);
        }
        /**
          Sets Command
          @param value enumeration value:
          target::nvmctrl::CTRLA::CMD::ER (0x2) Erase Row - Erases the row addressed by the ADDR register.
          target::nvmctrl::CTRLA::CMD::WP (0x4) Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register.
          target::nvmctrl::CTRLA::CMD::EAR (0x5) Erase Auxiliary Row - Erases the auxiliary row addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.
          target::nvmctrl::CTRLA::CMD::WAP (0x6) Write Auxiliary Page - Writes the contents of the page buffer to the page addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.
          target::nvmctrl::CTRLA::CMD::SF (0xa) Security Flow Command
          target::nvmctrl::CTRLA::CMD::WL (0xf) Write lockbits
          target::nvmctrl::CTRLA::CMD::LR (0x40) Lock Region - Locks the region containing the address location in the ADDR register.
          target::nvmctrl::CTRLA::CMD::UR (0x41) Unlock Region - Unlocks the region containing the address location in the ADDR register.
          target::nvmctrl::CTRLA::CMD::SPRM (0x42) Sets the power reduction mode.
          target::nvmctrl::CTRLA::CMD::CPRM (0x43) Clears the power reduction mode.
          target::nvmctrl::CTRLA::CMD::PBC (0x44) Page Buffer Clear - Clears the page buffer.
          target::nvmctrl::CTRLA::CMD::SSB (0x45) Set Security Bit - Sets the security bit by writing 0x00 to the first byte in the lockbit row.
          target::nvmctrl::CTRLA::CMD::INVALL (0x46) Invalidates all cache lines.
        */
        __attribute__((always_inline)) Register& setCMD(target::nvmctrl::CTRLA::CMD value) volatile {
          raw = (raw & ~(0x7F << 0)) | (((static_cast<unsigned long>(value)) << 0) & (0x7F << 0));
          return *(Register*)this;
        }
        /**
          Gets Command Execution
          @return enumeration value:
          target::nvmctrl::CTRLA::CMDEX::KEY (0xa5) Execution Key
        */
        __attribute__((always_inline)) target::nvmctrl::CTRLA::CMDEX getCMDEX() volatile {
          return static_cast<target::nvmctrl::CTRLA::CMDEX>((raw & (0xFF << 8)) >> 8);
        }
        /**
          Sets Command Execution
          @param value enumeration value:
          target::nvmctrl::CTRLA::CMDEX::KEY (0xa5) Execution Key
        */
        __attribute__((always_inline)) Register& setCMDEX(target::nvmctrl::CTRLA::CMDEX value) volatile {
          raw = (raw & ~(0xFF << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0xFF << 8));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control B
    */
    namespace CTRLB {
      enum class RWS {
        // Single Auto Wait State
        SINGLE = 0x0,
        // Half Auto Wait State
        HALF = 0x1,
        // Dual Auto Wait State
        DUAL = 0x2,
      };
      
      enum class SLEEPPRM {
        // NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access.
        WAKEONACCESS = 0x0,
        // NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep.
        WAKEUPINSTANT = 0x1,
        // Auto power reduction disabled.
        DISABLED = 0x3,
      };
      
      enum class READMODE {
        // The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance.
        NO_MISS_PENALTY = 0x0,
        // Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time.
        LOW_POWER = 0x1,
        // The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings.
        DETERMINISTIC = 0x2,
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
          Gets NVM Read Wait States
          @return enumeration value:
          target::nvmctrl::CTRLB::RWS::SINGLE (0x0) Single Auto Wait State
          target::nvmctrl::CTRLB::RWS::HALF (0x1) Half Auto Wait State
          target::nvmctrl::CTRLB::RWS::DUAL (0x2) Dual Auto Wait State
        */
        __attribute__((always_inline)) target::nvmctrl::CTRLB::RWS getRWS() volatile {
          return static_cast<target::nvmctrl::CTRLB::RWS>((raw & (0xF << 1)) >> 1);
        }
        /**
          Sets NVM Read Wait States
          @param value enumeration value:
          target::nvmctrl::CTRLB::RWS::SINGLE (0x0) Single Auto Wait State
          target::nvmctrl::CTRLB::RWS::HALF (0x1) Half Auto Wait State
          target::nvmctrl::CTRLB::RWS::DUAL (0x2) Dual Auto Wait State
        */
        __attribute__((always_inline)) Register& setRWS(target::nvmctrl::CTRLB::RWS value) volatile {
          raw = (raw & ~(0xF << 1)) | (((static_cast<unsigned long>(value)) << 1) & (0xF << 1));
          return *(Register*)this;
        }
        /**
          Gets Manual Write
          @return boolean value
        */
        __attribute__((always_inline)) bool getMANW() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Manual Write
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMANW(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Power Reduction Mode during Sleep
          @return enumeration value:
          target::nvmctrl::CTRLB::SLEEPPRM::WAKEONACCESS (0x0) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access.
          target::nvmctrl::CTRLB::SLEEPPRM::WAKEUPINSTANT (0x1) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep.
          target::nvmctrl::CTRLB::SLEEPPRM::DISABLED (0x3) Auto power reduction disabled.
        */
        __attribute__((always_inline)) target::nvmctrl::CTRLB::SLEEPPRM getSLEEPPRM() volatile {
          return static_cast<target::nvmctrl::CTRLB::SLEEPPRM>((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Power Reduction Mode during Sleep
          @param value enumeration value:
          target::nvmctrl::CTRLB::SLEEPPRM::WAKEONACCESS (0x0) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access.
          target::nvmctrl::CTRLB::SLEEPPRM::WAKEUPINSTANT (0x1) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep.
          target::nvmctrl::CTRLB::SLEEPPRM::DISABLED (0x3) Auto power reduction disabled.
        */
        __attribute__((always_inline)) Register& setSLEEPPRM(target::nvmctrl::CTRLB::SLEEPPRM value) volatile {
          raw = (raw & ~(0x3 << 8)) | (((static_cast<unsigned long>(value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets NVMCTRL Read Mode
          @return enumeration value:
          target::nvmctrl::CTRLB::READMODE::NO_MISS_PENALTY (0x0) The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance.
          target::nvmctrl::CTRLB::READMODE::LOW_POWER (0x1) Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time.
          target::nvmctrl::CTRLB::READMODE::DETERMINISTIC (0x2) The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings.
        */
        __attribute__((always_inline)) target::nvmctrl::CTRLB::READMODE getREADMODE() volatile {
          return static_cast<target::nvmctrl::CTRLB::READMODE>((raw & (0x3 << 16)) >> 16);
        }
        /**
          Sets NVMCTRL Read Mode
          @param value enumeration value:
          target::nvmctrl::CTRLB::READMODE::NO_MISS_PENALTY (0x0) The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance.
          target::nvmctrl::CTRLB::READMODE::LOW_POWER (0x1) Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time.
          target::nvmctrl::CTRLB::READMODE::DETERMINISTIC (0x2) The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings.
        */
        __attribute__((always_inline)) Register& setREADMODE(target::nvmctrl::CTRLB::READMODE value) volatile {
          raw = (raw & ~(0x3 << 16)) | (((static_cast<unsigned long>(value)) << 16) & (0x3 << 16));
          return *(Register*)this;
        }
        /**
          Gets Cache Disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCACHEDIS() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Cache Disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCACHEDIS(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
      };
    };
    
    /**
      NVM Parameter
    */
    namespace PARAM {
      enum class PSZ {
        // 8 bytes
        _8_BYTES = 0x0,
        // 16 bytes
        _16_BYTES = 0x1,
        // 32 bytes
        _32_BYTES = 0x2,
        // 64 bytes
        _64_BYTES = 0x3,
        // 128 bytes
        _128_BYTES = 0x4,
        // 256 bytes
        _256_BYTES = 0x5,
        // 512 bytes
        _512_BYTES = 0x6,
        // 1024 bytes
        _1024_BYTES = 0x7,
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
          Gets NVM Pages
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNVMP() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets NVM Pages
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setNVMP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Page Size
          @return enumeration value:
          target::nvmctrl::PARAM::PSZ::_8_BYTES (0x0) 8 bytes
          target::nvmctrl::PARAM::PSZ::_16_BYTES (0x1) 16 bytes
          target::nvmctrl::PARAM::PSZ::_32_BYTES (0x2) 32 bytes
          target::nvmctrl::PARAM::PSZ::_64_BYTES (0x3) 64 bytes
          target::nvmctrl::PARAM::PSZ::_128_BYTES (0x4) 128 bytes
          target::nvmctrl::PARAM::PSZ::_256_BYTES (0x5) 256 bytes
          target::nvmctrl::PARAM::PSZ::_512_BYTES (0x6) 512 bytes
          target::nvmctrl::PARAM::PSZ::_1024_BYTES (0x7) 1024 bytes
        */
        __attribute__((always_inline)) target::nvmctrl::PARAM::PSZ getPSZ() volatile {
          return static_cast<target::nvmctrl::PARAM::PSZ>((raw & (0x7 << 16)) >> 16);
        }
        /**
          Sets Page Size
          @param value enumeration value:
          target::nvmctrl::PARAM::PSZ::_8_BYTES (0x0) 8 bytes
          target::nvmctrl::PARAM::PSZ::_16_BYTES (0x1) 16 bytes
          target::nvmctrl::PARAM::PSZ::_32_BYTES (0x2) 32 bytes
          target::nvmctrl::PARAM::PSZ::_64_BYTES (0x3) 64 bytes
          target::nvmctrl::PARAM::PSZ::_128_BYTES (0x4) 128 bytes
          target::nvmctrl::PARAM::PSZ::_256_BYTES (0x5) 256 bytes
          target::nvmctrl::PARAM::PSZ::_512_BYTES (0x6) 512 bytes
          target::nvmctrl::PARAM::PSZ::_1024_BYTES (0x7) 1024 bytes
        */
        __attribute__((always_inline)) Register& setPSZ(target::nvmctrl::PARAM::PSZ value) volatile {
          raw = (raw & ~(0x7 << 16)) | (((static_cast<unsigned long>(value)) << 16) & (0x7 << 16));
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
          Gets NVM Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getREADY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets NVM Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREADY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Error Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getERROR() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Error Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERROR(bool value) volatile {
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
          Gets NVM Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getREADY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets NVM Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREADY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Error Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getERROR() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Error Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERROR(bool value) volatile {
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
          Gets NVM Ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getREADY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets NVM Ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREADY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getERROR() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERROR(bool value) volatile {
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
          Gets Power Reduction Mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getPRM() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Power Reduction Mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPRM(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets NVM Page Buffer Active Loading
          @return boolean value
        */
        __attribute__((always_inline)) bool getLOAD() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets NVM Page Buffer Active Loading
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLOAD(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Programming Error Status
          @return boolean value
        */
        __attribute__((always_inline)) bool getPROGE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Programming Error Status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPROGE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Lock Error Status
          @return boolean value
        */
        __attribute__((always_inline)) bool getLOCKE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Lock Error Status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLOCKE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets NVM Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getNVME() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets NVM Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNVME(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Security Bit Status
          @return boolean value
        */
        __attribute__((always_inline)) bool getSB() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Security Bit Status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSB(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Address
    */
    namespace ADDR {
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
          Gets NVM Address
          @return value in range 0..4194303
        */
        __attribute__((always_inline)) unsigned long getADDR() volatile {
          return ((raw & (0x3FFFFF << 0)) >> 0);
        }
        /**
          Sets NVM Address
          @param value value in range 0..4194303
        */
        __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFFF << 0)) | ((((value)) << 0) & (0x3FFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Lock Section
    */
    namespace LOCK {
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
          Gets Region Lock Bits
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getLOCK() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Region Lock Bits
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setLOCK(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
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
          char _space_CTRLB[0x4];
          /**
            Control B
          */
          CTRLB::Register CTRLB;
        };
        struct {
          char _space_PARAM[0x8];
          /**
            NVM Parameter
          */
          PARAM::Register PARAM;
        };
        struct {
          char _space_INTENCLR[0xc];
          /**
            Interrupt Enable Clear
          */
          INTENCLR::Register INTENCLR;
        };
        struct {
          char _space_INTENSET[0x10];
          /**
            Interrupt Enable Set
          */
          INTENSET::Register INTENSET;
        };
        struct {
          char _space_INTFLAG[0x14];
          /**
            Interrupt Flag Status and Clear
          */
          INTFLAG::Register INTFLAG;
        };
        struct {
          char _space_STATUS[0x18];
          /**
            Status
          */
          STATUS::Register STATUS;
        };
        struct {
          char _space_ADDR[0x1c];
          /**
            Address
          */
          ADDR::Register ADDR;
        };
        struct {
          char _space_LOCK[0x20];
          /**
            Lock Section
          */
          LOCK::Register LOCK;
        };
      };
    };
  }
  
  extern volatile nvmctrl::Peripheral NVMCTRL;
}