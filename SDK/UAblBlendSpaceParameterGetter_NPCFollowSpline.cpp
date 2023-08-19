#include "UAblBlendSpaceParameterGetter_NPCFollowSpline.hpp"
#include "UAblSpeedCompensateBlendSpaceParameterGetter.hpp"
UAblBlendSpaceParameterGetter_NPCFollowSpline* UAblBlendSpaceParameterGetter_NPCFollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_NPCFollowSpline");
    return (UAblBlendSpaceParameterGetter_NPCFollowSpline*)res;
}
