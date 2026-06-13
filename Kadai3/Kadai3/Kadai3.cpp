// Kadai3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "MyClass.h"

int main()
{
    {
        std::shared_ptr<MyClass> myClass1 = std::make_shared<MyClass>();
        std::shared_ptr<MyClass> myClass2 = std::make_shared<MyClass>();
        myClass1->myClass_ = myClass2;
        myClass2->myClass_ = myClass1;
    }
}

