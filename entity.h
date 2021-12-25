#ifndef ENTITY_H
#define ENTITY_H
#include <SFML/Graphics.hpp>
#include "animation.h"
#include <cmath>

using namespace sf;


class Entity
{
   public:
    const int W = 1200;
    const int H = 800;
    float DEGTORAD = 0.017453f;
   float x,y,dx,dy,R,angle;
   bool life;
   std::string name;
   Animation anim;

   Entity();

   void settings(Animation &a,int X,int Y,float Angle=0,int radius=1);
   virtual void update(){}; //dipende dal tipo di oggetto

   void draw(RenderWindow &app);

   virtual ~Entity(){};
};

#endif // ENTITY_H
