#include "USoundNodeDistanceCrossFade.hpp"
#include "USoundNodeParamCrossFade.hpp"
USoundNodeParamCrossFade* USoundNodeParamCrossFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeParamCrossFade");
    return (USoundNodeParamCrossFade*)res;
}
