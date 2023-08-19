#pragma once
#include <cstdint>
#include "FConversationExplicitLayeredAnimationReference.hpp"
#include "UNameProvider.hpp"
#pragma pack(push, 1)
class UName_ConversationExplicitLayeredAnimation : public UNameProvider {
public:
    FConversationExplicitLayeredAnimationReference Reference; // 0x28
    static UName_ConversationExplicitLayeredAnimation* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
