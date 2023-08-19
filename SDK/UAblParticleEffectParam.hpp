#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAblParticleEffectParam : public UObject {
public:
    FName m_ParameterName; // 0x28
    static UAblParticleEffectParam* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
