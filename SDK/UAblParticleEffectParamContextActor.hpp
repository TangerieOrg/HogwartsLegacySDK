#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "UAblParticleEffectParam.hpp"
#pragma pack(push, 1)
class UAblParticleEffectParamContextActor : public UAblParticleEffectParam {
public:
    EAblAbilityTargetType m_ContextActor; // 0x30
    char pad_31[0x7];
    static UAblParticleEffectParamContextActor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
