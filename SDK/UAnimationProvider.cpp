#include "UAnimationProvider.hpp"
#include "UObjectProvider.hpp"
UAnimationProvider* UAnimationProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationProvider");
    return (UAnimationProvider*)res;
}
