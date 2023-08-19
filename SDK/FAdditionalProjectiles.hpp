#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FAdditionalProjectiles {
    UClass* MunitionActor; // 0x0
    float Delay; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
