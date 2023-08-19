#include "URootMotionModifier.hpp"
#include "URootMotionModifier_ScaleZToPlayer.hpp"
URootMotionModifier_ScaleZToPlayer* URootMotionModifier_ScaleZToPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_ScaleZToPlayer");
    return (URootMotionModifier_ScaleZToPlayer*)res;
}
