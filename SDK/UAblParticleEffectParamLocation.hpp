#pragma once
#include <cstdint>
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UAblParticleEffectParam.hpp"
#pragma pack(push, 1)
class UAblParticleEffectParamLocation : public UAblParticleEffectParam {
public:
    FAblAbilityTargetTypeLocation m_Location; // 0x30
    static UAblParticleEffectParamLocation* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
