#include "USoundNode.hpp"
#include "USoundNodeWaveParam.hpp"
USoundNodeWaveParam* USoundNodeWaveParam::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeWaveParam");
    return (USoundNodeWaveParam*)res;
}
