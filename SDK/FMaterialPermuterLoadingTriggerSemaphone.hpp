#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMaterialPermuterLoadingTriggerSemaphone {
    TArray<void*> Requests; // 0x0
    int32_t LastCount; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
