# Tự tạo một file arduino_secret.h

# config cho main.cpp

```
#include <OTA_DIY.h>

void setup(){
  initialize()
  screen_test()
}

void loop(){
  ArduinoOTA.handle()
}

```

# config trong platformio #

```
upload_protocol = espota
upload_port     = 192.168.x.x       
upload_flags    =
   --auth= admin
```
* Lưu ý: Chỉ được sử dụng khi không sử dụng tính năng điều khiển wifi trên mạch esp32 và những mạch tương tự
