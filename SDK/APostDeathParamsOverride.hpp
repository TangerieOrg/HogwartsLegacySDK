#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FPostDeath_Params.hpp"
#pragma pack(push, 1)
class APostDeathParamsOverride : public AActor {
public:
    char pad_248[0x1];
    bool bUseCustomPreset; // 0x249
    char pad_24a[0x6];
    FDbSingleColumnInfo Preset; // 0x250
    FPostDeath_Params CurrentParameters; // 0x2d8
    char pad_2f0[0x10];
    static APostDeathParamsOverride* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
