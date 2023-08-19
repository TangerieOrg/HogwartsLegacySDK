#pragma once
#include <cstdint>
#include "FAnimationArchitectAsset_Connection.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimationArcitectAsset_ConnectionsCluster : public UObject {
public:
    TArray<FAnimationArchitectAsset_Connection> ConnectionArray; // 0x28
    static UAnimationArcitectAsset_ConnectionsCluster* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
