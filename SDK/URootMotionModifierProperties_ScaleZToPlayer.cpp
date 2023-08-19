#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_ScaleZToPlayer.hpp"
#include "USkeletalMesh.hpp"
URootMotionModifierProperties_ScaleZToPlayer* URootMotionModifierProperties_ScaleZToPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_ScaleZToPlayer");
    return (URootMotionModifierProperties_ScaleZToPlayer*)res;
}
