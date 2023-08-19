#include "FAnimationTrack.hpp"
#include "UAnimRequest_FacialAnimation.hpp"
#include "UObject.hpp"
UAnimRequest_FacialAnimation* UAnimRequest_FacialAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimRequest_FacialAnimation");
    return (UAnimRequest_FacialAnimation*)res;
}
