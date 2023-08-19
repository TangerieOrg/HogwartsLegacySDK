#pragma once
#include <cstdint>
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FDeflectionData {
    TArray<UMultiFX2_Base*> DeflectedFX2; // 0x0
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
