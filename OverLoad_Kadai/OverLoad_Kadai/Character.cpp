#include "Character.h"

// コンストラクタの定義
Character::Character()
{
    name_ = new char[NameStringMax];
    strcpy_s(name_, NameStringMax, "Nanashi");
}

// 引数付きコンストラクタの定義
Character::Character(const char* name)
{
    name_ = new char[NameStringMax];

    int size = strlen(name);
    if (size < NameStringMax)
    {
        strcpy_s(name_, NameStringMax, name);
    }
    else
    {
        strcpy_s(name_, NameStringMax, "Nanashi");
    }
}

// 名前を表示する
void Character::dispName()
{
    std::cout << "名前は " << name_ << std::endl;
}

Character::Character(const Character& str) {
    name_ = new char[NameStringMax];
    strcpy_s(name_, NameStringMax, str.name_);
}

Character::~Character(){
    delete[] name_;
    name_ = NULL;
}

