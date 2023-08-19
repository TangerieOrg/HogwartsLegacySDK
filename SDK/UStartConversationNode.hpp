#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class AActor;
#pragma pack(push, 1)
class UStartConversationNode : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x28];
    FName ConversationID; // 0x58
    static UStartConversationNode* StaticClass();
    static UStartConversationNode* StartConversation(AActor* interactionActor, FName ConversationID);
}; // Size: 0x60
#pragma pack(pop)
