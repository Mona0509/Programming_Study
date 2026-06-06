// OverLoad_Kadai.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "Animal2.h"
#include "Vector2.h"
#include "Character.h"
#include <iostream>
int main()
{
    // Ryu と Ken を作成する
    Character* ryu = new Character("Ryu");
    Character* ken = new Character("Ken");;

    // それぞれの名前を表示する
    ryu->dispName();    // Ryu と表示される
    ken->dispName();    // Ken と表示される

    // Nanashi に Ken の内容を複製する
    Character nanashi = *ken;

    // Ken を破棄する
    delete ken;
    ken = nullptr;

    // それぞれの名前を表示する
    ryu->dispName();        // Ryu と表示される
    nanashi.dispName();     // Ken と表示される

    // Ryu を破棄する
    delete ryu;
    ryu = nullptr;

    return 0;




    Vector2 vector1(10.0f,5.0f,1.0f);
    float a = vector1 + 0;
    float b = vector1 - 0;
    float c = vector1 == 0;
    vector1 << a;
    return 0;

    // x,yをもつクラスを作成
    // +,-,==をオーバーロードする
    // std::coutで表示、<<もオーバーロード
    // 計算結果を表示

    add(1);
    add(5.5f);
    add(10.5f);
    add(1,2,3);

    return 0;

    // add関数でint,float,double用にオーバーロード
    // add(int,int,int)の3つの引数がある関数も追加する
    // 各オーバーロードが呼ばれたことを表示する
    // 戻り値と表示結果の型差を確認
}
