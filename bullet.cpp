#include "bullet.h"

bullet::bullet()
   {
     name="bullet";
   }

   void  bullet::update()
   {
     dx=cos(angle*DEGTORAD)*6;
     dy=sin(angle*DEGTORAD)*6;
     // angle+=rand()%7-3;  /*try this*/
     x+=dx;
     y+=dy;

     if (x>W || x<0 || y>H || y<0) life=0;
   }

