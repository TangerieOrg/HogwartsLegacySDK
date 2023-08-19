#pragma once
#include <cstdint>
#include "UConversationPreset_PreInitInvoke_Placement.hpp"
#pragma pack(push, 1)
class UConversationPreset_PreInitInvoke_Placement_Preexisting : public UConversationPreset_PreInitInvoke_Placement {
public:
    bool RotateInteractionActorToAvatar; // 0x28
    char pad_29[0x3];
    float InteractionActorRotationOffset; // 0x2c
    bool RotateActorToInteractionActor; // 0x30
    char pad_31[0x3];
    float AvatarRotationOffset; // 0x34
    static UConversationPreset_PreInitInvoke_Placement_Preexisting* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
