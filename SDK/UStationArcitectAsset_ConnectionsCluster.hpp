#pragma once
#include <cstdint>
#include "FStationArchitectAsset_Connection.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UStationArcitectAsset_ConnectionsCluster : public UObject {
public:
    TArray<FStationArchitectAsset_Connection> ConnectionArray; // 0x28
    static UStationArcitectAsset_ConnectionsCluster* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
