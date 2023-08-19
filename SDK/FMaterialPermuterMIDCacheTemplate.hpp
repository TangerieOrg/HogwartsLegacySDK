#pragma once
#include <cstdint>
#include "FDateTime.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FMaterialPermuterMIDCacheTemplate {
    UMaterialInstanceDynamic* Template; // 0x0
    FDateTime Touched; // 0x8
}; // Size: 0x10
#pragma pack(pop)
