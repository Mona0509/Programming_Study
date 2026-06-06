// InstanceProject.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "Project.h"
int main()
{
    // 同じクラスをローカル変数とnewの両方で生成
    {
        Project project1;
        Project* project2 = new Project;
        delete project2;
        project2 = NULL;
    }
    // コンストラクタとデストラクタでログを表示、順番を確認する
    
    // スコープ{}終了時の破棄、deleteの破棄を比較する
}
