#pragma once
#include <cstdint>
#include "FPlayer_FootfallData.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UPlayer_FootfallDataAsset : public UDataAsset {
public:
    FPlayer_FootfallData Data; // 0x30
    static UPlayer_FootfallDataAsset* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
