#pragma once
#include <cstdint>
#include "ECustomMaterialOutputType.hpp"
#pragma pack(push, 1)
struct FCustomOutput {
    FName OutputName; // 0x0
    ECustomMaterialOutputType OutputType; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
