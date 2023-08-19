#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemSpawnInfo {
    char pad_0[0x10];
    FTransform Transform; // 0x10
    bool bAutoActivate; // 0x40
    bool bAutoDestroy; // 0x41
    bool bPreCullCheck; // 0x42
    bool bPooled; // 0x43
    char pad_44[0xc];
}; // Size: 0x50
#pragma pack(pop)
