#include <Arduino.h>
class Buzzer
{
private:
    uint16_t pin = 21;
public:
    uint16_t note_b0=31;
    uint16_t note_cs1=35;
    uint16_t note_c1 =33;
    uint16_t note_d1 =37;
    uint16_t note_ds1=39;
    uint16_t note_e1 =41;
    uint16_t note_f1 =44;
    uint16_t note_fs1=46;
    uint16_t note_g1 =49;
    uint16_t note_gs1=52;
    uint16_t note_a1 =55;
    uint16_t note_as1=58;
    uint16_t note_b1 =62;
    uint16_t note_c2 =65;
    uint16_t note_cs2=69;
    uint16_t note_d2 =73;
    uint16_t note_ds2=78;
    uint16_t note_e2 =82;
    uint16_t note_f2 =87;
    uint16_t note_fs2=93;
    uint16_t note_g2 =98;
    uint16_t note_gs2=104;
    uint16_t note_a2 =110;
    uint16_t note_as2=117;
    uint16_t note_b2 =123;
    uint16_t note_c3 =131;
    uint16_t note_cs3=139;
    uint16_t note_d3 =147;
    uint16_t note_ds3=156;
    uint16_t note_e3 =165;
    uint16_t note_f3 =175;
    uint16_t note_fs3=185;
    uint16_t note_g3 =196;
    uint16_t note_gs3=208;
    uint16_t note_a3 =220;
    uint16_t note_as3=233;
    uint16_t note_b3 =247;
    uint16_t note_c4 =262;
    uint16_t note_cs4=277;
    uint16_t note_d4 =294;
    uint16_t note_ds4=311;
    uint16_t note_e4 =330;
    uint16_t note_f4 =349;
    uint16_t note_fs4=370;
    uint16_t note_g4 =392;
    uint16_t note_gs4=415;
    uint16_t note_a4 =440;
    uint16_t note_as4=466;
    uint16_t note_b4 =494;
    uint16_t note_c5 =523;
    uint16_t note_cs5=554;
    uint16_t note_d5 =587;
    uint16_t note_ds5=622;
    uint16_t note_e5 =659;
    uint16_t note_f5 =698;
    uint16_t note_fs5=740;
    uint16_t note_g5 =784;
    uint16_t note_gs5=831;
    uint16_t note_a5 =880;
    uint16_t note_as5=932;
    uint16_t note_b5 =988;
    uint16_t note_c6 =1047;
    uint16_t note_cs6=1109;
    uint16_t note_d6 =1175;
    uint16_t note_ds6=1245;
    uint16_t note_e6 =1319;
    uint16_t note_f6 =1397;
    uint16_t note_fs6=1480;
    uint16_t note_g6 =1568;
    uint16_t note_gs6=1661;
    uint16_t note_a6 =1760;
    uint16_t note_as6=1865;
    uint16_t note_b6 =1976;
    uint16_t note_c7 =2093;
    uint16_t note_cs7=2217;
    uint16_t note_d7 =2349;
    uint16_t note_ds7=2489;
    uint16_t note_e7 =2637;
    uint16_t note_f7 =2794;
    uint16_t note_fs7=2960;
    uint16_t note_g7 =3136;
    uint16_t note_gs7=3322;
    uint16_t note_a7 =3520;
    uint16_t note_as7=3729;
    uint16_t note_b7 =3951;
    uint16_t note_c8 =4186;
    uint16_t note_cs8=4435;
    uint16_t note_d8 =4699;
    uint16_t note_ds8=4978;

    Buzzer();
    ~Buzzer();
    void playNote(uint16_t note,int time);
    void pauseNote();
};