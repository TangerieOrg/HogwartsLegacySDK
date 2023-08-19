#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAkAcousticSurface {
    uint32_t Texture; // 0x0
    float Occlusion; // 0x4
    FString Name; // 0x8
}; // Size: 0x18
#pragma pack(pop)
