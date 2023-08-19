#pragma once
#include <cstdint>
#include "FVector.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FAblMultiFxChildTask {
    FName ChildName; // 0x0
    FName MultiFXHandleName; // 0x8
    TArray<UMultiFX2_Base*> FX; // 0x10
    FVector LocationOffset; // 0x20
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
