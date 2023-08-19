#pragma once
#include <cstdint>
#include "ERagdollCOMLocationDrivingMode.hpp"
#include "ERagdollCOMRotationDrivingMode.hpp"
#include "ERagdollDriveAnimEnum.hpp"
#include "ERagdollPoseDrivingMode.hpp"
#include "FGameplayTagContainer.hpp"
#include "URagdollBehaviorBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class URagdollBehavior : public URagdollBehaviorBase {
public:
    TArray<URagdollBehavior*> ExitToBehaviors; // 0xc0
    bool AllowGetup; // 0xd0
    ERagdollCOMLocationDrivingMode COMLocationDriveMode; // 0xd1
    ERagdollCOMRotationDrivingMode COMRotationDriveMode; // 0xd2
    ERagdollDriveAnimEnum DriveAnimationMode; // 0xd3
    char pad_d4[0x4];
    FGameplayTagContainer DriveToAnimationTags; // 0xd8
    bool ForceAnimResetIfPriorAnimDrivesToSameTags; // 0xf8
    ERagdollPoseDrivingMode PoseDriveMode; // 0xf9
    char pad_fa[0x2];
    float PoseDriveBlendTime; // 0xfc
    UCurveFloat* StrengthOverTime; // 0x100
    float StrengthBlendInTime; // 0x108
    bool CommitToGetupPose; // 0x10c
    bool EndBehavior; // 0x10d
    bool AllowRemoval; // 0x10e
    bool AllowHibrnate; // 0x10f
    bool ForceFreezeInPlace; // 0x110
    char pad_111[0x7];
    static URagdollBehavior* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
