#pragma once
#include <cstdint>
#include "ACameraStackActor.hpp"
#include "FAnimatedFloatPropertyDriver.hpp"
#include "FAnimatedIntegerPropertyDriver.hpp"
#include "FSRCameraFocusSettings.hpp"
#include "FSRCameraPostProcessSettings.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ASceneRigCameraStackActor : public ACameraStackActor {
public:
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x408
    FName EyeSocketName; // 0x410
    FSRCameraFocusSettings FocusSettings; // 0x418
    FSRCameraPostProcessSettings RenderFeatures; // 0x550
    FAnimatedIntegerPropertyDriver LODDetailMode; // 0xdb0
    FAnimatedFloatPropertyDriver CurrentFocalLength; // 0xdd8
    FAnimatedFloatPropertyDriver CurrentAperture; // 0xe00
    FAnimatedFloatPropertyDriver CurrentFocusDistance; // 0xe28
    static ASceneRigCameraStackActor* StaticClass();
}; // Size: 0xe50
#pragma pack(pop)
