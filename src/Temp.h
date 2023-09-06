#include <Arduino.h>
class Temp
{
private:
    /* data */
    uint32_t _temp_int_private;
public:
    uint16_t temp_int_public;
    Temp(/* args */);
    ~Temp();
    void tempFunc(int a,int b);

};


