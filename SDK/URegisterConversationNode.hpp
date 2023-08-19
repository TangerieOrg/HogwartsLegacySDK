#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class AActor;
#pragma pack(push, 1)
class URegisterConversationNode : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x28];
    FName ConversationID; // 0x58
    static URegisterConversationNode* StaticClass();
    static URegisterConversationNode* RegisterConversation(AActor* interactionActor, FName ConversationID);
}; // Size: 0x60
#pragma pack(pop)
