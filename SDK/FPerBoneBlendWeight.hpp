#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPerBoneBlendWeight {
    int32_t SourceIndex; // 0x0
    float BlendWeight; // 0x4
}; // Size: 0x8
#pragma pack(pop)
