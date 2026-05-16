// StructureProject.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <stdio.h>
// ---------------------------------------------------------
/**
 * @brief   各パラメータを表示する関数
 * @param   hp      HP
 * @param   mp      MP
 * @param   speed   素早さ
 * @param   attack  攻撃力
 * @param   defense 防御力
 * @param   magic   魔力
 */

// 構造体「パラメーター型」を定義する
// 「Parameter」は変数名ではない。「型」(int,char...)などと同じ
// 自分の好きな型を作ることができる
struct Parameter {
    // 変数　(メンバー)
    int hp;         // HP
    int mp;         // MP
    char speed;     // 速度
    int attack;     // 攻撃力
    int defense;    // 防御力
    float magic;    // 魔法
};
void DispParameter(Parameter param)
{
    printf("HP:%d\n", param.hp);
    printf("MP:%d\n", param.mp);
    printf("素早さ:%c\n", param.speed);
    printf("攻撃力:%d\n", param.attack);
    printf("防御力:%d\n", param.defense);
    printf("魔力:%2.1f\n", param.magic);
}

// ---------------------------------------------------------
/**
 * @brief   main 関数
 */
int main()
{
    // オリジナルの型　変数名
    Parameter player_param = {      // パラメーターの名前を初期化
        100,50,'A',11,15,20.5f       
        // 定義で宣言した通りの型に入れる数字を書く
    };    
    // プレイヤーのパラメータ表示
    DispParameter(player_param);

    Parameter ememy_param = {      // パラメーターの名前を初期化
        100,50,'A',11,15,20.5f
        // 定義で宣言した通りの型に入れる数字を書く
    };
    // 敵のパラメータ表示
    DispParameter(ememy_param);

    Parameter p;
    int parameter_size = sizeof(p);
    printf("Parameter型変数のサイズは %d", parameter_size);

    return 0;
}

//
// ※構造体の注意点(メモリについて)
// コンピューターが自動的にサイズ変化をする（扱いやすいメモリ数にするなどの理由で）
// 
// 「コンパイラが行うメンバーの配置調整（＝サイズ変化）」を アライメント と呼ぶ
// アライメントの結果、埋められた空白のデータを パディング と呼ぶ
//