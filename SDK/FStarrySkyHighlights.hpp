#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStarrySkyHighlights {
    TArray<FName> Constellations; // 0x0
    TArray<FName> Stars; // 0x10
}; // Size: 0x20
#pragma pack(pop)
