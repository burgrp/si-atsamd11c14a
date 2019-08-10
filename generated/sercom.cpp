namespace target {
  namespace sercom {
    namespace reg {
      namespace I2CM {
        
        /**
          I2CM Control A
        */
        class CTRLA {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Operating Mode
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x7 << 2)) >> 2;
          }
          /**
            Sets Operating Mode
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 2)) | ((value << 2) & (0x7 << 2));
          }
          /**
            Gets Run in Standby
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Run in Standby
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Pin Usage
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPINOUT() volatile {
            return (raw & (0x1 << 16)) >> 16;
          }
          /**
            Sets Pin Usage
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPINOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
          }
          /**
            Gets SDA Hold Time
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSDAHOLD() volatile {
            return (raw & (0x3 << 20)) >> 20;
          }
          /**
            Sets SDA Hold Time
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSDAHOLD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
          }
          /**
            Gets Master SCL Low Extend Timeout
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMEXTTOEN() volatile {
            return (raw & (0x1 << 22)) >> 22;
          }
          /**
            Sets Master SCL Low Extend Timeout
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMEXTTOEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
          }
          /**
            Gets Slave SCL Low Extend Timeout
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSEXTTOEN() volatile {
            return (raw & (0x1 << 23)) >> 23;
          }
          /**
            Sets Slave SCL Low Extend Timeout
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSEXTTOEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
          }
          /**
            Gets Transfer Speed
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSPEED() volatile {
            return (raw & (0x3 << 24)) >> 24;
          }
          /**
            Sets Transfer Speed
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSPEED(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 24)) | ((value << 24) & (0x3 << 24));
          }
          /**
            Gets SCL Clock Stretch Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSCLSM() volatile {
            return (raw & (0x1 << 27)) >> 27;
          }
          /**
            Sets SCL Clock Stretch Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSCLSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
          }
          /**
            Gets Inactive Time-Out
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getINACTOUT() volatile {
            return (raw & (0x3 << 28)) >> 28;
          }
          /**
            Sets Inactive Time-Out
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setINACTOUT(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 28)) | ((value << 28) & (0x3 << 28));
          }
          /**
            Gets SCL Low Timeout Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLOWTOUTEN() volatile {
            return (raw & (0x1 << 30)) >> 30;
          }
          /**
            Sets SCL Low Timeout Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLOWTOUTEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
          }
        };
        
        /**
          I2CM Control B
        */
        class CTRLB {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Smart Mode Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSMEN() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Smart Mode Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSMEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Quick Command Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getQCEN() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Quick Command Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setQCEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
          /**
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return (raw & (0x3 << 16)) >> 16;
          }
          /**
            Sets Command
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 16)) | ((value << 16) & (0x3 << 16));
          }
          /**
            Gets Acknowledge Action
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getACKACT() volatile {
            return (raw & (0x1 << 18)) >> 18;
          }
          /**
            Sets Acknowledge Action
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setACKACT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
          }
        };
        
        /**
          I2CM Baud Rate
        */
        class BAUD {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Baud Rate Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Baud Rate Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
          /**
            Gets Baud Rate Value Low
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getBAUDLOW() volatile {
            return (raw & (0xFF << 8)) >> 8;
          }
          /**
            Sets Baud Rate Value Low
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setBAUDLOW(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
          }
          /**
            Gets High Speed Baud Rate Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getHSBAUD() volatile {
            return (raw & (0xFF << 16)) >> 16;
          }
          /**
            Sets High Speed Baud Rate Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setHSBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
          }
          /**
            Gets High Speed Baud Rate Value Low
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getHSBAUDLOW() volatile {
            return (raw & (0xFF << 24)) >> 24;
          }
          /**
            Sets High Speed Baud Rate Value Low
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setHSBAUDLOW(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
          }
        };
        
        /**
          I2CM Interrupt Enable Clear
        */
        class INTENCLR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Master On Bus Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMB() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Master On Bus Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMB(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Slave On Bus Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSB() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Slave On Bus Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSB(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Combined Error Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          I2CM Interrupt Enable Set
        */
        class INTENSET {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Master On Bus Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMB() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Master On Bus Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMB(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Slave On Bus Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSB() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Slave On Bus Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSB(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Combined Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          I2CM Interrupt Flag Status and Clear
        */
        class INTFLAG {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Master On Bus Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMB() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Master On Bus Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMB(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Slave On Bus Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSB() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Slave On Bus Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSB(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Combined Error Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          I2CM Status
        */
        class STATUS {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Bus Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getBUSERR() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Bus Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setBUSERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Arbitration Lost
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getARBLOST() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Arbitration Lost
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setARBLOST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Received Not Acknowledge
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXNACK() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Received Not Acknowledge
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXNACK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Bus State
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getBUSSTATE() volatile {
            return (raw & (0x3 << 4)) >> 4;
          }
          /**
            Sets Bus State
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setBUSSTATE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
          }
          /**
            Gets SCL Low Timeout
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLOWTOUT() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets SCL Low Timeout
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLOWTOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Clock Hold
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCLKHOLD() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Clock Hold
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCLKHOLD(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Master SCL Low Extend Timeout
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMEXTTOUT() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Master SCL Low Extend Timeout
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMEXTTOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Slave SCL Low Extend Timeout
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSEXTTOUT() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Slave SCL Low Extend Timeout
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSEXTTOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
          /**
            Gets Length Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLENERR() volatile {
            return (raw & (0x1 << 10)) >> 10;
          }
          /**
            Sets Length Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLENERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
          }
        };
        
        /**
          I2CM Syncbusy
        */
        class SYNCBUSY {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets SERCOM Enable Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets SERCOM Enable Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets System Operation Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSYSOP() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets System Operation Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSYSOP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
        };
        
        /**
          I2CM Address
        */
        class ADDR {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Address Value
            @return value in range 0..2047
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0x7FF << 0)) >> 0;
          }
          /**
            Sets Address Value
            @param value in range 0..2047
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x7FF << 0)) | ((value << 0) & (0x7FF << 0));
          }
          /**
            Gets Length Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLENEN() volatile {
            return (raw & (0x1 << 13)) >> 13;
          }
          /**
            Sets Length Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLENEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
          }
          /**
            Gets High Speed Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getHS() volatile {
            return (raw & (0x1 << 14)) >> 14;
          }
          /**
            Sets High Speed Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setHS(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
          }
          /**
            Gets Ten Bit Addressing Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTENBITEN() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Ten Bit Addressing Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTENBITEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
          }
          /**
            Gets Length
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getLEN() volatile {
            return (raw & (0xFF << 16)) >> 16;
          }
          /**
            Sets Length
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setLEN(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
          }
        };
        
        /**
          I2CM Data
        */
        class DATA {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getDATA() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Data Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
        };
        
        /**
          I2CM Debug Control
        */
        class DBGCTRL {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Debug Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGSTOP() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Debug Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGSTOP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
        };
      };
      namespace I2CS {
        
        /**
          I2CS Control A
        */
        class CTRLA {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Operating Mode
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x7 << 2)) >> 2;
          }
          /**
            Sets Operating Mode
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 2)) | ((value << 2) & (0x7 << 2));
          }
          /**
            Gets Run during Standby
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Run during Standby
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Pin Usage
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPINOUT() volatile {
            return (raw & (0x1 << 16)) >> 16;
          }
          /**
            Sets Pin Usage
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPINOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
          }
          /**
            Gets SDA Hold Time
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSDAHOLD() volatile {
            return (raw & (0x3 << 20)) >> 20;
          }
          /**
            Sets SDA Hold Time
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSDAHOLD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
          }
          /**
            Gets Slave SCL Low Extend Timeout
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSEXTTOEN() volatile {
            return (raw & (0x1 << 23)) >> 23;
          }
          /**
            Sets Slave SCL Low Extend Timeout
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSEXTTOEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
          }
          /**
            Gets Transfer Speed
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSPEED() volatile {
            return (raw & (0x3 << 24)) >> 24;
          }
          /**
            Sets Transfer Speed
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSPEED(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 24)) | ((value << 24) & (0x3 << 24));
          }
          /**
            Gets SCL Clock Stretch Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSCLSM() volatile {
            return (raw & (0x1 << 27)) >> 27;
          }
          /**
            Sets SCL Clock Stretch Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSCLSM(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
          }
          /**
            Gets SCL Low Timeout Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLOWTOUTEN() volatile {
            return (raw & (0x1 << 30)) >> 30;
          }
          /**
            Sets SCL Low Timeout Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLOWTOUTEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
          }
        };
        
        /**
          I2CS Control B
        */
        class CTRLB {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Smart Mode Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSMEN() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Smart Mode Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSMEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets PMBus Group Command
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getGCMD() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets PMBus Group Command
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setGCMD(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
          /**
            Gets Automatic Address Acknowledge
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getAACKEN() volatile {
            return (raw & (0x1 << 10)) >> 10;
          }
          /**
            Sets Automatic Address Acknowledge
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setAACKEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
          }
          /**
            Gets Address Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getAMODE() volatile {
            return (raw & (0x3 << 14)) >> 14;
          }
          /**
            Sets Address Mode
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setAMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
          }
          /**
            Gets Command
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getCMD() volatile {
            return (raw & (0x3 << 16)) >> 16;
          }
          /**
            Sets Command
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setCMD(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 16)) | ((value << 16) & (0x3 << 16));
          }
          /**
            Gets Acknowledge Action
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getACKACT() volatile {
            return (raw & (0x1 << 18)) >> 18;
          }
          /**
            Sets Acknowledge Action
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setACKACT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
          }
        };
        
        /**
          I2CS Interrupt Enable Clear
        */
        class INTENCLR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Stop Received Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPREC() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Stop Received Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPREC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Address Match Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getAMATCH() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Address Match Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setAMATCH(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Data Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRDY() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Data Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Combined Error Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          I2CS Interrupt Enable Set
        */
        class INTENSET {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Stop Received Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPREC() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Stop Received Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPREC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Address Match Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getAMATCH() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Address Match Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setAMATCH(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Data Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRDY() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Data Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Combined Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          I2CS Interrupt Flag Status and Clear
        */
        class INTFLAG {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Stop Received Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPREC() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Stop Received Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPREC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Address Match Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getAMATCH() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Address Match Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setAMATCH(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Data Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRDY() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Data Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRDY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Combined Error Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          I2CS Status
        */
        class STATUS {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Bus Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getBUSERR() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Bus Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setBUSERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Transmit Collision
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCOLL() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Transmit Collision
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCOLL(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Received Not Acknowledge
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXNACK() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Received Not Acknowledge
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXNACK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Read/Write Direction
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDIR() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Read/Write Direction
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Repeated Start
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSR() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Repeated Start
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets SCL Low Timeout
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getLOWTOUT() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets SCL Low Timeout
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setLOWTOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Clock Hold
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCLKHOLD() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Clock Hold
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCLKHOLD(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Slave SCL Low Extend Timeout
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSEXTTOUT() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Slave SCL Low Extend Timeout
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSEXTTOUT(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
          /**
            Gets High Speed
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getHS() volatile {
            return (raw & (0x1 << 10)) >> 10;
          }
          /**
            Sets High Speed
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setHS(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
          }
        };
        
        /**
          I2CS Syncbusy
        */
        class SYNCBUSY {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets SERCOM Enable Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets SERCOM Enable Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
        };
        
        /**
          I2CS Address
        */
        class ADDR {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets General Call Address Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getGENCEN() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets General Call Address Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setGENCEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Address Value
            @return value in range 0..1023
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0x3FF << 1)) >> 1;
          }
          /**
            Sets Address Value
            @param value in range 0..1023
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0x3FF << 1)) | ((value << 1) & (0x3FF << 1));
          }
          /**
            Gets Ten Bit Addressing Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTENBITEN() volatile {
            return (raw & (0x1 << 15)) >> 15;
          }
          /**
            Sets Ten Bit Addressing Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTENBITEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
          }
          /**
            Gets Address Mask
            @return value in range 0..1023
          */
          __attribute__((always_inline)) unsigned long getADDRMASK() volatile {
            return (raw & (0x3FF << 17)) >> 17;
          }
          /**
            Sets Address Mask
            @param value in range 0..1023
          */
          __attribute__((always_inline)) unsigned long setADDRMASK(unsigned long value) volatile {
            raw = (raw & ~(0x3FF << 17)) | ((value << 17) & (0x3FF << 17));
          }
        };
        
        /**
          I2CS Data
        */
        class DATA {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getDATA() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Data Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
        };
      };
      namespace SPI {
        
        /**
          SPI Control A
        */
        class CTRLA {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Operating Mode
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x7 << 2)) >> 2;
          }
          /**
            Sets Operating Mode
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 2)) | ((value << 2) & (0x7 << 2));
          }
          /**
            Gets Run during Standby
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Run during Standby
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Immediate Buffer Overflow Notification
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getIBON() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Immediate Buffer Overflow Notification
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setIBON(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Data Out Pinout
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getDOPO() volatile {
            return (raw & (0x3 << 16)) >> 16;
          }
          /**
            Sets Data Out Pinout
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setDOPO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 16)) | ((value << 16) & (0x3 << 16));
          }
          /**
            Gets Data In Pinout
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getDIPO() volatile {
            return (raw & (0x3 << 20)) >> 20;
          }
          /**
            Sets Data In Pinout
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setDIPO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
          }
          /**
            Gets Frame Format
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getFORM() volatile {
            return (raw & (0xF << 24)) >> 24;
          }
          /**
            Sets Frame Format
            @param value in range 0..15
          */
          __attribute__((always_inline)) unsigned long setFORM(unsigned long value) volatile {
            raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
          }
          /**
            Gets Clock Phase
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCPHA() volatile {
            return (raw & (0x1 << 28)) >> 28;
          }
          /**
            Sets Clock Phase
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCPHA(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
          }
          /**
            Gets Clock Polarity
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCPOL() volatile {
            return (raw & (0x1 << 29)) >> 29;
          }
          /**
            Sets Clock Polarity
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCPOL(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
          }
          /**
            Gets Data Order
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDORD() volatile {
            return (raw & (0x1 << 30)) >> 30;
          }
          /**
            Sets Data Order
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDORD(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
          }
        };
        
        /**
          SPI Control B
        */
        class CTRLB {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Character Size
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getCHSIZE() volatile {
            return (raw & (0x7 << 0)) >> 0;
          }
          /**
            Sets Character Size
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setCHSIZE(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
          }
          /**
            Gets Data Preload Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPLOADEN() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Data Preload Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPLOADEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Slave Select Low Detect Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSSDE() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Slave Select Low Detect Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSSDE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
          /**
            Gets Master Slave Select Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getMSSEN() volatile {
            return (raw & (0x1 << 13)) >> 13;
          }
          /**
            Sets Master Slave Select Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setMSSEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
          }
          /**
            Gets Address Mode
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getAMODE() volatile {
            return (raw & (0x3 << 14)) >> 14;
          }
          /**
            Sets Address Mode
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setAMODE(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
          }
          /**
            Gets Receiver Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXEN() volatile {
            return (raw & (0x1 << 17)) >> 17;
          }
          /**
            Sets Receiver Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
          }
        };
        
        /**
          SPI Baud Rate
        */
        class BAUD {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Baud Rate Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Baud Rate Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
        };
        
        /**
          SPI Interrupt Enable Clear
        */
        class INTENCLR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Register Empty Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRE() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Register Empty Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Transmit Complete Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTXC() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Transmit Complete Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Receive Complete Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXC() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Receive Complete Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Slave Select Low Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSSL() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Slave Select Low Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSSL(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Combined Error Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          SPI Interrupt Enable Set
        */
        class INTENSET {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Register Empty Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRE() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Register Empty Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Transmit Complete Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTXC() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Transmit Complete Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Receive Complete Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXC() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Receive Complete Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Slave Select Low Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSSL() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Slave Select Low Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSSL(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Combined Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          SPI Interrupt Flag Status and Clear
        */
        class INTFLAG {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Register Empty Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRE() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Register Empty Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Transmit Complete Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTXC() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Transmit Complete Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Receive Complete Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXC() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Receive Complete Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Slave Select Low Interrupt Flag
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSSL() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Slave Select Low Interrupt Flag
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSSL(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Combined Error Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          SPI Status
        */
        class STATUS {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Buffer Overflow
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getBUFOVF() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Buffer Overflow
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setBUFOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
        };
        
        /**
          SPI Syncbusy
        */
        class SYNCBUSY {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets SERCOM Enable Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets SERCOM Enable Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets CTRLB Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCTRLB() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets CTRLB Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCTRLB(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
        };
        
        /**
          SPI Address
        */
        class ADDR {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Address Value
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getADDR() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Address Value
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setADDR(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
          /**
            Gets Address Mask
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getADDRMASK() volatile {
            return (raw & (0xFF << 16)) >> 16;
          }
          /**
            Sets Address Mask
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setADDRMASK(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
          }
        };
        
        /**
          SPI Data
        */
        class DATA {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Value
            @return value in range 0..511
          */
          __attribute__((always_inline)) unsigned long getDATA() volatile {
            return (raw & (0x1FF << 0)) >> 0;
          }
          /**
            Sets Data Value
            @param value in range 0..511
          */
          __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
            raw = (raw & ~(0x1FF << 0)) | ((value << 0) & (0x1FF << 0));
          }
        };
        
        /**
          SPI Debug Control
        */
        class DBGCTRL {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Debug Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGSTOP() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Debug Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGSTOP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
        };
      };
      namespace USART {
        
        /**
          USART Control A
        */
        class CTRLA {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Operating Mode
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getMODE() volatile {
            return (raw & (0x7 << 2)) >> 2;
          }
          /**
            Sets Operating Mode
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setMODE(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 2)) | ((value << 2) & (0x7 << 2));
          }
          /**
            Gets Run during Standby
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRUNSTDBY() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Run during Standby
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRUNSTDBY(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
          /**
            Gets Immediate Buffer Overflow Notification
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getIBON() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Immediate Buffer Overflow Notification
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setIBON(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Sample
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getSAMPR() volatile {
            return (raw & (0x7 << 13)) >> 13;
          }
          /**
            Sets Sample
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setSAMPR(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
          }
          /**
            Gets Transmit Data Pinout
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getTXPO() volatile {
            return (raw & (0x3 << 16)) >> 16;
          }
          /**
            Sets Transmit Data Pinout
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setTXPO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 16)) | ((value << 16) & (0x3 << 16));
          }
          /**
            Gets Receive Data Pinout
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getRXPO() volatile {
            return (raw & (0x3 << 20)) >> 20;
          }
          /**
            Sets Receive Data Pinout
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setRXPO(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
          }
          /**
            Gets Sample Adjustment
            @return value in range 0..3
          */
          __attribute__((always_inline)) unsigned long getSAMPA() volatile {
            return (raw & (0x3 << 22)) >> 22;
          }
          /**
            Sets Sample Adjustment
            @param value in range 0..3
          */
          __attribute__((always_inline)) unsigned long setSAMPA(unsigned long value) volatile {
            raw = (raw & ~(0x3 << 22)) | ((value << 22) & (0x3 << 22));
          }
          /**
            Gets Frame Format
            @return value in range 0..15
          */
          __attribute__((always_inline)) unsigned long getFORM() volatile {
            return (raw & (0xF << 24)) >> 24;
          }
          /**
            Sets Frame Format
            @param value in range 0..15
          */
          __attribute__((always_inline)) unsigned long setFORM(unsigned long value) volatile {
            raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
          }
          /**
            Gets Communication Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCMODE() volatile {
            return (raw & (0x1 << 28)) >> 28;
          }
          /**
            Sets Communication Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCMODE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
          }
          /**
            Gets Clock Polarity
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCPOL() volatile {
            return (raw & (0x1 << 29)) >> 29;
          }
          /**
            Sets Clock Polarity
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCPOL(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
          }
          /**
            Gets Data Order
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDORD() volatile {
            return (raw & (0x1 << 30)) >> 30;
          }
          /**
            Sets Data Order
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDORD(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
          }
        };
        
        /**
          USART Control B
        */
        class CTRLB {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Character Size
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getCHSIZE() volatile {
            return (raw & (0x7 << 0)) >> 0;
          }
          /**
            Sets Character Size
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setCHSIZE(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
          }
          /**
            Gets Stop Bit Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSBMODE() volatile {
            return (raw & (0x1 << 6)) >> 6;
          }
          /**
            Sets Stop Bit Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSBMODE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
          }
          /**
            Gets Collision Detection Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCOLDEN() volatile {
            return (raw & (0x1 << 8)) >> 8;
          }
          /**
            Sets Collision Detection Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCOLDEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
          }
          /**
            Gets Start of Frame Detection Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSFDE() volatile {
            return (raw & (0x1 << 9)) >> 9;
          }
          /**
            Sets Start of Frame Detection Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSFDE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
          }
          /**
            Gets Encoding Format
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENC() volatile {
            return (raw & (0x1 << 10)) >> 10;
          }
          /**
            Sets Encoding Format
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
          }
          /**
            Gets Parity Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPMODE() volatile {
            return (raw & (0x1 << 13)) >> 13;
          }
          /**
            Sets Parity Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPMODE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
          }
          /**
            Gets Transmitter Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTXEN() volatile {
            return (raw & (0x1 << 16)) >> 16;
          }
          /**
            Sets Transmitter Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTXEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
          }
          /**
            Gets Receiver Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXEN() volatile {
            return (raw & (0x1 << 17)) >> 17;
          }
          /**
            Sets Receiver Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXEN(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
          }
        };
        
        /**
          USART Baud Rate
        */
        class BAUD {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Baud Rate Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return (raw & (0xFFFF << 0)) >> 0;
          }
          /**
            Sets Baud Rate Value
            @param value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
          }
        };
        
        /**
          USART Baud Rate
        */
        class BAUD_FRAC_MODE {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Baud Rate Value
            @return value in range 0..8191
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return (raw & (0x1FFF << 0)) >> 0;
          }
          /**
            Sets Baud Rate Value
            @param value in range 0..8191
          */
          __attribute__((always_inline)) unsigned long setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0x1FFF << 0)) | ((value << 0) & (0x1FFF << 0));
          }
          /**
            Gets Fractional Part
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getFP() volatile {
            return (raw & (0x7 << 13)) >> 13;
          }
          /**
            Sets Fractional Part
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setFP(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
          }
        };
        
        /**
          USART Baud Rate
        */
        class BAUD_FRACFP_MODE {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Baud Rate Value
            @return value in range 0..8191
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return (raw & (0x1FFF << 0)) >> 0;
          }
          /**
            Sets Baud Rate Value
            @param value in range 0..8191
          */
          __attribute__((always_inline)) unsigned long setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0x1FFF << 0)) | ((value << 0) & (0x1FFF << 0));
          }
          /**
            Gets Fractional Part
            @return value in range 0..7
          */
          __attribute__((always_inline)) unsigned long getFP() volatile {
            return (raw & (0x7 << 13)) >> 13;
          }
          /**
            Sets Fractional Part
            @param value in range 0..7
          */
          __attribute__((always_inline)) unsigned long setFP(unsigned long value) volatile {
            raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
          }
        };
        
        /**
          USART Baud Rate
        */
        class BAUD_USARTFP_MODE {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Baud Rate Value
            @return value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long getBAUD() volatile {
            return (raw & (0xFFFF << 0)) >> 0;
          }
          /**
            Sets Baud Rate Value
            @param value in range 0..65535
          */
          __attribute__((always_inline)) unsigned long setBAUD(unsigned long value) volatile {
            raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
          }
        };
        
        /**
          USART Receive Pulse Length
        */
        class RXPL {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Receive Pulse Length
            @return value in range 0..255
          */
          __attribute__((always_inline)) unsigned long getRXPL() volatile {
            return (raw & (0xFF << 0)) >> 0;
          }
          /**
            Sets Receive Pulse Length
            @param value in range 0..255
          */
          __attribute__((always_inline)) unsigned long setRXPL(unsigned long value) volatile {
            raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
          }
        };
        
        /**
          USART Interrupt Enable Clear
        */
        class INTENCLR {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Register Empty Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRE() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Register Empty Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Transmit Complete Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTXC() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Transmit Complete Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Receive Complete Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXC() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Receive Complete Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Receive Start Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXS() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Receive Start Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXS(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Clear To Send Input Change Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCTSIC() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Clear To Send Input Change Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCTSIC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets Break Received Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXBRK() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets Break Received Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXBRK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Combined Error Interrupt Disable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt Disable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          USART Interrupt Enable Set
        */
        class INTENSET {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Register Empty Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRE() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Register Empty Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Transmit Complete Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTXC() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Transmit Complete Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Receive Complete Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXC() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Receive Complete Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Receive Start Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXS() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Receive Start Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXS(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Clear To Send Input Change Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCTSIC() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Clear To Send Input Change Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCTSIC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets Break Received Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXBRK() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets Break Received Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXBRK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Combined Error Interrupt Enable
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt Enable
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          USART Interrupt Flag Status and Clear
        */
        class INTFLAG {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Register Empty Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDRE() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Data Register Empty Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDRE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Transmit Complete Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getTXC() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Transmit Complete Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setTXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Receive Complete Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXC() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Receive Complete Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Receive Start Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXS() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Receive Start Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXS(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Clear To Send Input Change Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCTSIC() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Clear To Send Input Change Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCTSIC(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets Break Received Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getRXBRK() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets Break Received Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setRXBRK(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
          /**
            Gets Combined Error Interrupt
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getERROR() volatile {
            return (raw & (0x1 << 7)) >> 7;
          }
          /**
            Sets Combined Error Interrupt
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setERROR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
          }
        };
        
        /**
          USART Status
        */
        class STATUS {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Parity Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getPERR() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Parity Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setPERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets Frame Error
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getFERR() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets Frame Error
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setFERR(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets Buffer Overflow
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getBUFOVF() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets Buffer Overflow
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setBUFOVF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
          /**
            Gets Clear To Send
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCTS() volatile {
            return (raw & (0x1 << 3)) >> 3;
          }
          /**
            Sets Clear To Send
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCTS(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
          }
          /**
            Gets Inconsistent Sync Field
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getISF() volatile {
            return (raw & (0x1 << 4)) >> 4;
          }
          /**
            Sets Inconsistent Sync Field
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setISF(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
          }
          /**
            Gets Collision Detected
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCOLL() volatile {
            return (raw & (0x1 << 5)) >> 5;
          }
          /**
            Sets Collision Detected
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCOLL(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
          }
        };
        
        /**
          USART Syncbusy
        */
        class SYNCBUSY {
          volatile unsigned long raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Software Reset Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getSWRST() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Software Reset Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setSWRST(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
          }
          /**
            Gets SERCOM Enable Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getENABLE() volatile {
            return (raw & (0x1 << 1)) >> 1;
          }
          /**
            Sets SERCOM Enable Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setENABLE(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
          }
          /**
            Gets CTRLB Synchronization Busy
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getCTRLB() volatile {
            return (raw & (0x1 << 2)) >> 2;
          }
          /**
            Sets CTRLB Synchronization Busy
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setCTRLB(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
          }
        };
        
        /**
          USART Data
        */
        class DATA {
          volatile unsigned short raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Data Value
            @return value in range 0..511
          */
          __attribute__((always_inline)) unsigned long getDATA() volatile {
            return (raw & (0x1FF << 0)) >> 0;
          }
          /**
            Sets Data Value
            @param value in range 0..511
          */
          __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
            raw = (raw & ~(0x1FF << 0)) | ((value << 0) & (0x1FF << 0));
          }
        };
        
        /**
          USART Debug Control
        */
        class DBGCTRL {
          volatile unsigned char raw;
          public:
          __attribute__((always_inline)) void operator= (unsigned long value) volatile {
            raw = value;
          }
          __attribute__((always_inline)) operator unsigned long () volatile {
            return raw;
          }
          /**
            Gets Debug Mode
            @return value in range 0..1
          */
          __attribute__((always_inline)) unsigned long getDBGSTOP() volatile {
            return (raw & (0x1 << 0)) >> 0;
          }
          /**
            Sets Debug Mode
            @param value in range 0..1
          */
          __attribute__((always_inline)) unsigned long setDBGSTOP(unsigned long value) volatile {
            raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
            volatile reg::I2CM::CTRLA CTRLA;
          };
          struct {
            volatile char _space_CTRLB[0x4];
            /**
              I2CM Control B
            */
            volatile reg::I2CM::CTRLB CTRLB;
          };
          struct {
            volatile char _space_BAUD[0xc];
            /**
              I2CM Baud Rate
            */
            volatile reg::I2CM::BAUD BAUD;
          };
          struct {
            volatile char _space_INTENCLR[0x14];
            /**
              I2CM Interrupt Enable Clear
            */
            volatile reg::I2CM::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0x16];
            /**
              I2CM Interrupt Enable Set
            */
            volatile reg::I2CM::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0x18];
            /**
              I2CM Interrupt Flag Status and Clear
            */
            volatile reg::I2CM::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0x1a];
            /**
              I2CM Status
            */
            volatile reg::I2CM::STATUS STATUS;
          };
          struct {
            volatile char _space_SYNCBUSY[0x1c];
            /**
              I2CM Syncbusy
            */
            volatile reg::I2CM::SYNCBUSY SYNCBUSY;
          };
          struct {
            volatile char _space_ADDR[0x24];
            /**
              I2CM Address
            */
            volatile reg::I2CM::ADDR ADDR;
          };
          struct {
            volatile char _space_DATA[0x28];
            /**
              I2CM Data
            */
            volatile reg::I2CM::DATA DATA;
          };
          struct {
            volatile char _space_DBGCTRL[0x30];
            /**
              I2CM Debug Control
            */
            volatile reg::I2CM::DBGCTRL DBGCTRL;
          };
        } I2CM;
        union {
          struct {
            /**
              I2CS Control A
            */
            volatile reg::I2CS::CTRLA CTRLA;
          };
          struct {
            volatile char _space_CTRLB[0x4];
            /**
              I2CS Control B
            */
            volatile reg::I2CS::CTRLB CTRLB;
          };
          struct {
            volatile char _space_INTENCLR[0x14];
            /**
              I2CS Interrupt Enable Clear
            */
            volatile reg::I2CS::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0x16];
            /**
              I2CS Interrupt Enable Set
            */
            volatile reg::I2CS::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0x18];
            /**
              I2CS Interrupt Flag Status and Clear
            */
            volatile reg::I2CS::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0x1a];
            /**
              I2CS Status
            */
            volatile reg::I2CS::STATUS STATUS;
          };
          struct {
            volatile char _space_SYNCBUSY[0x1c];
            /**
              I2CS Syncbusy
            */
            volatile reg::I2CS::SYNCBUSY SYNCBUSY;
          };
          struct {
            volatile char _space_ADDR[0x24];
            /**
              I2CS Address
            */
            volatile reg::I2CS::ADDR ADDR;
          };
          struct {
            volatile char _space_DATA[0x28];
            /**
              I2CS Data
            */
            volatile reg::I2CS::DATA DATA;
          };
        } I2CS;
        union {
          struct {
            /**
              SPI Control A
            */
            volatile reg::SPI::CTRLA CTRLA;
          };
          struct {
            volatile char _space_CTRLB[0x4];
            /**
              SPI Control B
            */
            volatile reg::SPI::CTRLB CTRLB;
          };
          struct {
            volatile char _space_BAUD[0xc];
            /**
              SPI Baud Rate
            */
            volatile reg::SPI::BAUD BAUD;
          };
          struct {
            volatile char _space_INTENCLR[0x14];
            /**
              SPI Interrupt Enable Clear
            */
            volatile reg::SPI::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0x16];
            /**
              SPI Interrupt Enable Set
            */
            volatile reg::SPI::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0x18];
            /**
              SPI Interrupt Flag Status and Clear
            */
            volatile reg::SPI::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0x1a];
            /**
              SPI Status
            */
            volatile reg::SPI::STATUS STATUS;
          };
          struct {
            volatile char _space_SYNCBUSY[0x1c];
            /**
              SPI Syncbusy
            */
            volatile reg::SPI::SYNCBUSY SYNCBUSY;
          };
          struct {
            volatile char _space_ADDR[0x24];
            /**
              SPI Address
            */
            volatile reg::SPI::ADDR ADDR;
          };
          struct {
            volatile char _space_DATA[0x28];
            /**
              SPI Data
            */
            volatile reg::SPI::DATA DATA;
          };
          struct {
            volatile char _space_DBGCTRL[0x30];
            /**
              SPI Debug Control
            */
            volatile reg::SPI::DBGCTRL DBGCTRL;
          };
        } SPI;
        union {
          struct {
            /**
              USART Control A
            */
            volatile reg::USART::CTRLA CTRLA;
          };
          struct {
            volatile char _space_CTRLB[0x4];
            /**
              USART Control B
            */
            volatile reg::USART::CTRLB CTRLB;
          };
          struct {
            volatile char _space_BAUD[0xc];
            /**
              USART Baud Rate
            */
            volatile reg::USART::BAUD BAUD;
          };
          struct {
            volatile char _space_BAUD_FRAC_MODE[0xc];
            /**
              USART Baud Rate
            */
            volatile reg::USART::BAUD_FRAC_MODE BAUD_FRAC_MODE;
          };
          struct {
            volatile char _space_BAUD_FRACFP_MODE[0xc];
            /**
              USART Baud Rate
            */
            volatile reg::USART::BAUD_FRACFP_MODE BAUD_FRACFP_MODE;
          };
          struct {
            volatile char _space_BAUD_USARTFP_MODE[0xc];
            /**
              USART Baud Rate
            */
            volatile reg::USART::BAUD_USARTFP_MODE BAUD_USARTFP_MODE;
          };
          struct {
            volatile char _space_RXPL[0xe];
            /**
              USART Receive Pulse Length
            */
            volatile reg::USART::RXPL RXPL;
          };
          struct {
            volatile char _space_INTENCLR[0x14];
            /**
              USART Interrupt Enable Clear
            */
            volatile reg::USART::INTENCLR INTENCLR;
          };
          struct {
            volatile char _space_INTENSET[0x16];
            /**
              USART Interrupt Enable Set
            */
            volatile reg::USART::INTENSET INTENSET;
          };
          struct {
            volatile char _space_INTFLAG[0x18];
            /**
              USART Interrupt Flag Status and Clear
            */
            volatile reg::USART::INTFLAG INTFLAG;
          };
          struct {
            volatile char _space_STATUS[0x1a];
            /**
              USART Status
            */
            volatile reg::USART::STATUS STATUS;
          };
          struct {
            volatile char _space_SYNCBUSY[0x1c];
            /**
              USART Syncbusy
            */
            volatile reg::USART::SYNCBUSY SYNCBUSY;
          };
          struct {
            volatile char _space_DATA[0x28];
            /**
              USART Data
            */
            volatile reg::USART::DATA DATA;
          };
          struct {
            volatile char _space_DBGCTRL[0x30];
            /**
              USART Debug Control
            */
            volatile reg::USART::DBGCTRL DBGCTRL;
          };
        } USART;
      };
    };
  }
  
  extern sercom::Peripheral SERCOM0;
  extern sercom::Peripheral SERCOM1;
}