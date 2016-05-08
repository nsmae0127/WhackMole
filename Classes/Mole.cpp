#include "Mole.h"

USING_NS_CC;

bool Mole::init()
{
    if ( !Sprite::init() )
    {
        return false;
    }
    
    p_mole = Sprite::create("mole.png");
    this->addChild(p_mole);
        
    return true;
}

void Mole::comeUp()
{
    auto up = MoveBy::create(0.5f, Point(0, 100));
    
    float random = rand() % 5 + 1;
    auto delay = DelayTime::create(random);
    
    // 위로 올라왔다 딜레이 후 내려간다
    auto seq = Sequence::create(up, delay, up->reverse(), NULL);
    
    this->runAction(seq);
}

void Mole::getBlow()
{
    // 타격을 입었을 때 스프라이트 변경
    auto blow = Sprite::create("mole_dam.png");
    p_mole->setTexture(blow->getTexture());
}