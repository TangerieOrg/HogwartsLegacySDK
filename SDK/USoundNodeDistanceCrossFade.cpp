#include "FDistanceDatum.hpp"
#include "USoundNode.hpp"
#include "USoundNodeDistanceCrossFade.hpp"
USoundNodeDistanceCrossFade* USoundNodeDistanceCrossFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeDistanceCrossFade");
    return (USoundNodeDistanceCrossFade*)res;
}
