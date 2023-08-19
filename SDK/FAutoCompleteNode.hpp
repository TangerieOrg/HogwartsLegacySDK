#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAutoCompleteNode {
    int32_t IndexChar; // 0x0
    char pad_4[0x4];
    TArray<int32_t> AutoCompleteListIndices; // 0x8
    char pad_18[0x10];
}; // Size: 0x28
#pragma pack(pop)
