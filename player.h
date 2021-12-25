#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class player: public Entity
{
   public:
   bool thrust;

   player();

   void update();

};


#endif // PLAYER_H
