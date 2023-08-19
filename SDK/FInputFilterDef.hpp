#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInputFilterDef {
    FName FilterName; // 0x0
    TArray<FName> LogicElements; // 0x8
}; // Size: 0x18
#pragma pack(pop)
