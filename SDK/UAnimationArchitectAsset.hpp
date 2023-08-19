#pragma once
#include <cstdint>
#include "FAnimationArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
class UAnimationArcitectAsset_ConnectionsCluster;
#pragma pack(push, 1)
class UAnimationArchitectAsset : public UBaseArchitectAsset {
public:
    TArray<FAnimationArchitectAsset_Connection> ConnectionArray; // 0xd0
    UAnimationArcitectAsset_ConnectionsCluster* ConnectionsCluster; // 0xe0
    static UAnimationArchitectAsset* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
