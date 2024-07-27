        ////////////////////////////////////////////////////
        //       TFT_eSPI windows driver functions        //
        ////////////////////////////////////////////////////

// This is a driver for Windows Emulation

#ifndef _TFT_eSPI_WIN32H_
#define _TFT_eSPI_WIN32H_

// Processor ID reported by getSetup()
#define PROCESSOR_ID 0x0000

// Include processor specific header
// None

// Processor specific code used by SPI bus transaction startWrite and endWrite functions
#define SET_BUS_WRITE_MODE // Not used
#define SET_BUS_READ_MODE  // Not used

// Code to check if DMA is busy, used by SPI bus transaction startWrite and endWrite functions
#define DMA_BUSY_CHECK // Not used so leave blank

// To be safe, SUPPORT_TRANSACTIONS is assumed mandatory
#if !defined (SUPPORT_TRANSACTIONS)
  #define SUPPORT_TRANSACTIONS
#endif

// Initialise processor specific SPI functions, used by init()
#define INIT_TFT_DATA_BUS

////////////////////////////////////////////////////////////////////////////////////////
// Define the DC (TFT Data/Command or Register Select (RS))pin drive code
////////////////////////////////////////////////////////////////////////////////////////
  #define DC_C // No macro allocated so it generates no code
  #define DC_D // No macro allocated so it generates no code

////////////////////////////////////////////////////////////////////////////////////////
// Define the CS (TFT chip select) pin drive code
////////////////////////////////////////////////////////////////////////////////////////
  #define CS_L // No macro allocated so it generates no code
  #define CS_H // No macro allocated so it generates no code

////////////////////////////////////////////////////////////////////////////////////////
// Make sure TFT_RD is defined if not used to avoid an error message
////////////////////////////////////////////////////////////////////////////////////////
#ifndef TFT_RD
  #define TFT_RD -1
#endif

////////////////////////////////////////////////////////////////////////////////////////
// Define the touch screen chip select pin drive code
////////////////////////////////////////////////////////////////////////////////////////
  #define T_CS_L // No macro allocated so it generates no code
  #define T_CS_H // No macro allocated so it generates no code

////////////////////////////////////////////////////////////////////////////////////////
// Make sure TFT_MISO is defined if not used to avoid an error message
////////////////////////////////////////////////////////////////////////////////////////
#ifndef TFT_MISO
  #define TFT_MISO -1
#endif

////////////////////////////////////////////////////////////////////////////////////////
// Macros to write commands/pixel colour data to a TFT
////////////////////////////////////////////////////////////////////////////////////////
  // Write 8 bits to TFT
  #define tft_Write_8(C)

  // Convert 16 bit colour to 18 bit and write in 3 bytes
  #define tft_Write_16(C)

// Push a color to the next pixel
// Not supported
  #define tft_Write_16N tft_Write_16

  // Write two address coordinates
  #define tft_Write_32C(C,D)

// Write same value twice
#define tft_Write_32D(C)

#endif // Header end
