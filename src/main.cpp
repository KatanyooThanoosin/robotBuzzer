#include <Arduino.h>
#include "Buzzer.h"
// put function declarations here:
Buzzer buzzer=Buzzer();
void setup() {
  buzzer.playNote(buzzer.note_as4,500);
  buzzer.pauseNote();
}

void loop() {
}

