#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FWeightedBlendable {
    float weight; // 0x0
    char pad_4[0x4];
    UObject* Object; // 0x8
}; // Size: 0x10
#pragma pack(pop)
