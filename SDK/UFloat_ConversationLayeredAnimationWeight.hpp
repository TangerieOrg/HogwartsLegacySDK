#pragma once
#include <cstdint>
#include "FConversationLayeredAnimationWeight.hpp"
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_ConversationLayeredAnimationWeight : public UFloatProvider {
public:
    FConversationLayeredAnimationWeight WeightEntryName; // 0x28
    static UFloat_ConversationLayeredAnimationWeight* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
