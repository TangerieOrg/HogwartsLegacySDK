#include "FBTCustomAction.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_FollowSpline.hpp"
URootMotionModifierProperties_FollowSpline* URootMotionModifierProperties_FollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_FollowSpline");
    return (URootMotionModifierProperties_FollowSpline*)res;
}
