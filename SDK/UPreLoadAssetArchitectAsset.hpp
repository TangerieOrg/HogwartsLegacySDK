#pragma once
#include <cstdint>
#include "FPreLoadAssetArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
#pragma pack(push, 1)
class UPreLoadAssetArchitectAsset : public UBaseArchitectAsset {
public:
    TArray<FPreLoadAssetArchitectAsset_Connection> ConnectionArray; // 0xd0
    static UPreLoadAssetArchitectAsset* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
