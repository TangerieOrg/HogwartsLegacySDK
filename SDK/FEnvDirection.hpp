#pragma once
#include <cstdint>
#include "EEnvDirection\Type.hpp"
class UClass;
#pragma pack(push, 1)
struct FEnvDirection {
    UClass* LineFrom; // 0x0
    UClass* LineTo; // 0x8
    UClass* Rotation; // 0x10
    EEnvDirection::Type DirMode; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
