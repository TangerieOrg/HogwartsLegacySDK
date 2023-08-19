#pragma once
#include <cstdint>
#include "ESettingsDOF\Type.hpp"
#include "ESettingsLockedAxis\Type.hpp"
#include "FBroadphaseSettings.hpp"
#include "FChaosPhysicsSettings.hpp"
#include "FPhysicalSurfaceName.hpp"
#include "FRigidBodyErrorCorrection.hpp"
#include "UPhysicsSettingsCore.hpp"
#pragma pack(push, 1)
class UPhysicsSettings : public UPhysicsSettingsCore {
public:
    FRigidBodyErrorCorrection PhysicErrorCorrection; // 0xe8
    ESettingsLockedAxis::Type LockedAxis; // 0x11c
    ESettingsDOF::Type DefaultDegreesOfFreedom; // 0x11d
    bool bSuppressFaceRemapTable; // 0x11e
    bool bSupportUVFromHitResults; // 0x11f
    bool bDisableActiveActors; // 0x120
    bool bDisableKinematicStaticPairs; // 0x121
    bool bDisableKinematicKinematicPairs; // 0x122
    bool bDisableCCD; // 0x123
    bool bEnableEnhancedDeterminism; // 0x124
    char pad_125[0x3];
    float AnimPhysicsMinDeltaTime; // 0x128
    bool bSimulateAnimPhysicsAfterReset; // 0x12c
    char pad_12d[0x3];
    float MinPhysicsDeltaTime; // 0x130
    float MaxPhysicsDeltaTime; // 0x134
    bool bSubstepping; // 0x138
    bool bSubsteppingAsync; // 0x139
    bool bTickPhysicsAsync; // 0x13a
    char pad_13b[0x1];
    float AsyncFixedTimeStepSize; // 0x13c
    float MaxSubstepDeltaTime; // 0x140
    int32_t MaxSubsteps; // 0x144
    float SyncSceneSmoothingFactor; // 0x148
    float InitialAverageFrameRate; // 0x14c
    int32_t PhysXTreeRebuildRate; // 0x150
    char pad_154[0x4];
    TArray<FPhysicalSurfaceName> PhysicalSurfaces; // 0x158
    FBroadphaseSettings DefaultBroadphaseSettings; // 0x168
    float MinDeltaVelocityForHitEvents; // 0x1a8
    FChaosPhysicsSettings ChaosSettings; // 0x1ac
    char pad_1af[0x1];
    static UPhysicsSettings* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
