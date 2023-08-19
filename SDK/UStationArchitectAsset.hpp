#pragma once
#include <cstdint>
#include "FStationArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
class UStationArcitectAsset_ConnectionsCluster;
#pragma pack(push, 1)
class UStationArchitectAsset : public UBaseArchitectAsset {
public:
    TArray<FStationArchitectAsset_Connection> ConnectionArray; // 0xd0
    UStationArcitectAsset_ConnectionsCluster* ConnectionCluster; // 0xe0
    char pad_e8[0x50];
    static UStationArchitectAsset* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
