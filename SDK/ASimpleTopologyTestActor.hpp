#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FSimpleTopologyParams.hpp"
#include "FSimpleTopologyVoxelArray.hpp"
#pragma pack(push, 1)
class ASimpleTopologyTestActor : public AActor {
public:
    FSimpleTopologyParams Topology; // 0x248
    FSimpleTopologyVoxelArray VoxelArray; // 0x260
    static ASimpleTopologyTestActor* StaticClass();
    void Precompute();
    void AbortPrecompute();
}; // Size: 0x308
#pragma pack(pop)
