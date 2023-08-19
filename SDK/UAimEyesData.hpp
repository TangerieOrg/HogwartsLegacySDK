#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UAimEyesData : public UDataAsset {
public:
    float LookSmoothness; // 0x30
    float MinTimeForInitialCentralFocus; // 0x34
    float MaxTimeForInitialCentralFocus; // 0x38
    float MinTimeBetweenLookDir; // 0x3c
    float MaxTimeBetweenLookDir; // 0x40
    float MinTimeBetweenBlinks; // 0x44
    float MaxTimeBetweenBlinks; // 0x48
    float DoubleBlinkProbability; // 0x4c
    FRuntimeFloatCurve BlinkCurve; // 0x50
    FRuntimeFloatCurve DoubleBlinkCurve; // 0xd8
    float PupilAxisOffset; // 0x160
    float MinTimeBetweenMicroLook; // 0x164
    float MaxTimeBetweenMicroLook; // 0x168
    bool bUseRandomTargetIfNoCurrentTarget; // 0x16c
    char pad_16d[0x3];
    float MinRandomTargetTime; // 0x170
    float MaxRandomTargetTime; // 0x174
    float MaxYawRandomTarget; // 0x178
    float MaxPitchRandomTarget; // 0x17c
    float MinRandomTargetDistance; // 0x180
    float MaxRandomTargetDistance; // 0x184
    float CentralFocusWeight; // 0x188
    float InternalMemoryWeight; // 0x18c
    float AuditoryMemoryWeight; // 0x190
    float EmotionalMemoryWeight; // 0x194
    float VisualConstructionWeight; // 0x198
    float AuditoryConstructionWeight; // 0x19c
    float BodySensationRecallWeight; // 0x1a0
    float SmellWeight; // 0x1a4
    float TasteWeight; // 0x1a8
    char pad_1ac[0x4];
    static UAimEyesData* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
