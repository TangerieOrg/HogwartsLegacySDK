#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRemoteControlTestStruct {
    bool bSomeBool; // 0x0
    char pad_1[0x3];
    uint32_t SomeUInt32; // 0x4
    float SomeFloat; // 0x8
    FVector SomeVector; // 0xc
    FRotator SomeRotator; // 0x18
    int32_t SomeClampedInt; // 0x24
    float SomeClampedFloat; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
