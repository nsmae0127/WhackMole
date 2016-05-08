#ifndef __GAMELAYER_SCENE_H__
#define __GAMELAYER_SCENE_H__

#include "cocos2d.h"

class Mole;

class GameLayer : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(GameLayer);
    
    void initBG();
    
    void initMole();
    
private:
    Mole *m_moles[9];
};

#endif // __GAMELAYER_SCENE_H__
