#pragma once
#include <iostream>
#include <string>

// キャラクタ名は64文字まで
const unsigned int NameStringMax = 64;

// キャラクタークラス
class Character final
{
public:
    // コンストラクタの宣言
    Character();

    // 引数付きコンストラクタの宣言
    Character(const char* name);

    Character(const Character& str);

    ~Character();

public:
    // 名前を表示する
    void dispName();
    
private:
    char* name_ = nullptr; // キャラクタ名を保持するアドレスを持つポインタ
};

