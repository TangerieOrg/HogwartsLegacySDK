#include "UAnimNotify.hpp"
#include "UAnimNotify_BlinkEyes.hpp"
#include "UPoseSampler_BlinkEyes.hpp"
UAnimNotify_BlinkEyes* UAnimNotify_BlinkEyes::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimNotify_BlinkEyes");
    return (UAnimNotify_BlinkEyes*)res;
}
