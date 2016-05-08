#include "MainLayerScene.h"

USING_NS_CC;

Scene* MainLayer::createScene()
{
    auto scene = Scene::create();
    
    auto layer = MainLayer::create();

    scene->addChild(layer);

    return scene;
}

bool MainLayer::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    return true;
}
