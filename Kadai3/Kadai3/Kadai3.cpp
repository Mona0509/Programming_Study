#include <iostream>
#include <vector>
#include <algorithm>


template<class T>
bool myFind(T v) {
    return (v % 2) != 0;
}

// クラスA
class ClassA
{
public:
    // コンストラクタ
    ClassA(int type) :type_(type) {}

public:
    // タイプ取得
    int type() const { return type_; }

private:
    int type_ = 0;
};

// クラスB
class ClassB
{
public:
    // コンストラクタ
    ClassB(int type) :type_(type) {}

public:
    // タイプ取得
    int type() const { return type_; }

private:
    int type_ = 0;
};


// エントリー関数
int main()
{
    // クラスAのベクタ
    std::vector<ClassA> aVector;
    aVector.emplace_back(1);
    aVector.emplace_back(2);
    aVector.emplace_back(0);
    aVector.emplace_back(3);


    // クラスBのベクタ
    std::vector<ClassB> bVector;
    bVector.emplace_back(0);
    bVector.emplace_back(2);
    bVector.emplace_back(1);
    bVector.emplace_back(3);

    bool findA = myFind(aVector);
    if (findA)
    {
        std::cout << "aVector に 「1」 があった" << std::endl;
    }

    bool findb = myFind(bVector);
    if (findb)
    {
        std::cout << "bVector に 「1」 があった" << std::endl;
    }
}