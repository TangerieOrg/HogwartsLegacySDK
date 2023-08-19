#pragma once
#include <cstdint>
#include "EPlatformInterfaceDataType.hpp"
class UObject;
#pragma pack(push, 1)
struct FPlatformInterfaceData {
    FName DataName; // 0x0
    EPlatformInterfaceDataType Type; // 0x8
    char pad_9[0x3];
    int32_t IntValue; // 0xc
    float FloatValue; // 0x10
    char pad_14[0x4];
    FString StringValue; // 0x18
    UObject* ObjectValue; // 0x28
}; // Size: 0x30
#pragma pack(pop)
