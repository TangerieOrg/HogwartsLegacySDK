#include "URootMotionModifier.hpp"
#include "URootMotionModifier_NPCFollowSpline.hpp"
URootMotionModifier_NPCFollowSpline* URootMotionModifier_NPCFollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_NPCFollowSpline");
    return (URootMotionModifier_NPCFollowSpline*)res;
}
