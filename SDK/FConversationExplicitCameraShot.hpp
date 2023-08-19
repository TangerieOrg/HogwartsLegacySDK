#pragma once
#include <cstdint>
#include "FConversationExplicitCameraShot_CameraListItem.hpp"
#pragma pack(push, 1)
struct FConversationExplicitCameraShot {
    FName Name; // 0x0
    FString DisplayName; // 0x8
    FString Description; // 0x18
    TArray<FConversationExplicitCameraShot_CameraListItem> AvatarCameras; // 0x28
    TArray<FConversationExplicitCameraShot_CameraListItem> InteractionActorCameras; // 0x38
}; // Size: 0x48
#pragma pack(pop)
