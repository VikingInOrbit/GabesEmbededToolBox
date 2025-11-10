#include <platform_adapter.h>

void setup() {
    serialStart(115200);
    dWrite(13, 1);
    delayMs(500);
    dWrite(13, 0);
    serialWrite("Hello from GabesEmbeddedToolBox!\n");
}

void loop() {
    dWrite(13, 1);
    delayMs(100);
    dWrite(13, 0);
    delayMs(100);
}
