#pragma once
#include <string>
class Animal final
{
public:

    // +=演算子のオーバーロード(足の数を追加する)
    //void operator +=(int addFoot);

    // +演算子のオーバーロード(足の数を合計した結果の数を返す)
    //int operator +(const Animal& animal);
    Animal(const char& name, int footNum);
    Animal& operator =(const Animal & animal);

public:
    std::string     name_ = {};
    int             footNum_ = 0;
};

