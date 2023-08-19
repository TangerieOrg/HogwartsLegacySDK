#pragma once
#include <cstdint>
#include "FConversation_AvatarSettings.hpp"
#include "FConversation_InteractionActorSettings.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FConversationPreset {
    FName Name; // 0x0
    FString DisplayName; // 0x8
    FString Description; // 0x18
    bool DefaultPresetTalkTo; // 0x28
    bool DefaultPresetForced; // 0x29
    char pad_2a[0x6];
    FGameplayTagContainer SceneRigTags; // 0x30
    FGameplayTagContainer CameraTags; // 0x50
    FConversation_InteractionActorSettings InteractionActorSettings; // 0x70
    FConversation_AvatarSettings AvatarSettings; // 0x98
}; // Size: 0xd8
#pragma pack(pop)
