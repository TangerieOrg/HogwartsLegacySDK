#pragma once
#include <cstdint>
#include "EParticleSystemActivation.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ParticleSystemActivation : public USceneRigObjectActionBase {
public:
    EParticleSystemActivation Activation; // 0xa0
    char pad_a1[0x7];
    static USceneAction_ParticleSystemActivation* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
