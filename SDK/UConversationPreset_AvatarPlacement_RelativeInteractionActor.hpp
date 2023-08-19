#pragma once
#include <cstdint>
#include "EConversationPreset_ProximityType.hpp"
#include "UConversationPreset_AvatarPlacement.hpp"
class UConversationPreset_DistanceProvider;
class UConversationPreset_RelativeInteractionActorTest;
class UConversationPreset_CheckBetweenTest;
#pragma pack(push, 1)
class UConversationPreset_AvatarPlacement_RelativeInteractionActor : public UConversationPreset_AvatarPlacement {
public:
    TArray<UConversationPreset_DistanceProvider*> DistanceProviders; // 0x28
    TArray<UConversationPreset_RelativeInteractionActorTest*> TestsToPerform; // 0x38
    float AvatarPositionDirectionFromInteractionActor; // 0x48
    float AvatarRotationFromInteractionActor; // 0x4c
    bool CheckGroundCollision; // 0x50
    bool CheckNavMesh; // 0x51
    char pad_52[0x6];
    TArray<UConversationPreset_CheckBetweenTest*> CheckBetweenTests; // 0x58
    bool UseMaxHeightAngleThreshold; // 0x68
    char pad_69[0x3];
    float MaxHeightAngleThreshold; // 0x6c
    EConversationPreset_ProximityType FailProximity; // 0x70
    char pad_71[0x7];
    static UConversationPreset_AvatarPlacement_RelativeInteractionActor* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
