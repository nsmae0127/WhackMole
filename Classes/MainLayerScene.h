#ifndef __MAINLAYER_SCENE_H__
#define __MAINLAYER_SCENE_H__

#include "cocos2d.h"

class MainLayer : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(MainLayer);
};

#endif // __MAINLAYER_SCENE_H__
