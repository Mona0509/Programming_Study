// Kadai1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>


int main()
{

    std::vector<int> vec = { 1,2,3,4,5,6,7,8,9,10 };

    for (std::vector<int>::iterator it = vec.begin();
        it != vec.end();
        ) {
        if (*it % 2 == 0) {
            it++;
            continue;
        }
        else {
            it = vec.erase(it);
        }
    }
    for (std::vector<int>::iterator it = vec.begin();
        it != vec.end();
        it++) {
        std::cout << *it;
    }
}
