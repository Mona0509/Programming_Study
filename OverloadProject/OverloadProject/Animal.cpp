#include "Animal.h"
// += 演算子オーバーロード(足の数を追加する)
//void Animal::operator +=(int addFoot)
//{
    // 自身の足の数を足すだけ
//    footNum_ += addFoot;
//}

// + 演算子オーバーロード(足の数を合計した結果の数を返す)
//int Animal::operator +(const Animal& animal)
//{
    // 自身の足の数と、引数で渡されたインスタンス（参照）の足の数を合計し、戻り値として返す
//    return footNum_ + animal.footNum_;
//}
Animal::Animal(const char& name, int footNum) {
    name_ = name;
    footNum_ = footNum;
}
Animal& Animal::operator =(const Animal& src){

    name_ = src.name_;
    footNum_ = src.footNum_;
    return *this;
}