#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FConversationExplicitPoseGroup {
    FName Name; // 0x0
    FString DisplayName; // 0x8
    FString Description; // 0x18
    FGameplayTagContainer Tags; // 0x28
}; // Size: 0x48
#pragma pack(pop)
