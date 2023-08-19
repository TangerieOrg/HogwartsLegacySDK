#include "UPoseSampler.hpp"
#include "UPoseSampler_BlinkEyes.hpp"
UPoseSampler_BlinkEyes* UPoseSampler_BlinkEyes::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PoseSampler_BlinkEyes");
    return (UPoseSampler_BlinkEyes*)res;
}
