#include<iostream>
#include"relay.hpp"
#include"led.h"


int main()
{

   std::cout<< "Hello World\n";

   Relay_on();
   Relay_off();

   Led_on();
   Led_off();

   return 0;
}
