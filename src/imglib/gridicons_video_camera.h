#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_video_camera
const unsigned char gridicons_video_camera[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 
0x00, 0x07, 0xCE, 0x00, 0x03, 0xC6, 0x00, 0x03, 
0xC2, 0x00, 0x03, 0xC0, 0x00, 0x03, 0xC0, 0x00, 
0x03, 0xC0, 0x00, 0x03, 0xC0, 0x00, 0x03, 0xC0, 
0x00, 0x03, 0xC0, 0x00, 0x03, 0xC2, 0x00, 0x03, 
0xC6, 0x00, 0x03, 0xCE, 0x00, 0x03, 0xDF, 0x00, 
0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
