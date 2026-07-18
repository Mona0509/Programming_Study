#include <iostream>
#include <map>

// キャラクター基礎
class CharacterBase
{
public:
    // コンストラクタ
    CharacterBase() = default;
    // デストラクタ
    virtual ~CharacterBase() = default;

public:
    virtual const char* type() {
        return "デフォルト";
    };
};


// プレイヤー
class Player : public CharacterBase
{
public:
    // コンストラクタ
    Player() = default;
    // デストラクタ
    virtual ~Player() = default;

public:
    const char* type() override {
        return "味方です";
    }
};

// 敵
class Enemy : public CharacterBase
{
public:
    // コンストラクタ
    Enemy() = default;
    // デストラクタ
    virtual ~Enemy() = default;

public:
    const char* type() override {
        return "敵です";
    }
};


// エントリー関数
int main()
{
    // コンテナを埋める
    std::map<int, CharacterBase*> map;
    CharacterBase* player = new Player;
    CharacterBase* enemy = new Enemy;
    map.emplace(0, player);
    map.emplace(1, enemy);
    map.emplace(2, player);
    map.emplace(3, enemy);
    map.emplace(4, enemy);

    // 種類を表示する
    for (std::map<int, CharacterBase*>::iterator it = map.begin(); it != map.end(); ++it)
    {
        std::cout << it->first << " は " << it->second->type() << std::endl;
    }

    // コンテナ中身のインスタンス削除も忘れずにする
    delete player;
    delete enemy;

        // コンテナをすべて破棄する
        map.clear();
}