#pragma once
#include <cstdint>
#include "UStoryGraphConditionProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphCondition_ConversationResult : public UStoryGraphConditionProvider {
public:
    FString ConversationResult; // 0x28
    static UStoryGraphCondition_ConversationResult* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
