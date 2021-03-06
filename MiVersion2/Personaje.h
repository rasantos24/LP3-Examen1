#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<SDL.h>
#include<SDL_image.h>
#include <vector>
#include <list>
#include <iostream>
#include <map>
using namespace std;

class Personaje
{
    public:
        list<Personaje*> *personajes;
        string vector_actual_str;
        map< string, vector<SDL_Texture*>* > mapa_texturas;
        SDL_Texture* hitbox_azul;
        SDL_Texture* hitbox_roja;
        SDL_Rect rect,rect2,hitbox;
        int frame;
        int textura_actual_int;
        bool atacando;
        bool muerto;
        int cont1;

        vector<SDL_Texture*> pausar, ganar, perder;
        bool pausa, sal;
        int verde=0, salto1=0, salto2=0;
        int animacion_sho, animacion_salto;

        virtual void draw(SDL_Renderer* renderer);
        virtual void act()=0;
        void init(SDL_Renderer* renderer, list<Personaje*> *personajes);
        bool colision(SDL_Rect param);
        void attackCheck();
        void setAnimacion(string nombre);

        Personaje();
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
