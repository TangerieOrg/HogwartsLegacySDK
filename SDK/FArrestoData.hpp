#pragma once
#include <cstdint>
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FArrestoData {
    TArray<UMultiFX2_Base*> FX2; // 0x0
    char pad_10[0x30];
}; // Size: 0x40
#pragma pack(pop)
