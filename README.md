Tự tạo một file arduino_secret.h

*config cho main.cpp*

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

*config trong platformio*

```
upload_protocol = espota
upload_port     = 192.168.x.x       
upload_flags    =
   --auth= admin
```
