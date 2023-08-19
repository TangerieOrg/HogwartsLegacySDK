#pragma once
#include <cstdint>
#include "FVector.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FMultiFXWrapper {
    FName MultiFXHandleName; // 0x0
    TArray<UMultiFX2_Base*> FX; // 0x8
    FVector Location; // 0x18
    FName AttachPointName; // 0x24
    char pad_2c[0xc];
}; // Size: 0x38
#pragma pack(pop)
