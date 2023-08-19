#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UNameProvider;
#pragma pack(push, 1)
struct FConversationCameraRegistration {
    FName Name; // 0x0
    FString DisplayName; // 0x8
    FString Description; // 0x18
    FGameplayTagContainer CameraTags; // 0x28
    TArray<UNameProvider*> AvoidTransitionCameraNames; // 0x48
}; // Size: 0x58
#pragma pack(pop)
