#pragma once
#include <cstdint>
#include "EConversationCameraFilterType.hpp"
class UNameProvider;
#pragma pack(push, 1)
struct FStoryGraph_Conversation_CameraFilter {
    EConversationCameraFilterType ConversationCameraFilterType; // 0x0
    char pad_1[0x7];
    TArray<UNameProvider*> EnableCameraNames; // 0x8
    TArray<UNameProvider*> DisableCameraNames; // 0x18
}; // Size: 0x28
#pragma pack(pop)
