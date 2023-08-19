#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ChainHarmonics_WorkData {
    FVector Time; // 0x0
    char pad_c[0x4];
    TArray<FCachedRigElement> Items; // 0x10
    TArray<float> Ratio; // 0x20
    TArray<FVector> LocalTip; // 0x30
    TArray<FVector> PendulumTip; // 0x40
    TArray<FVector> PendulumPosition; // 0x50
    TArray<FVector> PendulumVelocity; // 0x60
    TArray<FVector> HierarchyLine; // 0x70
    TArray<FVector> VelocityLines; // 0x80
}; // Size: 0x90
#pragma pack(pop)
