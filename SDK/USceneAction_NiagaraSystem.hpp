#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "USceneRigActionBase.hpp"
class UNiagaraSystem;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_NiagaraSystem : public USceneRigActionBase {
public:
    UNiagaraSystem* System; // 0x88
    UTransformProvider* AttachTo; // 0x90
    FRotator FixedRotation; // 0x98
    bool bLocationOnly; // 0xa4
    bool bStationary; // 0xa5
    char pad_a6[0x2];
    static USceneAction_NiagaraSystem* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
