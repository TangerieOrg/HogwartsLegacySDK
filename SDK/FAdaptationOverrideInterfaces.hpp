#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAdaptationOverrideInterfaces {
    TArray<void*> PriorityAdaptationOverrides; // 0x0
    TArray<void*> StackedAdaptationOverrides; // 0x10
}; // Size: 0x20
#pragma pack(pop)
