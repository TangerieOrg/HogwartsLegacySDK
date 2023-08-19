#include "UAnimationProvider.hpp"
#include "UAnimation_ScratchAnimation.hpp"
UAnimation_ScratchAnimation* UAnimation_ScratchAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Animation_ScratchAnimation");
    return (UAnimation_ScratchAnimation*)res;
}
