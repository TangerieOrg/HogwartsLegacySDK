#pragma once
#include <cstdint>
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FConfundoData {
    char pad_0[0x8];
    TArray<UMultiFX2_Base*> FX2; // 0x8
}; // Size: 0x18
#pragma pack(pop)
