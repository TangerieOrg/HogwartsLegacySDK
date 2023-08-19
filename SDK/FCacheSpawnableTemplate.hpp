#pragma once
#include <cstdint>
#include "FTransform.hpp"
class UObject;
#pragma pack(push, 1)
struct FCacheSpawnableTemplate {
    UObject* DuplicatedTemplate; // 0x0
    char pad_8[0x8];
    FTransform InitialTransform; // 0x10
    FTransform ComponentTransform; // 0x40
}; // Size: 0x70
#pragma pack(pop)
