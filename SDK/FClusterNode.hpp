#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FClusterNode {
    FVector BoundMin; // 0x0
    int32_t FirstChild; // 0xc
    FVector BoundMax; // 0x10
    int32_t LastChild; // 0x1c
    int32_t FirstInstance; // 0x20
    int32_t LastInstance; // 0x24
    FVector MinInstanceScale; // 0x28
    FVector MaxInstanceScale; // 0x34
}; // Size: 0x40
#pragma pack(pop)
