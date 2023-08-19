#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcBakedPoseRigidbodyTask : public UAblAbilityTask {
public:
    bool bAttachBakedPoseOnTaskStart; // 0x70
    bool bRemoveBakedPoseOnTaskStart; // 0x71
    bool bAttachBakedPoseOnTaskEnd; // 0x72
    bool bRemoveBakedPoseOnTaskEnd; // 0x73
    bool bApplyForcesToBakedPose; // 0x74
    char pad_75[0x3];
    FVector LinearVelocity; // 0x78
    FVector AngularVelocityInDegrees; // 0x84
    bool bVelocityAwayFromInstigator; // 0x90
    char pad_91[0x7];
    static UAblNpcBakedPoseRigidbodyTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
