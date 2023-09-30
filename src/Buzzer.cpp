#include "Buzzer.h"
Buzzer::Buzzer(/* args */)
{
}

Buzzer::~Buzzer()
{
}

void Buzzer::playNote(uint16_t note,int time)
{
    tone(this->pin,note);
    delay(time);
}

void Buzzer::pauseNote(){
    noTone(this->pin);
}
