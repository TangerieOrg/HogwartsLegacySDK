#include "FBTCustomAction.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_NPCFollowSpline.hpp"
URootMotionModifierProperties_NPCFollowSpline* URootMotionModifierProperties_NPCFollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_NPCFollowSpline");
    return (URootMotionModifierProperties_NPCFollowSpline*)res;
}
