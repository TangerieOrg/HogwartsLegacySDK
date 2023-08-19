#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UStartConversationWithNameNode.hpp"
UStartConversationWithNameNode* UStartConversationWithNameNode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StartConversationWithNameNode");
    return (UStartConversationWithNameNode*)res;
}
UStartConversationWithNameNode* UStartConversationWithNameNode::StartConversationWithName(FName CharacterID, FName ConversationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartConversationWithNameNode.StartConversationWithName"));
    struct Params_StartConversationWithName {
        FName CharacterID; // 0x0
        FName ConversationID; // 0x8
        UStartConversationWithNameNode* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_StartConversationWithName params{};
    params.CharacterID = (FName)CharacterID;
    params.ConversationID = (FName)ConversationID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStartConversationWithNameNode*)params.ReturnValue;
}
