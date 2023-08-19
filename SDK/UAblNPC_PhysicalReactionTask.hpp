#pragma once
#include <cstdint>
#include "EImpactReactionStrength.hpp"
#include "EPhysicalReactionTaskAction.hpp"
#include "ERagdollCOMLocationDrivingMode.hpp"
#include "ERagdollCOMRotationDrivingMode.hpp"
#include "ERagdollDrivingSetting.hpp"
#include "ERagdollPoseDrivingMode.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_PhysicalReactionTask : public UAblAbilityTask {
public:
    EPhysicalReactionTaskAction Action; // 0x70
    EImpactReactionStrength ReactionStrength; // 0x71
    bool bBlendBackOnTaskEnd; // 0x72
    ERagdollDrivingSetting SetPoseDrivingMode; // 0x73
    ERagdollPoseDrivingMode PoseDrivingMode; // 0x74
    char pad_75[0x3];
    float PoseDrivingBlendDuration; // 0x78
    bool bSetCenterOfMassDrivingModes; // 0x7c
    ERagdollCOMLocationDrivingMode LocationDrivingMode; // 0x7d
    ERagdollCOMRotationDrivingMode RotationDrivingMode; // 0x7e
    bool bEnableCcd; // 0x7f
    float CcdTime; // 0x80
    char pad_84[0x4];
    static UAblNPC_PhysicalReactionTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
