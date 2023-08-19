#include "URootMotionModifier.hpp"
#include "URootMotionModifier_FollowSpline.hpp"
URootMotionModifier_FollowSpline* URootMotionModifier_FollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_FollowSpline");
    return (URootMotionModifier_FollowSpline*)res;
}
