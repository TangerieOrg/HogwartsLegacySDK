#include "UPoseSampler.hpp"
#include "UPoseSampler_CloseEyes.hpp"
UPoseSampler_CloseEyes* UPoseSampler_CloseEyes::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PoseSampler_CloseEyes");
    return (UPoseSampler_CloseEyes*)res;
}
