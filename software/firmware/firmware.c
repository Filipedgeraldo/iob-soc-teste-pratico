//#include "stdlib.h"
#include "system.h"
#include "periphs.h"
#include "iob-uart.h"

int main()
{
  unsigned long i_atual=0, i_prev=1, i_pprev=0;
  int i=2;
  //init uart 
  uart_init(UART_BASE,FREQ/BAUD);
  uart_printf("0 : %f \n", i_pprev);
  uart_printf("1 : %d \n",i_prev);
  for(i=2;i<=100;i++){
    i_atual=i_prev+i_pprev;
    i_pprev=i_prev;
    i_prev=i_atual;
    uart_printf("%d : %d\n",i,i_atual);
  }
  //uart_printf("\n\n\nHello world!\n\n\n");
  //char *a = malloc(10);
  //free(a);
}
