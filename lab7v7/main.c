#include <stdio.h>

enum Smth{
    торт,
    пирожное,
    мороженое,
    конфета,
    итп};



struct квадрат {
    int строна, площадь;

};
union ADSL{
    unsigned int condition;
    struct{
        unsigned int DSL:1;
        unsigned int PPP :1;
        unsigned int Link :1;
    } state;
} ADSL;

int main() {
    struct квадрат a;
    a.строна = 5;
    a.площадь = a.строна* a.строна;
    scanf("%x", &ADSL.condition);
    printf("1.%s\n2.%s\n3.%s\n", ADSL.state.DSL? "ON" : "OFF", ADSL.state.PPP ? "ON" : "OFF", ADSL.state.Link ? "ON" : "OFF");
    printf("%d\n",конфета);
    printf("%d\n",a.площадь);
    return 0;
}