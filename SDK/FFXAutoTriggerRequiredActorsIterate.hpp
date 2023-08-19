#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFXAutoTriggerRequiredActorsIterate {
    TArray<FName> ExternalBuckets; // 0x0
    bool bMainActorList; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
