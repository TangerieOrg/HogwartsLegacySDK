#pragma once
#include <cstdint>
#include "FConversationExplicitLayeredAnimation.hpp"
#pragma pack(push, 1)
struct FConversationExplicitLayeredAnimationCategory {
    FName Name; // 0x0
    FString DisplayName; // 0x8
    FString Description; // 0x18
    TArray<FConversationExplicitLayeredAnimation> Animations; // 0x28
}; // Size: 0x38
#pragma pack(pop)
