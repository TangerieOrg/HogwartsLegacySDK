#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSimpleTopologyParams {
    FVector Center; // 0x0
    float VoxelSize; // 0xc
    float SweepDistanceZ; // 0x10
    bool bUseBoxSweeps; // 0x14
    bool bSolidsOnly; // 0x15
    bool bTraceComplex; // 0x16
    bool bForceSynchronous; // 0x17
}; // Size: 0x18
#pragma pack(pop)
