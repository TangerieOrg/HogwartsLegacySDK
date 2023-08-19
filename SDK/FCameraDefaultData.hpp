#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCameraDefaultData {
    float FieldOfView; // 0x0
    float FocusDistance; // 0x4
    float Aperture; // 0x8
}; // Size: 0xc
#pragma pack(pop)
