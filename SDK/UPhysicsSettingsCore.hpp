#pragma once
#include <cstdint>
#include "ECollisionTraceFlag.hpp"
#include "EFrictionCombineMode\Type.hpp"
#include "FChaosSolverConfiguration.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UPhysicsSettingsCore : public UDeveloperSettings {
public:
    float DefaultGravityZ; // 0x38
    float DefaultTerminalVelocity; // 0x3c
    float DefaultFluidFriction; // 0x40
    int32_t SimulateScratchMemorySize; // 0x44
    int32_t RagdollAggregateThreshold; // 0x48
    float TriangleMeshTriangleMinAreaThreshold; // 0x4c
    bool bEnableShapeSharing; // 0x50
    bool bEnablePCM; // 0x51
    bool bEnableStabilization; // 0x52
    bool bWarnMissingLocks; // 0x53
    bool bEnable2DPhysics; // 0x54
    bool bDefaultHasComplexCollision; // 0x55
    char pad_56[0x2];
    float BounceThresholdVelocity; // 0x58
    EFrictionCombineMode::Type FrictionCombineMode; // 0x5c
    EFrictionCombineMode::Type RestitutionCombineMode; // 0x5d
    char pad_5e[0x2];
    float MaxAngularVelocity; // 0x60
    float MaxDepenetrationVelocity; // 0x64
    float ContactOffsetMultiplier; // 0x68
    float MinContactOffset; // 0x6c
    float MaxContactOffset; // 0x70
    bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74
    ECollisionTraceFlag DefaultShapeComplexity; // 0x75
    char pad_76[0x2];
    FChaosSolverConfiguration SolverOptions; // 0x78
    char pad_e4[0x4];
    static UPhysicsSettingsCore* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
