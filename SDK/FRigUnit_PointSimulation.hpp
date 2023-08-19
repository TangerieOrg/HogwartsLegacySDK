#pragma once
#include <cstdint>
#include "ECRSimPointIntegrateType.hpp"
#include "FCRFourPointBezier.hpp"
#include "FCRSimLinearSpring.hpp"
#include "FCRSimPoint.hpp"
#include "FCRSimPointForce.hpp"
#include "FCRSimSoftCollision.hpp"
#include "FRigUnit_PointSimulation_BoneTarget.hpp"
#include "FRigUnit_PointSimulation_DebugSettings.hpp"
#include "FRigUnit_PointSimulation_WorkData.hpp"
#include "FRigUnit_SimBaseMutable.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable {
    TArray<FCRSimPoint> Points; // 0x68
    TArray<FCRSimLinearSpring> Links; // 0x78
    TArray<FCRSimPointForce> Forces; // 0x88
    TArray<FCRSimSoftCollision> CollisionVolumes; // 0x98
    float SimulatedStepsPerSecond; // 0xa8
    ECRSimPointIntegrateType IntegratorType; // 0xac
    char pad_ad[0x3];
    float VerletBlend; // 0xb0
    char pad_b4[0x4];
    TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0xb8
    bool bLimitLocalPosition; // 0xc8
    bool bPropagateToChildren; // 0xc9
    char pad_ca[0x2];
    FVector PrimaryAimAxis; // 0xcc
    FVector SecondaryAimAxis; // 0xd8
    char pad_e4[0xc];
    FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0xf0
    FCRFourPointBezier Bezier; // 0x140
    FRigUnit_PointSimulation_WorkData WorkData; // 0x170
    char pad_1f8[0x8];
}; // Size: 0x200
#pragma pack(pop)
