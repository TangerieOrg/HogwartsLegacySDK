#pragma once
#include <cstdint>
#include "FConversation_FinalTransformSettings.hpp"
#include "FConversation_InitialTransformSettings.hpp"
class UConversationPreset_AvatarPlacement;
class UConversationPreset_PreInitInvoke_Placement;
#pragma pack(push, 1)
struct FConversation_AvatarSettings {
    FConversation_InitialTransformSettings InitialTransformSettings; // 0x0
    TArray<UConversationPreset_AvatarPlacement*> Placements; // 0x10
    bool EnableFinalPositionOverride; // 0x20
    bool FinalPositionOverrideCheckGroundCollision; // 0x21
    bool FinalPositionOverrideCheckNavMesh; // 0x22
    char pad_23[0x5];
    FConversation_FinalTransformSettings FinalTransformSettings; // 0x28
    UConversationPreset_PreInitInvoke_Placement* PreInitInvokePlacement; // 0x38
}; // Size: 0x40
#pragma pack(pop)
