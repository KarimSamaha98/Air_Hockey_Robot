#ifndef _MICROROS_CLIENT_ESP32_BLUETOOTH_SERIAL_TRANSPORT_H_
#define _MICROROS_CLIENT_ESP32_BLUETOOTH_SERIAL_TRANSPORT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#if defined(CONFIG_BT_ENABLED) && defined(CONFIG_BLUEDROID_ENABLED)

bool esp32_bluetooth_serial_open(struct uxrCustomTransport * transport);
bool esp32_bluetooth_serial_close(struct uxrCustomTransport * transport);
size_t esp32_bluetooth_serial_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
size_t esp32_bluetooth_serial_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

#endif

#ifdef __cplusplus
}
#endif

#endif //_MICROROS_CLIENT_ESP32_BLUETOOTH_SERIAL_TRANSPORT_H_