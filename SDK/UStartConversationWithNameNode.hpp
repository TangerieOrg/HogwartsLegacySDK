#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
#pragma pack(push, 1)
class UStartConversationWithNameNode : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x20];
    FName CharacterID; // 0x50
    FName ConversationID; // 0x58
    static UStartConversationWithNameNode* StaticClass();
    static UStartConversationWithNameNode* StartConversationWithName(FName CharacterID, FName ConversationID);
}; // Size: 0x60
#pragma pack(pop)
