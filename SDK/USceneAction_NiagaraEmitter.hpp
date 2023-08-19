#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "USceneRigObjectActionBase.hpp"
class UNiagaraSystem;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_NiagaraEmitter : public USceneRigObjectActionBase {
public:
    UNiagaraSystem* System; // 0xa0
    FName AttachTo; // 0xa8
    UTransformProvider* EndPoint; // 0xb0
    char pad_b8[0x8];
    FTransform LocalTransform; // 0xc0
    bool bUseLocalTransform; // 0xf0
    char pad_f1[0xf];
    static USceneAction_NiagaraEmitter* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
