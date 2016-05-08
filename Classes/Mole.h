#ifndef __MOLE_H__
#define __MOLE_H__

#include "cocos2d.h"

class Mole : public cocos2d::Sprite
{
public:
    virtual bool init();

    CREATE_FUNC(Mole);
    
    void comeUp();
    
    void getBlow();
    
public:
    Sprite* p_mole;
};

#endif // __MOLE_H__
