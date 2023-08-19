#pragma once
#include <cstdint>
#include "EConversationPreset_ProximityType.hpp"
#include "UConversationPreset_AvatarPlacement.hpp"
#pragma pack(push, 1)
class UConversationPreset_AvatarPlacement_Preexisting : public UConversationPreset_AvatarPlacement {
public:
    EConversationPreset_ProximityType Proximity; // 0x28
    bool RotateInteractionActorToAvatar; // 0x29
    char pad_2a[0x2];
    float InteractionActorRotationOffset; // 0x2c
    bool RotateActorToInteractionActor; // 0x30
    char pad_31[0x3];
    float AvatarRotationOffset; // 0x34
    static UConversationPreset_AvatarPlacement_Preexisting* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
