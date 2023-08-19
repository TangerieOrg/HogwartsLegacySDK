#pragma once
#include <cstdint>
#include "FMoonPath.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UFixedIdealMoonPathData : public UDataAsset {
public:
    FMoonPath MoonPath; // 0x30
    static UFixedIdealMoonPathData* StaticClass();
    void ForceRecompute();
}; // Size: 0x558
#pragma pack(pop)
