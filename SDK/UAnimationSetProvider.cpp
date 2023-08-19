#include "UAnimationSetProvider.hpp"
#include "UBaseProvider.hpp"
UAnimationSetProvider* UAnimationSetProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationSetProvider");
    return (UAnimationSetProvider*)res;
}
