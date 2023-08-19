#include "UAnimationProvider.hpp"
#include "UAnimationProvider_Gender.hpp"
UAnimationProvider_Gender* UAnimationProvider_Gender::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.AnimationProvider_Gender");
    return (UAnimationProvider_Gender*)res;
}
