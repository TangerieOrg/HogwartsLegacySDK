#pragma once
#include <cstdint>
#include "FMercunaOctreeData.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UMercunaOctreeSettings : public UDataAsset {
public:
    FMercunaOctreeData OctreeData; // 0x30
    char pad_4c[0x4];
    static UMercunaOctreeSettings* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
