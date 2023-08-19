#pragma once
#include <cstdint>
#include "ECameraShakePlaySpace.hpp"
#include "FFOscillator.hpp"
#include "FROscillator.hpp"
#include "FRotator.hpp"
#include "FVOscillator.hpp"
#include "UCameraShakeBase.hpp"
class UCameraAnim;
class UCameraAnimationSequence;
class UCameraAnimInst;
struct FMinimalViewInfo;
class USequenceCameraShakePattern;
class APlayerCameraManager;
class UCameraShakeSourceComponent;
class UClass;
#pragma pack(push, 1)
class UMatineeCameraShake : public UCameraShakeBase {
public:
    float OscillationBlendOutTime; // 0xb0
    FROscillator RotOscillation; // 0xb4
    FVOscillator LocOscillation; // 0xd8
    FFOscillator FOVOscillation; // 0xfc
    float AnimPlayRate; // 0x108
    float AnimScale; // 0x10c
    float AnimBlendInTime; // 0x110
    float AnimBlendOutTime; // 0x114
    float RandomAnimSegmentDuration; // 0x118
    char pad_11c[0x4];
    UCameraAnim* Anim; // 0x120
    UCameraAnimationSequence* AnimSequence; // 0x128
    uint8_t bRandomAnimSegment : 1; // 0x130
    uint8_t pad_bitfield_130_1 : 7;
    char pad_131[0x3];
    float OscillatorTimeRemaining; // 0x134
    UCameraAnimInst* AnimInst; // 0x138
    char pad_140[0x40];
    USequenceCameraShakePattern* SequenceShakePattern; // 0x180
    char pad_188[0x28];
    static UMatineeCameraShake* StaticClass();
    static UMatineeCameraShake* StartMatineeCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    static UMatineeCameraShake* StartMatineeCameraShake(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void ReceiveStopShake(bool bImmediately);
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
}; // Size: 0x1b0
#pragma pack(pop)
