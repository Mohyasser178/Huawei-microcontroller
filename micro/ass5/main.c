typedef unsigned char u8; typedef unsigned long int u32;

int SSD[]=[{

0b00111111,//0

0b00000110,//1

0b01011011,//2

0b01001111,//3

0b01100110,//4

0b01101101,//5

0b01111101,//6

0b00000111,//7

Ob01111111,//8

0b01101111,//9
}
int i;

u8 cell_4,cell_3,cell_2, cell_1;

u32 num;

void main()
{


TRISD = 0x00;
PORTD = 0x00;
TRISA = 0;
PORTA = 0;

num 1234;

cell_4= (num/1000)%10;
cell_3= (num/100)%10;
cell 2= (num/10)%10;
cell_1= (num/1)%10;

while(1) {

PORTD=SSD[cell 4);
PORTA.F2=1;
PORTA.F3=0;
PORTA.F4=0;
PORTA.F5=0;
delay_ms (500);

PORTD=SSD[cell 3);
PORTA. F2=0;
PORTA.F3=1;
PORTA.F4=0;
PORTA.F5=0;
delay_ms(500);

PORTD=SSD [cell_2];
PORTA.F2=0;
PORTA.F3=0;
PORTA.F4-1;
PORTA.F5=0;
delay_ms (500);

PORTD=SSD[cell_1];

PORTA.F2=0;

PORTA.F3=0;

PORTA.F4=0;

PORTA.F5=1;

delay_ms(500);}
}
