#pragma once
#include <cstdint>
#include "FConversationExplicitLayeredAnimationCategory.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UConversationExplicitLayeredAnimations : public UDataAsset {
public:
    TArray<FConversationExplicitLayeredAnimationCategory> Categories; // 0x30
    static UConversationExplicitLayeredAnimations* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
