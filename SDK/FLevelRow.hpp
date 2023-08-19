#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FTableRowBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLevelRow : public FTableRowBase {
    char pad_8[0x28];
    bool bLoadSky; // 0x30
    char pad_31[0x3];
    FVector Location; // 0x34
    FRotator Rotation; // 0x40
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
