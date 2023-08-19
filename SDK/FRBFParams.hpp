#pragma once
#include <cstdint>
#include "EBoneAxis.hpp"
#include "ERBFDistanceMethod.hpp"
#include "ERBFFunctionType.hpp"
#include "ERBFNormalizeMethod.hpp"
#include "ERBFSolverType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRBFParams {
    int32_t TargetDimensions; // 0x0
    ERBFSolverType SolverType; // 0x4
    char pad_5[0x3];
    float Radius; // 0x8
    bool bAutomaticRadius; // 0xc
    ERBFFunctionType Function; // 0xd
    ERBFDistanceMethod DistanceMethod; // 0xe
    EBoneAxis TwistAxis; // 0xf
    float WeightThreshold; // 0x10
    ERBFNormalizeMethod NormalizeMethod; // 0x14
    char pad_15[0x3];
    FVector MedianReference; // 0x18
    float MedianMin; // 0x24
    float MedianMax; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
