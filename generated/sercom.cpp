namespace target {
  namespace sercom {
    namespace I2CM {
      
      /**
        I2CM Control A
      */
      namespace CTRLA {
        enum class MODE {
          // USART mode with external clock
          USART_EXT_CLK = 0x0,
          // USART mode with internal clock
          USART_INT_CLK = 0x1,
          // SPI mode with external clock
          SPI_SLAVE = 0x2,
          // SPI mode with internal clock
          SPI_MASTER = 0x3,
          // I2C mode with external clock
          I2C_SLAVE = 0x4,
          // I2C mode with internal clock
          I2C_MASTER = 0x5,
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
            Gets Operating Mode
            @return enumeration value:
            target::sercom::I2CM::CTRLA::MODE::USART_EXT_CLK (0x0) USART mode with external clock
            target::sercom::I2CM::CTRLA::MODE::USART_INT_CLK (0x1) USART mode with internal clock
            target::sercom::I2CM::CTRLA::MODE::SPI_SLAVE (0x2) SPI mode with external clock
            target::sercom::I2CM::CTRLA::MODE::SPI_MASTER (0x3) SPI mode with internal clock
            target::sercom::I2CM::CTRLA::MODE::I2C_SLAVE (0x4) I2C mode with external clock
            target::sercom::I2CM::CTRLA::MODE::I2C_MASTER (0x5) I2C mode with internal clock
          */
          __attribute__((always_inline)) target::sercom::I2CM::CTRLA::MODE getMODE() volatile {
            return static_cast<target::sercom::I2CM::CTRLA::MODE>((raw & (0x7 << 2)) >> 2);
          }
          /**
            Sets Operating Mode
            @param value enumeration value:
            target::sercom::I2CM::CTRLA::MODE::USART_EXT_CLK (0x0) USART mode with external clock
            target::sercom::I2CM::CTRLA::MODE::USART_INT_CLK (0x1) USART mode with internal clock
            target::sercom::I2CM::CTRLA::MODE::SPI_SLAVE (0x2) SPI mode with external clock
            target::sercom::I2CM::CTRLA::MODE::SPI_MASTER (0x3) SPI mode with internal clock
            target::sercom::I2CM::CTRLA::MODE::I2C_SLAVE (0x4) I2C mode with external clock
            target::sercom::I2CM::CTRLA::MODE::I2C_MASTER (0x5) I2C mode with internal clock
          */
          __attribute__((always_inline)) Register& setMODE(target::sercom::I2CM::CTRLA::MODE value) volatile {
            raw = (raw & ~(0x7 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x7 << 2));
            return *(Register*)this;
          }
          /**
            Gets Run in Standby
            @return boolean value
          */
          __attribute__((always_inline)) bool getRUNSTDBY() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Run in Standby
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Pin Usage
            @return boolean value
          */
          __attribute__((always_inline)) bool getPINOUT() volatile {
            return ((raw & (0x1 << 16)) >> 16);
          }
          /**
            Sets Pin Usage
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPINOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
            return *(Register*)this;
          }
          /**
            Gets SDA Hold Time
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSDAHOLD() volatile {
            return ((raw & (0x3 << 20)) >> 20);
          }
          /**
            Sets SDA Hold Time
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setSDAHOLD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 20)) | ((((value)) << 20) & (0x3 << 20));
            return *(Register*)this;
          }
          /**
            Gets Master SCL Low Extend Timeout
            @return boolean value
          */
          __attribute__((always_inline)) bool getMEXTTOEN() volatile {
            return ((raw & (0x1 << 22)) >> 22);
          }
          /**
            Sets Master SCL Low Extend Timeout
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMEXTTOEN(bool value) volatile {
            raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
            return *(Register*)this;
          }
          /**
            Gets Slave SCL Low Extend Timeout
            @return boolean value
          */
          __attribute__((always_inline)) bool getSEXTTOEN() volatile {
            return ((raw & (0x1 << 23)) >> 23);
          }
          /**
            Sets Slave SCL Low Extend Timeout
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSEXTTOEN(bool value) volatile {
            raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
            return *(Register*)this;
          }
          /**
            Gets Transfer Speed
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSPEED() volatile {
            return ((raw & (0x3 << 24)) >> 24);
          }
          /**
            Sets Transfer Speed
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setSPEED(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 24)) | ((((value)) << 24) & (0x3 << 24));
            return *(Register*)this;
          }
          /**
            Gets SCL Clock Stretch Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getSCLSM() volatile {
            return ((raw & (0x1 << 27)) >> 27);
          }
          /**
            Sets SCL Clock Stretch Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSCLSM(bool value) volatile {
            raw = (raw & ~(0x1 << 27)) | ((((value)) << 27) & (0x1 << 27));
            return *(Register*)this;
          }
          /**
            Gets Inactive Time-Out
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getINACTOUT() volatile {
            return ((raw & (0x3 << 28)) >> 28);
          }
          /**
            Sets Inactive Time-Out
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setINACTOUT(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 28)) | ((((value)) << 28) & (0x3 << 28));
            return *(Register*)this;
          }
          /**
            Gets SCL Low Timeout Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getLOWTOUTEN() volatile {
            return ((raw & (0x1 << 30)) >> 30);
          }
          /**
            Sets SCL Low Timeout Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLOWTOUTEN(bool value) volatile {
            raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Control B
      */
      namespace CTRLB {
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
            Gets Smart Mode Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSMEN() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Smart Mode Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSMEN(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Quick Command Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getQCEN() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Quick Command Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setQCEN(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
          /**
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return ((raw & (0x3 << 16)) >> 16);
          }
          /**
            Sets Command
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 16)) | ((((value)) << 16) & (0x3 << 16));
            return *(Register*)this;
          }
          /**
            Gets Acknowledge Action
            @return boolean value
          */
          __attribute__((always_inline)) bool getACKACT() volatile {
            return ((raw & (0x1 << 18)) >> 18);
          }
          /**
            Sets Acknowledge Action
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setACKACT(bool value) volatile {
            raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Baud Rate
      */
      namespace BAUD {
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
            Gets Baud Rate Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Baud Rate Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
          /**
            Gets Baud Rate Value Low
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getBAUDLOW() volatile {
            return ((raw & (0xFF << 8)) >> 8);
          }
          /**
            Sets Baud Rate Value Low
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setBAUDLOW(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 8)) | ((((value)) << 8) & (0xFF << 8));
            return *(Register*)this;
          }
          /**
            Gets High Speed Baud Rate Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getHSBAUD() volatile {
            return ((raw & (0xFF << 16)) >> 16);
          }
          /**
            Sets High Speed Baud Rate Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setHSBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 16)) | ((((value)) << 16) & (0xFF << 16));
            return *(Register*)this;
          }
          /**
            Gets High Speed Baud Rate Value Low
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getHSBAUDLOW() volatile {
            return ((raw & (0xFF << 24)) >> 24);
          }
          /**
            Sets High Speed Baud Rate Value Low
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setHSBAUDLOW(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 24)) | ((((value)) << 24) & (0xFF << 24));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Interrupt Enable Clear
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
            Gets Master On Bus Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getMB() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Master On Bus Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMB(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Slave On Bus Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSB() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Slave On Bus Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSB(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Interrupt Enable Set
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
            Gets Master On Bus Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getMB() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Master On Bus Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMB(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Slave On Bus Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSB() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Slave On Bus Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSB(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Interrupt Flag Status and Clear
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
            Gets Master On Bus Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getMB() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Master On Bus Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMB(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Slave On Bus Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getSB() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Slave On Bus Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSB(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Status
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
            Gets Bus Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getBUSERR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Bus Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setBUSERR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Arbitration Lost
            @return boolean value
          */
          __attribute__((always_inline)) bool getARBLOST() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Arbitration Lost
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setARBLOST(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Received Not Acknowledge
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXNACK() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Received Not Acknowledge
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXNACK(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Bus State
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getBUSSTATE() volatile {
            return ((raw & (0x3 << 4)) >> 4);
          }
          /**
            Sets Bus State
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setBUSSTATE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
            return *(Register*)this;
          }
          /**
            Gets SCL Low Timeout
            @return boolean value
          */
          __attribute__((always_inline)) bool getLOWTOUT() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets SCL Low Timeout
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLOWTOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Clock Hold
            @return boolean value
          */
          __attribute__((always_inline)) bool getCLKHOLD() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Clock Hold
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCLKHOLD(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Master SCL Low Extend Timeout
            @return boolean value
          */
          __attribute__((always_inline)) bool getMEXTTOUT() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Master SCL Low Extend Timeout
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMEXTTOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Slave SCL Low Extend Timeout
            @return boolean value
          */
          __attribute__((always_inline)) bool getSEXTTOUT() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Slave SCL Low Extend Timeout
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSEXTTOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
          /**
            Gets Length Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getLENERR() volatile {
            return ((raw & (0x1 << 10)) >> 10);
          }
          /**
            Sets Length Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLENERR(bool value) volatile {
            raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Syncbusy
      */
      namespace SYNCBUSY {
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
            Gets Software Reset Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSWRST() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets SERCOM Enable Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getENABLE() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets SERCOM Enable Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets System Operation Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSYSOP() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets System Operation Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSYSOP(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Address
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
            Gets Address Value
            @return value in range 0..2047
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0x7FF << 0)) >> 0);
          }
          /**
            Sets Address Value
            @param value value in range 0..2047
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x7FF << 0)) | ((((value)) << 0) & (0x7FF << 0));
            return *(Register*)this;
          }
          /**
            Gets Length Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getLENEN() volatile {
            return ((raw & (0x1 << 13)) >> 13);
          }
          /**
            Sets Length Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLENEN(bool value) volatile {
            raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
            return *(Register*)this;
          }
          /**
            Gets High Speed Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getHS() volatile {
            return ((raw & (0x1 << 14)) >> 14);
          }
          /**
            Sets High Speed Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setHS(bool value) volatile {
            raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
            return *(Register*)this;
          }
          /**
            Gets Ten Bit Addressing Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getTENBITEN() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Ten Bit Addressing Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTENBITEN(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
          /**
            Gets Length
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getLEN() volatile {
            return ((raw & (0xFF << 16)) >> 16);
          }
          /**
            Sets Length
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setLEN(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 16)) | ((((value)) << 16) & (0xFF << 16));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Data
      */
      namespace DATA {
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
            Gets Data Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getDATA() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Data Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setDATA(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CM Debug Control
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
            Gets Debug Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGSTOP() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Debug Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGSTOP(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
    };
    
    namespace I2CS {
      
      /**
        I2CS Control A
      */
      namespace CTRLA {
        enum class MODE {
          // USART mode with external clock
          USART_EXT_CLK = 0x0,
          // USART mode with internal clock
          USART_INT_CLK = 0x1,
          // SPI mode with external clock
          SPI_SLAVE = 0x2,
          // SPI mode with internal clock
          SPI_MASTER = 0x3,
          // I2C mode with external clock
          I2C_SLAVE = 0x4,
          // I2C mode with internal clock
          I2C_MASTER = 0x5,
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
            Gets Operating Mode
            @return enumeration value:
            target::sercom::I2CS::CTRLA::MODE::USART_EXT_CLK (0x0) USART mode with external clock
            target::sercom::I2CS::CTRLA::MODE::USART_INT_CLK (0x1) USART mode with internal clock
            target::sercom::I2CS::CTRLA::MODE::SPI_SLAVE (0x2) SPI mode with external clock
            target::sercom::I2CS::CTRLA::MODE::SPI_MASTER (0x3) SPI mode with internal clock
            target::sercom::I2CS::CTRLA::MODE::I2C_SLAVE (0x4) I2C mode with external clock
            target::sercom::I2CS::CTRLA::MODE::I2C_MASTER (0x5) I2C mode with internal clock
          */
          __attribute__((always_inline)) target::sercom::I2CS::CTRLA::MODE getMODE() volatile {
            return static_cast<target::sercom::I2CS::CTRLA::MODE>((raw & (0x7 << 2)) >> 2);
          }
          /**
            Sets Operating Mode
            @param value enumeration value:
            target::sercom::I2CS::CTRLA::MODE::USART_EXT_CLK (0x0) USART mode with external clock
            target::sercom::I2CS::CTRLA::MODE::USART_INT_CLK (0x1) USART mode with internal clock
            target::sercom::I2CS::CTRLA::MODE::SPI_SLAVE (0x2) SPI mode with external clock
            target::sercom::I2CS::CTRLA::MODE::SPI_MASTER (0x3) SPI mode with internal clock
            target::sercom::I2CS::CTRLA::MODE::I2C_SLAVE (0x4) I2C mode with external clock
            target::sercom::I2CS::CTRLA::MODE::I2C_MASTER (0x5) I2C mode with internal clock
          */
          __attribute__((always_inline)) Register& setMODE(target::sercom::I2CS::CTRLA::MODE value) volatile {
            raw = (raw & ~(0x7 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x7 << 2));
            return *(Register*)this;
          }
          /**
            Gets Run during Standby
            @return boolean value
          */
          __attribute__((always_inline)) bool getRUNSTDBY() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Run during Standby
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Pin Usage
            @return boolean value
          */
          __attribute__((always_inline)) bool getPINOUT() volatile {
            return ((raw & (0x1 << 16)) >> 16);
          }
          /**
            Sets Pin Usage
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPINOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
            return *(Register*)this;
          }
          /**
            Gets SDA Hold Time
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSDAHOLD() volatile {
            return ((raw & (0x3 << 20)) >> 20);
          }
          /**
            Sets SDA Hold Time
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setSDAHOLD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 20)) | ((((value)) << 20) & (0x3 << 20));
            return *(Register*)this;
          }
          /**
            Gets Slave SCL Low Extend Timeout
            @return boolean value
          */
          __attribute__((always_inline)) bool getSEXTTOEN() volatile {
            return ((raw & (0x1 << 23)) >> 23);
          }
          /**
            Sets Slave SCL Low Extend Timeout
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSEXTTOEN(bool value) volatile {
            raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
            return *(Register*)this;
          }
          /**
            Gets Transfer Speed
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSPEED() volatile {
            return ((raw & (0x3 << 24)) >> 24);
          }
          /**
            Sets Transfer Speed
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setSPEED(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 24)) | ((((value)) << 24) & (0x3 << 24));
            return *(Register*)this;
          }
          /**
            Gets SCL Clock Stretch Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getSCLSM() volatile {
            return ((raw & (0x1 << 27)) >> 27);
          }
          /**
            Sets SCL Clock Stretch Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSCLSM(bool value) volatile {
            raw = (raw & ~(0x1 << 27)) | ((((value)) << 27) & (0x1 << 27));
            return *(Register*)this;
          }
          /**
            Gets SCL Low Timeout Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getLOWTOUTEN() volatile {
            return ((raw & (0x1 << 30)) >> 30);
          }
          /**
            Sets SCL Low Timeout Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLOWTOUTEN(bool value) volatile {
            raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CS Control B
      */
      namespace CTRLB {
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
            Gets Smart Mode Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSMEN() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Smart Mode Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSMEN(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets PMBus Group Command
            @return boolean value
          */
          __attribute__((always_inline)) bool getGCMD() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets PMBus Group Command
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setGCMD(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
          /**
            Gets Automatic Address Acknowledge
            @return boolean value
          */
          __attribute__((always_inline)) bool getAACKEN() volatile {
            return ((raw & (0x1 << 10)) >> 10);
          }
          /**
            Sets Automatic Address Acknowledge
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setAACKEN(bool value) volatile {
            raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
            return *(Register*)this;
          }
          /**
            Gets Address Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getAMODE() volatile {
            return ((raw & (0x3 << 14)) >> 14);
          }
          /**
            Sets Address Mode
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setAMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
            return *(Register*)this;
          }
          /**
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return ((raw & (0x3 << 16)) >> 16);
          }
          /**
            Sets Command
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 16)) | ((((value)) << 16) & (0x3 << 16));
            return *(Register*)this;
          }
          /**
            Gets Acknowledge Action
            @return boolean value
          */
          __attribute__((always_inline)) bool getACKACT() volatile {
            return ((raw & (0x1 << 18)) >> 18);
          }
          /**
            Sets Acknowledge Action
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setACKACT(bool value) volatile {
            raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CS Interrupt Enable Clear
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
            Gets Stop Received Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getPREC() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Stop Received Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPREC(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Address Match Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getAMATCH() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Address Match Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setAMATCH(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Data Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRDY() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Data Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CS Interrupt Enable Set
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
            Gets Stop Received Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getPREC() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Stop Received Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPREC(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Address Match Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getAMATCH() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Address Match Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setAMATCH(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Data Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRDY() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Data Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CS Interrupt Flag Status and Clear
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
            Gets Stop Received Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getPREC() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Stop Received Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPREC(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Address Match Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getAMATCH() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Address Match Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setAMATCH(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Data Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRDY() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Data Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRDY(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CS Status
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
            Gets Bus Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getBUSERR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Bus Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setBUSERR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Transmit Collision
            @return boolean value
          */
          __attribute__((always_inline)) bool getCOLL() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Transmit Collision
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCOLL(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Received Not Acknowledge
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXNACK() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Received Not Acknowledge
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXNACK(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Read/Write Direction
            @return boolean value
          */
          __attribute__((always_inline)) bool getDIR() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Read/Write Direction
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDIR(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Repeated Start
            @return boolean value
          */
          __attribute__((always_inline)) bool getSR() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Repeated Start
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSR(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets SCL Low Timeout
            @return boolean value
          */
          __attribute__((always_inline)) bool getLOWTOUT() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets SCL Low Timeout
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setLOWTOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Clock Hold
            @return boolean value
          */
          __attribute__((always_inline)) bool getCLKHOLD() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Clock Hold
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCLKHOLD(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Slave SCL Low Extend Timeout
            @return boolean value
          */
          __attribute__((always_inline)) bool getSEXTTOUT() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Slave SCL Low Extend Timeout
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSEXTTOUT(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
          /**
            Gets High Speed
            @return boolean value
          */
          __attribute__((always_inline)) bool getHS() volatile {
            return ((raw & (0x1 << 10)) >> 10);
          }
          /**
            Sets High Speed
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setHS(bool value) volatile {
            raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CS Syncbusy
      */
      namespace SYNCBUSY {
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
            Gets Software Reset Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSWRST() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets SERCOM Enable Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getENABLE() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets SERCOM Enable Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CS Address
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
            Gets General Call Address Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getGENCEN() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets General Call Address Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setGENCEN(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Address Value
            @return value in range 0..1023
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0x3FF << 1)) >> 1);
          }
          /**
            Sets Address Value
            @param value value in range 0..1023
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x3FF << 1)) | ((((value)) << 1) & (0x3FF << 1));
            return *(Register*)this;
          }
          /**
            Gets Ten Bit Addressing Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getTENBITEN() volatile {
            return ((raw & (0x1 << 15)) >> 15);
          }
          /**
            Sets Ten Bit Addressing Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTENBITEN(bool value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
            return *(Register*)this;
          }
          /**
            Gets Address Mask
            @return value in range 0..1023
          */
          __attribute__((always_inline)) unsigned long getADDRMASK() volatile {
            return ((raw & (0x3FF << 17)) >> 17);
          }
          /**
            Sets Address Mask
            @param value value in range 0..1023
          */
          __attribute__((always_inline)) Register& setADDRMASK(unsigned long value) volatile {
            raw = (raw & ~(0x3FF << 17)) | ((((value)) << 17) & (0x3FF << 17));
            return *(Register*)this;
          }
        };
      };
      
      /**
        I2CS Data
      */
      namespace DATA {
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
            Gets Data Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getDATA() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Data Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setDATA(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
        };
      };
    };
    
    namespace SPI {
      
      /**
        SPI Control A
      */
      namespace CTRLA {
        enum class MODE {
          // USART mode with external clock
          USART_EXT_CLK = 0x0,
          // USART mode with internal clock
          USART_INT_CLK = 0x1,
          // SPI mode with external clock
          SPI_SLAVE = 0x2,
          // SPI mode with internal clock
          SPI_MASTER = 0x3,
          // I2C mode with external clock
          I2C_SLAVE = 0x4,
          // I2C mode with internal clock
          I2C_MASTER = 0x5,
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
            Gets Operating Mode
            @return enumeration value:
            target::sercom::SPI::CTRLA::MODE::USART_EXT_CLK (0x0) USART mode with external clock
            target::sercom::SPI::CTRLA::MODE::USART_INT_CLK (0x1) USART mode with internal clock
            target::sercom::SPI::CTRLA::MODE::SPI_SLAVE (0x2) SPI mode with external clock
            target::sercom::SPI::CTRLA::MODE::SPI_MASTER (0x3) SPI mode with internal clock
            target::sercom::SPI::CTRLA::MODE::I2C_SLAVE (0x4) I2C mode with external clock
            target::sercom::SPI::CTRLA::MODE::I2C_MASTER (0x5) I2C mode with internal clock
          */
          __attribute__((always_inline)) target::sercom::SPI::CTRLA::MODE getMODE() volatile {
            return static_cast<target::sercom::SPI::CTRLA::MODE>((raw & (0x7 << 2)) >> 2);
          }
          /**
            Sets Operating Mode
            @param value enumeration value:
            target::sercom::SPI::CTRLA::MODE::USART_EXT_CLK (0x0) USART mode with external clock
            target::sercom::SPI::CTRLA::MODE::USART_INT_CLK (0x1) USART mode with internal clock
            target::sercom::SPI::CTRLA::MODE::SPI_SLAVE (0x2) SPI mode with external clock
            target::sercom::SPI::CTRLA::MODE::SPI_MASTER (0x3) SPI mode with internal clock
            target::sercom::SPI::CTRLA::MODE::I2C_SLAVE (0x4) I2C mode with external clock
            target::sercom::SPI::CTRLA::MODE::I2C_MASTER (0x5) I2C mode with internal clock
          */
          __attribute__((always_inline)) Register& setMODE(target::sercom::SPI::CTRLA::MODE value) volatile {
            raw = (raw & ~(0x7 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x7 << 2));
            return *(Register*)this;
          }
          /**
            Gets Run during Standby
            @return boolean value
          */
          __attribute__((always_inline)) bool getRUNSTDBY() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Run during Standby
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Immediate Buffer Overflow Notification
            @return boolean value
          */
          __attribute__((always_inline)) bool getIBON() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Immediate Buffer Overflow Notification
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setIBON(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Data Out Pinout
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getDOPO() volatile {
            return ((raw & (0x3 << 16)) >> 16);
          }
          /**
            Sets Data Out Pinout
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setDOPO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 16)) | ((((value)) << 16) & (0x3 << 16));
            return *(Register*)this;
          }
          /**
            Gets Data In Pinout
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getDIPO() volatile {
            return ((raw & (0x3 << 20)) >> 20);
          }
          /**
            Sets Data In Pinout
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setDIPO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 20)) | ((((value)) << 20) & (0x3 << 20));
            return *(Register*)this;
          }
          /**
            Gets Frame Format
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getFORM() volatile {
            return ((raw & (0xF << 24)) >> 24);
          }
          /**
            Sets Frame Format
            @param value value in range 0..15
          */
          __attribute__((always_inline)) Register& setFORM(unsigned long value) volatile {
            raw = (raw & ~(0xF << 24)) | ((((value)) << 24) & (0xF << 24));
            return *(Register*)this;
          }
          /**
            Gets Clock Phase
            @return boolean value
          */
          __attribute__((always_inline)) bool getCPHA() volatile {
            return ((raw & (0x1 << 28)) >> 28);
          }
          /**
            Sets Clock Phase
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCPHA(bool value) volatile {
            raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
            return *(Register*)this;
          }
          /**
            Gets Clock Polarity
            @return boolean value
          */
          __attribute__((always_inline)) bool getCPOL() volatile {
            return ((raw & (0x1 << 29)) >> 29);
          }
          /**
            Sets Clock Polarity
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCPOL(bool value) volatile {
            raw = (raw & ~(0x1 << 29)) | ((((value)) << 29) & (0x1 << 29));
            return *(Register*)this;
          }
          /**
            Gets Data Order
            @return boolean value
          */
          __attribute__((always_inline)) bool getDORD() volatile {
            return ((raw & (0x1 << 30)) >> 30);
          }
          /**
            Sets Data Order
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDORD(bool value) volatile {
            raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Control B
      */
      namespace CTRLB {
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
            Gets Character Size
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getCHSIZE() volatile {
            return ((raw & (0x7 << 0)) >> 0);
          }
          /**
            Sets Character Size
            @param value value in range 0..7
          */
          __attribute__((always_inline)) Register& setCHSIZE(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
            return *(Register*)this;
          }
          /**
            Gets Data Preload Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getPLOADEN() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Data Preload Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPLOADEN(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Slave Select Low Detect Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSSDE() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Slave Select Low Detect Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSSDE(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
          /**
            Gets Master Slave Select Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getMSSEN() volatile {
            return ((raw & (0x1 << 13)) >> 13);
          }
          /**
            Sets Master Slave Select Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setMSSEN(bool value) volatile {
            raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
            return *(Register*)this;
          }
          /**
            Gets Address Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getAMODE() volatile {
            return ((raw & (0x3 << 14)) >> 14);
          }
          /**
            Sets Address Mode
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setAMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 14)) | ((((value)) << 14) & (0x3 << 14));
            return *(Register*)this;
          }
          /**
            Gets Receiver Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXEN() volatile {
            return ((raw & (0x1 << 17)) >> 17);
          }
          /**
            Sets Receiver Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXEN(bool value) volatile {
            raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Baud Rate
      */
      namespace BAUD {
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
            Gets Baud Rate Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Baud Rate Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Interrupt Enable Clear
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
            Gets Data Register Empty Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRE() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Register Empty Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRE(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Transmit Complete Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getTXC() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Transmit Complete Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTXC(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Receive Complete Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXC() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Receive Complete Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXC(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Slave Select Low Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSSL() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Slave Select Low Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSSL(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Interrupt Enable Set
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
            Gets Data Register Empty Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRE() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Register Empty Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRE(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Transmit Complete Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getTXC() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Transmit Complete Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTXC(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Receive Complete Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXC() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Receive Complete Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXC(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Slave Select Low Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSSL() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Slave Select Low Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSSL(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Interrupt Flag Status and Clear
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
            Gets Data Register Empty Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRE() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Register Empty Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRE(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Transmit Complete Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getTXC() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Transmit Complete Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTXC(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Receive Complete Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXC() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Receive Complete Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXC(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Slave Select Low Interrupt Flag
            @return boolean value
          */
          __attribute__((always_inline)) bool getSSL() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Slave Select Low Interrupt Flag
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSSL(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Status
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
            Gets Buffer Overflow
            @return boolean value
          */
          __attribute__((always_inline)) bool getBUFOVF() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Buffer Overflow
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setBUFOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Syncbusy
      */
      namespace SYNCBUSY {
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
            Gets Software Reset Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSWRST() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets SERCOM Enable Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getENABLE() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets SERCOM Enable Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets CTRLB Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getCTRLB() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets CTRLB Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCTRLB(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Address
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
            Gets Address Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Address Value
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setADDR(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
          /**
            Gets Address Mask
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getADDRMASK() volatile {
            return ((raw & (0xFF << 16)) >> 16);
          }
          /**
            Sets Address Mask
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setADDRMASK(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 16)) | ((((value)) << 16) & (0xFF << 16));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Data
      */
      namespace DATA {
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
            Gets Data Value
            @return value in range 0..511
          */
          __attribute__((always_inline)) unsigned long getDATA() volatile {
            return ((raw & (0x1FF << 0)) >> 0);
          }
          /**
            Sets Data Value
            @param value value in range 0..511
          */
          __attribute__((always_inline)) Register& setDATA(unsigned long value) volatile {
            raw = (raw & ~(0x1FF << 0)) | ((((value)) << 0) & (0x1FF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        SPI Debug Control
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
            Gets Debug Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGSTOP() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Debug Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGSTOP(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
    };
    
    namespace USART {
      
      /**
        USART Control A
      */
      namespace CTRLA {
        enum class MODE {
          // USART mode with external clock
          USART_EXT_CLK = 0x0,
          // USART mode with internal clock
          USART_INT_CLK = 0x1,
          // SPI mode with external clock
          SPI_SLAVE = 0x2,
          // SPI mode with internal clock
          SPI_MASTER = 0x3,
          // I2C mode with external clock
          I2C_SLAVE = 0x4,
          // I2C mode with internal clock
          I2C_MASTER = 0x5,
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
            Gets Operating Mode
            @return enumeration value:
            target::sercom::USART::CTRLA::MODE::USART_EXT_CLK (0x0) USART mode with external clock
            target::sercom::USART::CTRLA::MODE::USART_INT_CLK (0x1) USART mode with internal clock
            target::sercom::USART::CTRLA::MODE::SPI_SLAVE (0x2) SPI mode with external clock
            target::sercom::USART::CTRLA::MODE::SPI_MASTER (0x3) SPI mode with internal clock
            target::sercom::USART::CTRLA::MODE::I2C_SLAVE (0x4) I2C mode with external clock
            target::sercom::USART::CTRLA::MODE::I2C_MASTER (0x5) I2C mode with internal clock
          */
          __attribute__((always_inline)) target::sercom::USART::CTRLA::MODE getMODE() volatile {
            return static_cast<target::sercom::USART::CTRLA::MODE>((raw & (0x7 << 2)) >> 2);
          }
          /**
            Sets Operating Mode
            @param value enumeration value:
            target::sercom::USART::CTRLA::MODE::USART_EXT_CLK (0x0) USART mode with external clock
            target::sercom::USART::CTRLA::MODE::USART_INT_CLK (0x1) USART mode with internal clock
            target::sercom::USART::CTRLA::MODE::SPI_SLAVE (0x2) SPI mode with external clock
            target::sercom::USART::CTRLA::MODE::SPI_MASTER (0x3) SPI mode with internal clock
            target::sercom::USART::CTRLA::MODE::I2C_SLAVE (0x4) I2C mode with external clock
            target::sercom::USART::CTRLA::MODE::I2C_MASTER (0x5) I2C mode with internal clock
          */
          __attribute__((always_inline)) Register& setMODE(target::sercom::USART::CTRLA::MODE value) volatile {
            raw = (raw & ~(0x7 << 2)) | (((static_cast<unsigned long>(value)) << 2) & (0x7 << 2));
            return *(Register*)this;
          }
          /**
            Gets Run during Standby
            @return boolean value
          */
          __attribute__((always_inline)) bool getRUNSTDBY() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Run during Standby
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRUNSTDBY(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
          /**
            Gets Immediate Buffer Overflow Notification
            @return boolean value
          */
          __attribute__((always_inline)) bool getIBON() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Immediate Buffer Overflow Notification
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setIBON(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Sample
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getSAMPR() volatile {
            return ((raw & (0x7 << 13)) >> 13);
          }
          /**
            Sets Sample
            @param value value in range 0..7
          */
          __attribute__((always_inline)) Register& setSAMPR(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 13)) | ((((value)) << 13) & (0x7 << 13));
            return *(Register*)this;
          }
          /**
            Gets Transmit Data Pinout
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getTXPO() volatile {
            return ((raw & (0x3 << 16)) >> 16);
          }
          /**
            Sets Transmit Data Pinout
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setTXPO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 16)) | ((((value)) << 16) & (0x3 << 16));
            return *(Register*)this;
          }
          /**
            Gets Receive Data Pinout
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getRXPO() volatile {
            return ((raw & (0x3 << 20)) >> 20);
          }
          /**
            Sets Receive Data Pinout
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setRXPO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 20)) | ((((value)) << 20) & (0x3 << 20));
            return *(Register*)this;
          }
          /**
            Gets Sample Adjustment
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSAMPA() volatile {
            return ((raw & (0x3 << 22)) >> 22);
          }
          /**
            Sets Sample Adjustment
            @param value value in range 0..3
          */
          __attribute__((always_inline)) Register& setSAMPA(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 22)) | ((((value)) << 22) & (0x3 << 22));
            return *(Register*)this;
          }
          /**
            Gets Frame Format
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getFORM() volatile {
            return ((raw & (0xF << 24)) >> 24);
          }
          /**
            Sets Frame Format
            @param value value in range 0..15
          */
          __attribute__((always_inline)) Register& setFORM(unsigned long value) volatile {
            raw = (raw & ~(0xF << 24)) | ((((value)) << 24) & (0xF << 24));
            return *(Register*)this;
          }
          /**
            Gets Communication Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getCMODE() volatile {
            return ((raw & (0x1 << 28)) >> 28);
          }
          /**
            Sets Communication Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCMODE(bool value) volatile {
            raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
            return *(Register*)this;
          }
          /**
            Gets Clock Polarity
            @return boolean value
          */
          __attribute__((always_inline)) bool getCPOL() volatile {
            return ((raw & (0x1 << 29)) >> 29);
          }
          /**
            Sets Clock Polarity
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCPOL(bool value) volatile {
            raw = (raw & ~(0x1 << 29)) | ((((value)) << 29) & (0x1 << 29));
            return *(Register*)this;
          }
          /**
            Gets Data Order
            @return boolean value
          */
          __attribute__((always_inline)) bool getDORD() volatile {
            return ((raw & (0x1 << 30)) >> 30);
          }
          /**
            Sets Data Order
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDORD(bool value) volatile {
            raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Control B
      */
      namespace CTRLB {
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
            Gets Character Size
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getCHSIZE() volatile {
            return ((raw & (0x7 << 0)) >> 0);
          }
          /**
            Sets Character Size
            @param value value in range 0..7
          */
          __attribute__((always_inline)) Register& setCHSIZE(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
            return *(Register*)this;
          }
          /**
            Gets Stop Bit Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getSBMODE() volatile {
            return ((raw & (0x1 << 6)) >> 6);
          }
          /**
            Sets Stop Bit Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSBMODE(bool value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
            return *(Register*)this;
          }
          /**
            Gets Collision Detection Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getCOLDEN() volatile {
            return ((raw & (0x1 << 8)) >> 8);
          }
          /**
            Sets Collision Detection Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCOLDEN(bool value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
            return *(Register*)this;
          }
          /**
            Gets Start of Frame Detection Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getSFDE() volatile {
            return ((raw & (0x1 << 9)) >> 9);
          }
          /**
            Sets Start of Frame Detection Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSFDE(bool value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
            return *(Register*)this;
          }
          /**
            Gets Encoding Format
            @return boolean value
          */
          __attribute__((always_inline)) bool getENC() volatile {
            return ((raw & (0x1 << 10)) >> 10);
          }
          /**
            Sets Encoding Format
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setENC(bool value) volatile {
            raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
            return *(Register*)this;
          }
          /**
            Gets Parity Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getPMODE() volatile {
            return ((raw & (0x1 << 13)) >> 13);
          }
          /**
            Sets Parity Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPMODE(bool value) volatile {
            raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
            return *(Register*)this;
          }
          /**
            Gets Transmitter Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getTXEN() volatile {
            return ((raw & (0x1 << 16)) >> 16);
          }
          /**
            Sets Transmitter Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTXEN(bool value) volatile {
            raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
            return *(Register*)this;
          }
          /**
            Gets Receiver Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXEN() volatile {
            return ((raw & (0x1 << 17)) >> 17);
          }
          /**
            Sets Receiver Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXEN(bool value) volatile {
            raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Baud Rate
      */
      namespace BAUD {
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
            Gets Baud Rate Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return ((raw & (0xFFFF << 0)) >> 0);
          }
          /**
            Sets Baud Rate Value
            @param value value in range 0..65535
          */
          __attribute__((always_inline)) Register& setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Baud Rate
      */
      namespace BAUD_FRAC_MODE {
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
            Gets Baud Rate Value
            @return value in range 0..8191
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return ((raw & (0x1FFF << 0)) >> 0);
          }
          /**
            Sets Baud Rate Value
            @param value value in range 0..8191
          */
          __attribute__((always_inline)) Register& setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0x1FFF << 0)) | ((((value)) << 0) & (0x1FFF << 0));
            return *(Register*)this;
          }
          /**
            Gets Fractional Part
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getFP() volatile {
            return ((raw & (0x7 << 13)) >> 13);
          }
          /**
            Sets Fractional Part
            @param value value in range 0..7
          */
          __attribute__((always_inline)) Register& setFP(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 13)) | ((((value)) << 13) & (0x7 << 13));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Baud Rate
      */
      namespace BAUD_FRACFP_MODE {
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
            Gets Baud Rate Value
            @return value in range 0..8191
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return ((raw & (0x1FFF << 0)) >> 0);
          }
          /**
            Sets Baud Rate Value
            @param value value in range 0..8191
          */
          __attribute__((always_inline)) Register& setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0x1FFF << 0)) | ((((value)) << 0) & (0x1FFF << 0));
            return *(Register*)this;
          }
          /**
            Gets Fractional Part
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getFP() volatile {
            return ((raw & (0x7 << 13)) >> 13);
          }
          /**
            Sets Fractional Part
            @param value value in range 0..7
          */
          __attribute__((always_inline)) Register& setFP(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 13)) | ((((value)) << 13) & (0x7 << 13));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Baud Rate
      */
      namespace BAUD_USARTFP_MODE {
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
            Gets Baud Rate Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return ((raw & (0xFFFF << 0)) >> 0);
          }
          /**
            Sets Baud Rate Value
            @param value value in range 0..65535
          */
          __attribute__((always_inline)) Register& setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Receive Pulse Length
      */
      namespace RXPL {
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
            Gets Receive Pulse Length
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getRXPL() volatile {
            return ((raw & (0xFF << 0)) >> 0);
          }
          /**
            Sets Receive Pulse Length
            @param value value in range 0..255
          */
          __attribute__((always_inline)) Register& setRXPL(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Interrupt Enable Clear
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
            Gets Data Register Empty Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRE() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Register Empty Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRE(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Transmit Complete Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getTXC() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Transmit Complete Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTXC(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Receive Complete Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXC() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Receive Complete Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXC(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Receive Start Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXS() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Receive Start Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXS(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Clear To Send Input Change Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getCTSIC() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Clear To Send Input Change Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCTSIC(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets Break Received Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXBRK() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets Break Received Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXBRK(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt Disable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt Disable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Interrupt Enable Set
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
            Gets Data Register Empty Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRE() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Register Empty Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRE(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Transmit Complete Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getTXC() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Transmit Complete Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTXC(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Receive Complete Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXC() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Receive Complete Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXC(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Receive Start Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXS() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Receive Start Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXS(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Clear To Send Input Change Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getCTSIC() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Clear To Send Input Change Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCTSIC(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets Break Received Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXBRK() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets Break Received Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXBRK(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt Enable
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt Enable
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Interrupt Flag Status and Clear
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
            Gets Data Register Empty Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getDRE() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Data Register Empty Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDRE(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Transmit Complete Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getTXC() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Transmit Complete Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setTXC(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Receive Complete Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXC() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Receive Complete Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXC(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Receive Start Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXS() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Receive Start Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXS(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Clear To Send Input Change Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getCTSIC() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Clear To Send Input Change Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCTSIC(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets Break Received Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getRXBRK() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets Break Received Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setRXBRK(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
          /**
            Gets Combined Error Interrupt
            @return boolean value
          */
          __attribute__((always_inline)) bool getERROR() volatile {
            return ((raw & (0x1 << 7)) >> 7);
          }
          /**
            Sets Combined Error Interrupt
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setERROR(bool value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Status
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
            Gets Parity Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getPERR() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Parity Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setPERR(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets Frame Error
            @return boolean value
          */
          __attribute__((always_inline)) bool getFERR() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets Frame Error
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setFERR(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets Buffer Overflow
            @return boolean value
          */
          __attribute__((always_inline)) bool getBUFOVF() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets Buffer Overflow
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setBUFOVF(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
          /**
            Gets Clear To Send
            @return boolean value
          */
          __attribute__((always_inline)) bool getCTS() volatile {
            return ((raw & (0x1 << 3)) >> 3);
          }
          /**
            Sets Clear To Send
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCTS(bool value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
            return *(Register*)this;
          }
          /**
            Gets Inconsistent Sync Field
            @return boolean value
          */
          __attribute__((always_inline)) bool getISF() volatile {
            return ((raw & (0x1 << 4)) >> 4);
          }
          /**
            Sets Inconsistent Sync Field
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setISF(bool value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
            return *(Register*)this;
          }
          /**
            Gets Collision Detected
            @return boolean value
          */
          __attribute__((always_inline)) bool getCOLL() volatile {
            return ((raw & (0x1 << 5)) >> 5);
          }
          /**
            Sets Collision Detected
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCOLL(bool value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Syncbusy
      */
      namespace SYNCBUSY {
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
            Gets Software Reset Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getSWRST() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
          /**
            Gets SERCOM Enable Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getENABLE() volatile {
            return ((raw & (0x1 << 1)) >> 1);
          }
          /**
            Sets SERCOM Enable Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setENABLE(bool value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
            return *(Register*)this;
          }
          /**
            Gets CTRLB Synchronization Busy
            @return boolean value
          */
          __attribute__((always_inline)) bool getCTRLB() volatile {
            return ((raw & (0x1 << 2)) >> 2);
          }
          /**
            Sets CTRLB Synchronization Busy
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setCTRLB(bool value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Data
      */
      namespace DATA {
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
            Gets Data Value
            @return value in range 0..511
          */
          __attribute__((always_inline)) unsigned long getDATA() volatile {
            return ((raw & (0x1FF << 0)) >> 0);
          }
          /**
            Sets Data Value
            @param value value in range 0..511
          */
          __attribute__((always_inline)) Register& setDATA(unsigned long value) volatile {
            raw = (raw & ~(0x1FF << 0)) | ((((value)) << 0) & (0x1FF << 0));
            return *(Register*)this;
          }
        };
      };
      
      /**
        USART Debug Control
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
            Gets Debug Mode
            @return boolean value
          */
          __attribute__((always_inline)) bool getDBGSTOP() volatile {
            return ((raw & (0x1 << 0)) >> 0);
          }
          /**
            Sets Debug Mode
            @param value boolean value
          */
          __attribute__((always_inline)) Register& setDBGSTOP(bool value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
            return *(Register*)this;
          }
        };
      };
    };
    
    class Peripheral {
      public:
      union {
        union {
          struct {
            /**
              I2CM Control A
            */
            I2CM::CTRLA::Register CTRLA;
          };
          struct {
            char _space_CTRLB[0x4];
            /**
              I2CM Control B
            */
            I2CM::CTRLB::Register CTRLB;
          };
          struct {
            char _space_BAUD[0xc];
            /**
              I2CM Baud Rate
            */
            I2CM::BAUD::Register BAUD;
          };
          struct {
            char _space_INTENCLR[0x14];
            /**
              I2CM Interrupt Enable Clear
            */
            I2CM::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0x16];
            /**
              I2CM Interrupt Enable Set
            */
            I2CM::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0x18];
            /**
              I2CM Interrupt Flag Status and Clear
            */
            I2CM::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0x1a];
            /**
              I2CM Status
            */
            I2CM::STATUS::Register STATUS;
          };
          struct {
            char _space_SYNCBUSY[0x1c];
            /**
              I2CM Syncbusy
            */
            I2CM::SYNCBUSY::Register SYNCBUSY;
          };
          struct {
            char _space_ADDR[0x24];
            /**
              I2CM Address
            */
            I2CM::ADDR::Register ADDR;
          };
          struct {
            char _space_DATA[0x28];
            /**
              I2CM Data
            */
            I2CM::DATA::Register DATA;
          };
          struct {
            char _space_DBGCTRL[0x30];
            /**
              I2CM Debug Control
            */
            I2CM::DBGCTRL::Register DBGCTRL;
          };
        } I2CM;
        union {
          struct {
            /**
              I2CS Control A
            */
            I2CS::CTRLA::Register CTRLA;
          };
          struct {
            char _space_CTRLB[0x4];
            /**
              I2CS Control B
            */
            I2CS::CTRLB::Register CTRLB;
          };
          struct {
            char _space_INTENCLR[0x14];
            /**
              I2CS Interrupt Enable Clear
            */
            I2CS::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0x16];
            /**
              I2CS Interrupt Enable Set
            */
            I2CS::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0x18];
            /**
              I2CS Interrupt Flag Status and Clear
            */
            I2CS::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0x1a];
            /**
              I2CS Status
            */
            I2CS::STATUS::Register STATUS;
          };
          struct {
            char _space_SYNCBUSY[0x1c];
            /**
              I2CS Syncbusy
            */
            I2CS::SYNCBUSY::Register SYNCBUSY;
          };
          struct {
            char _space_ADDR[0x24];
            /**
              I2CS Address
            */
            I2CS::ADDR::Register ADDR;
          };
          struct {
            char _space_DATA[0x28];
            /**
              I2CS Data
            */
            I2CS::DATA::Register DATA;
          };
        } I2CS;
        union {
          struct {
            /**
              SPI Control A
            */
            SPI::CTRLA::Register CTRLA;
          };
          struct {
            char _space_CTRLB[0x4];
            /**
              SPI Control B
            */
            SPI::CTRLB::Register CTRLB;
          };
          struct {
            char _space_BAUD[0xc];
            /**
              SPI Baud Rate
            */
            SPI::BAUD::Register BAUD;
          };
          struct {
            char _space_INTENCLR[0x14];
            /**
              SPI Interrupt Enable Clear
            */
            SPI::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0x16];
            /**
              SPI Interrupt Enable Set
            */
            SPI::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0x18];
            /**
              SPI Interrupt Flag Status and Clear
            */
            SPI::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0x1a];
            /**
              SPI Status
            */
            SPI::STATUS::Register STATUS;
          };
          struct {
            char _space_SYNCBUSY[0x1c];
            /**
              SPI Syncbusy
            */
            SPI::SYNCBUSY::Register SYNCBUSY;
          };
          struct {
            char _space_ADDR[0x24];
            /**
              SPI Address
            */
            SPI::ADDR::Register ADDR;
          };
          struct {
            char _space_DATA[0x28];
            /**
              SPI Data
            */
            SPI::DATA::Register DATA;
          };
          struct {
            char _space_DBGCTRL[0x30];
            /**
              SPI Debug Control
            */
            SPI::DBGCTRL::Register DBGCTRL;
          };
        } SPI;
        union {
          struct {
            /**
              USART Control A
            */
            USART::CTRLA::Register CTRLA;
          };
          struct {
            char _space_CTRLB[0x4];
            /**
              USART Control B
            */
            USART::CTRLB::Register CTRLB;
          };
          struct {
            char _space_BAUD[0xc];
            /**
              USART Baud Rate
            */
            USART::BAUD::Register BAUD;
          };
          struct {
            char _space_BAUD_FRAC_MODE[0xc];
            /**
              USART Baud Rate
            */
            USART::BAUD_FRAC_MODE::Register BAUD_FRAC_MODE;
          };
          struct {
            char _space_BAUD_FRACFP_MODE[0xc];
            /**
              USART Baud Rate
            */
            USART::BAUD_FRACFP_MODE::Register BAUD_FRACFP_MODE;
          };
          struct {
            char _space_BAUD_USARTFP_MODE[0xc];
            /**
              USART Baud Rate
            */
            USART::BAUD_USARTFP_MODE::Register BAUD_USARTFP_MODE;
          };
          struct {
            char _space_RXPL[0xe];
            /**
              USART Receive Pulse Length
            */
            USART::RXPL::Register RXPL;
          };
          struct {
            char _space_INTENCLR[0x14];
            /**
              USART Interrupt Enable Clear
            */
            USART::INTENCLR::Register INTENCLR;
          };
          struct {
            char _space_INTENSET[0x16];
            /**
              USART Interrupt Enable Set
            */
            USART::INTENSET::Register INTENSET;
          };
          struct {
            char _space_INTFLAG[0x18];
            /**
              USART Interrupt Flag Status and Clear
            */
            USART::INTFLAG::Register INTFLAG;
          };
          struct {
            char _space_STATUS[0x1a];
            /**
              USART Status
            */
            USART::STATUS::Register STATUS;
          };
          struct {
            char _space_SYNCBUSY[0x1c];
            /**
              USART Syncbusy
            */
            USART::SYNCBUSY::Register SYNCBUSY;
          };
          struct {
            char _space_DATA[0x28];
            /**
              USART Data
            */
            USART::DATA::Register DATA;
          };
          struct {
            char _space_DBGCTRL[0x30];
            /**
              USART Debug Control
            */
            USART::DBGCTRL::Register DBGCTRL;
          };
        } USART;
      };
    };
  }
  
  extern volatile sercom::Peripheral SERCOM0;
  extern volatile sercom::Peripheral SERCOM1;
}