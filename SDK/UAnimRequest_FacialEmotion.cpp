#include "FAnimationTrack.hpp"
#include "UAnimRequest_FacialEmotion.hpp"
#include "UObject.hpp"
UAnimRequest_FacialEmotion* UAnimRequest_FacialEmotion::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimRequest_FacialEmotion");
    return (UAnimRequest_FacialEmotion*)res;
}
