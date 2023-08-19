#include "FFloatMultiChannelNoiseChannel.hpp"
#include "UFloatProvider.hpp"
#include "UFloat_MultiChannelNoise.hpp"
UFloat_MultiChannelNoise* UFloat_MultiChannelNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Float_MultiChannelNoise");
    return (UFloat_MultiChannelNoise*)res;
}
