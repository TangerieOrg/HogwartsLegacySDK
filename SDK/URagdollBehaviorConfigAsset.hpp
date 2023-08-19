#pragma once
#include <cstdint>
#include "FRagdollGetupOptions.hpp"
#include "FRagdollPoseState.hpp"
#include "UDataAsset.hpp"
class URagdollBehaviorProfile;
class URagdollAudioBehaviorProfile;
class URagdollRecoveryAssistBehaviorProfile;
#pragma pack(push, 1)
class URagdollBehaviorConfigAsset : public UDataAsset {
public:
    URagdollBehaviorProfile* BehaviorProfile; // 0x30
    URagdollAudioBehaviorProfile* AudioBehaviorProfile; // 0x38
    URagdollRecoveryAssistBehaviorProfile* RecoveryAssistBehaviorProfile; // 0x40
    TArray<FRagdollGetupOptions> GetupAnimationTagStateFilter; // 0x48
    FName RagdollShoulderLeftName; // 0x58
    FName RagdollShoulderRightName; // 0x60
    FName RagdollHipsLeftName; // 0x68
    FName RagdollHipsRightName; // 0x70
    FName RagdollSpineLowerBoneName; // 0x78
    FName RagdollSpineUpperBoneName; // 0x80
    TArray<FRagdollPoseState> IdentifiablePoseStates; // 0x88
    uint32_t NavigationLayer; // 0x98
    float MinMoveDist2DRetestNavPosition; // 0x9c
    float MaxGroundTestDistance; // 0xa0
    char pad_a4[0x4];
    static URagdollBehaviorConfigAsset* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
