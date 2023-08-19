#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDuelTechnique_UIData {
    FString TechniqueDesc; // 0x0
    int32_t Value; // 0x10
    bool ValueIsCount; // 0x14
    char pad_15[0x3];
    FName TechniqueID; // 0x18
}; // Size: 0x20
#pragma pack(pop)
