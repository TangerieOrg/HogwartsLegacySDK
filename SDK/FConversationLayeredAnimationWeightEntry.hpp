#pragma once
#include <cstdint>
class UFloatProvider;
#pragma pack(push, 1)
struct FConversationLayeredAnimationWeightEntry {
    FName Name; // 0x0
    FString DisplayName; // 0x8
    FString Description; // 0x18
    UFloatProvider* Provider; // 0x28
}; // Size: 0x30
#pragma pack(pop)
