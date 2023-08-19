#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEditorElement {
    int32_t Indices[3]; // 0x0
    float Weights[3]; // 0xc
}; // Size: 0x18
#pragma pack(pop)
