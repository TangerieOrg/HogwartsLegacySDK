#pragma once
#include <cstdint>
#include "FMapFXItem.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
struct FMapFXChainEntry {
    FString Name; // 0x0
    float Delay; // 0x10
    char pad_14[0x4];
    FMapFXItem FXData; // 0x18
    FTimerHandle TimerHandle; // 0x58
    FTransform Transform; // 0x60
    FVector Scale; // 0x90
    char pad_9c[0x4];
    FString SFXName; // 0xa0
    bool AutoActivate; // 0xb0
    bool AutoDestroy; // 0xb1
    char pad_b2[0x6];
    UNiagaraComponent* NiagaraComponent; // 0xb8
    int32_t Priority; // 0xc0
    char pad_c4[0xc];
}; // Size: 0xd0
#pragma pack(pop)
