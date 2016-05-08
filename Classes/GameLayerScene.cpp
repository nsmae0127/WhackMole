#include "GameLayerScene.h"
#include "Mole.h"

USING_NS_CC;

enum ZORDER { zBG = 0, zTop, zMid = 3, zBot = 5, };

Scene* GameLayer::createScene()
{
    auto scene = Scene::create();
    
    auto layer = GameLayer::create();

    scene->addChild(layer);

    return scene;
}

bool GameLayer::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    initBG();
    
    initMole();
    
    return true;
}

void GameLayer::initBG()
{
    auto bg = Sprite::create("background.png");
    bg->setPosition(Point(240, 400));
    this->addChild(bg, zBG);

    auto fg_top = Sprite::create("layer_top.png");
    fg_top->setPosition(Point(240, 340));
    this->addChild(fg_top, zTop);

    auto fg_mid = Sprite::create("layer_middle.png");
    fg_mid->setPosition(Point(240, 210));
    this->addChild(fg_mid, zMid);

    auto fg_bot = Sprite::create("layer_under.png");
    fg_bot->setPosition(Point(240, 80));
    this->addChild(fg_bot, zBot);
}

void GameLayer::initMole()
{
    int num = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int xPos = 150 * j + 96;    // 두더지 좌표 x 생성
            int yPos = 130 * i + 90;    // 두더지 좌표 y 생성
            int zOrder = 4 - 2 * i;     // 두더지 순위 z 생성
            
            m_moles[num] = Mole::create();
            m_moles[num]->setPosition(Point(xPos, yPos));
            this->addChild(m_moles[num], zOrder);
            
            num++;
        }
    }
}