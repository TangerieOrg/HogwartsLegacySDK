#include "UAnimRequest_AmbientEyes.hpp"
#include "UObject.hpp"
#include "UPoseSampler_AmbientEyes.hpp"
UAnimRequest_AmbientEyes* UAnimRequest_AmbientEyes::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimRequest_AmbientEyes");
    return (UAnimRequest_AmbientEyes*)res;
}
