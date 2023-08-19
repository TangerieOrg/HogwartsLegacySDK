#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemSpawnInfoOverride {
    uint8_t bOverride_LocationOrOffset : 1; // 0x0
    uint8_t bOverride_Rotator : 1; // 0x0
    uint8_t bOverride_Scale : 1; // 0x0
    uint8_t bOverride_bAutoActivate : 1; // 0x0
    uint8_t bOverride_bAutoDestroy : 1; // 0x0
    uint8_t bOverride_bPreCullCheck : 1; // 0x0
    uint8_t bOverride_bPooled : 1; // 0x0
    uint8_t pad_bitfield_0_7 : 1;
    char pad_1[0x3];
    FVector LocationOrOffset; // 0x4
    FRotator Rotator; // 0x10
    FVector Scale; // 0x1c
    bool bAutoActivate; // 0x28
    bool bAutoDestroy; // 0x29
    bool bPreCullCheck; // 0x2a
    bool bPooled; // 0x2b
}; // Size: 0x2c
#pragma pack(pop)
