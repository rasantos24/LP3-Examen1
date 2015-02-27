#include "EnemigoRojo.h"

EnemigoRojo::EnemigoRojo(SDL_Renderer* renderer,list<Personaje*> *personajes)
{
    mapa_texturas["left"] = new vector<SDL_Texture*>();
    mapa_texturas["right"] = new vector<SDL_Texture*>();
    mapa_texturas["walk_right"] = new vector<SDL_Texture*>();
    mapa_texturas["walk_left"] = new vector<SDL_Texture*>();
    mapa_texturas["jump_right"] = new vector<SDL_Texture*>();
    mapa_texturas["jump_left"] = new vector<SDL_Texture*>();
    mapa_texturas["punch_right"] = new vector<SDL_Texture*>();
    mapa_texturas["punch_left"] = new vector<SDL_Texture*>();
    mapa_texturas["kick_right"] = new vector<SDL_Texture*>();
    mapa_texturas["kick_left"] = new vector<SDL_Texture*>();

    mapa_texturas["right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/standing/1.png"));
    mapa_texturas["right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/standing/2.png"));
    mapa_texturas["right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/standing/3.png"));
    mapa_texturas["right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/standing/4.png"));

    mapa_texturas["left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/standing_left/1.png"));
    mapa_texturas["left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/standing_left/2.png"));
    mapa_texturas["left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/standing_left/3.png"));
    mapa_texturas["left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/standing_left/4.png"));

    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk/1.png"));
    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk/2.png"));
    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk/3.png"));
    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk/4.png"));
    mapa_texturas["walk_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk/5.png"));

    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk_left/1.png"));
    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk_left/2.png"));
    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk_left/3.png"));
    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk_left/4.png"));
    mapa_texturas["walk_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/walk_left/5.png"));

    mapa_texturas["jump_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_right/1.png"));
    mapa_texturas["jump_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_right/2.png"));
    mapa_texturas["jump_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_right/3.png"));
    mapa_texturas["jump_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_right/4.png"));
    mapa_texturas["jump_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_right/5.png"));
    mapa_texturas["jump_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_right/6.png"));
    mapa_texturas["jump_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_right/7.png"));

    mapa_texturas["jump_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_left/1.png"));
    mapa_texturas["jump_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_left/2.png"));
    mapa_texturas["jump_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_left/3.png"));
    mapa_texturas["jump_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_left/4.png"));
    mapa_texturas["jump_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_left/5.png"));
    mapa_texturas["jump_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_left/6.png"));
    mapa_texturas["jump_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/jumpUp_left/7.png"));

    mapa_texturas["punch_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/punch_right/1.png"));
    mapa_texturas["punch_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/punch_right/2.png"));
    mapa_texturas["punch_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/punch_right/3.png"));

    mapa_texturas["punch_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/punch_left/1.png"));
    mapa_texturas["punch_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/punch_left/2.png"));
    mapa_texturas["punch_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/punch_left/3.png"));

    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_right/1.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_right/2.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_right/3.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_right/4.png"));
    mapa_texturas["kick_right"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_right/5.png"));

    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_left/1.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_left/2.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_left/3.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_left/4.png"));
    mapa_texturas["kick_left"]->push_back(IMG_LoadTexture(renderer,"EnemyRed/light_kick_left/5.png"));

    vector_actual_str = "left";

    rect.x = 781;
    rect.y = 250;

    init(renderer,personajes);

    pausar.push_back(IMG_LoadTexture(renderer,"pausa.png"));
    SDL_QueryTexture(pausar[0], NULL, NULL, &rect2.w, &rect2.h);
    rect2.x = 200;
    rect2.y = 150;

    salto1 = 0;

    sal = false;

    frame = 0;
    verde = rect.y;

}

void EnemigoRojo::saltar()
{
    verde = rect.y;
    salto1 = 0;
    salto2 = 3;
    sal = true;
}

void EnemigoRojo::act()
{
    const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);

    if(this->pausa == false)
    {
        if(currentKeyStates[SDL_SCANCODE_L])
        {
            atacando = true;
            if(vector_actual_str=="walk_right" || vector_actual_str=="right")
            {
                setAnimacion("punch_right");
            }

            if(vector_actual_str=="walk_left" || vector_actual_str=="left")
            {
                setAnimacion("punch_left");
            }
        }
        else if(currentKeyStates[SDL_SCANCODE_K])
        {
            atacando = true;
            if(vector_actual_str=="walk_right" || vector_actual_str=="right")
            {
                setAnimacion("kick_right");
            }

            if(vector_actual_str=="walk_left" || vector_actual_str=="left")
            {
                setAnimacion("kick_left");
            }
        }
        else
        {
            atacando = false;
        }

        if(!sal)
        {
            if(currentKeyStates[SDL_SCANCODE_UP] && currentKeyStates[SDL_SCANCODE_M] && rect.y >= 200)
            {
                saltar();
                setAnimacion("jump_right");
            }

            else if(currentKeyStates[SDL_SCANCODE_UP] && currentKeyStates[SDL_SCANCODE_COMMA] && rect.y >= 200)
            {
                saltar();
                setAnimacion("jump_left");
            }
            else
            {
                if(vector_actual_str == "jump_right")
                    vector_actual_str = "right";

                if(vector_actual_str == "jump_left")
                    vector_actual_str = "left";
            }
        }

        if(currentKeyStates[SDL_SCANCODE_RIGHT] && rect.x <= 880)
        {
            rect.x++;
            setAnimacion("walk_right");
        }
        else if(currentKeyStates[SDL_SCANCODE_LEFT] && rect.x >= 1)
        {
            rect.x--;
            setAnimacion("walk_left");
        }
        else
        {
            if(vector_actual_str == "walk_right")
                vector_actual_str = "right";

            if(vector_actual_str == "walk_left")
                vector_actual_str = "left";
        }

        attackCheck();

        if(currentKeyStates[SDL_SCANCODE_P])
        {
            this->pausa=true;
        }
    }

    if(currentKeyStates[SDL_SCANCODE_O])
    {
        this->pausa=false;
    }
}

EnemigoRojo::~EnemigoRojo()
{
    //dtor
}
