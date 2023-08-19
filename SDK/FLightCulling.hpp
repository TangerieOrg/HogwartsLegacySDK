#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightCulling {
    char pad_0[0x50];
    TArray<void*> IgnoreLights; // 0x50
}; // Size: 0x60
#pragma pack(pop)
