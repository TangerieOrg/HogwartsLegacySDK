#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLODMappingData {
    TArray<int32_t> Mapping; // 0x0
    TArray<int32_t> InverseMapping; // 0x10
}; // Size: 0x20
#pragma pack(pop)
