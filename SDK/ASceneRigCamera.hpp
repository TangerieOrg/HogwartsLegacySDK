#pragma once
#include <cstdint>
#include "ACameraActor.hpp"
#include "FAnimatedFloatPropertyDriver.hpp"
#include "FAnimatedIntegerPropertyDriver.hpp"
#include "FCameraLookatTrackingSettings.hpp"
#include "FSRCameraFocusSettings.hpp"
#include "FSRCameraPostProcessSettings.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ASceneRigCamera : public ACameraActor {
public:
    char pad_870[0x8];
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x878
    FCameraLookatTrackingSettings LookatTrackingSettings; // 0x880
    FName CameraSocket; // 0x8d0
    FSRCameraFocusSettings FocusSettings; // 0x8d8
    FSRCameraPostProcessSettings RenderFeatures; // 0xa10
    FAnimatedIntegerPropertyDriver LODDetailMode; // 0x1270
    FAnimatedFloatPropertyDriver CurrentFocalLength; // 0x1298
    FAnimatedFloatPropertyDriver CurrentAperture; // 0x12c0
    FAnimatedFloatPropertyDriver CurrentFocusDistance; // 0x12e8
    static ASceneRigCamera* StaticClass();
}; // Size: 0x1310
#pragma pack(pop)
