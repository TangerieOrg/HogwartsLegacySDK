#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "URegisterConversationWithNameNode.hpp"
URegisterConversationWithNameNode* URegisterConversationWithNameNode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RegisterConversationWithNameNode");
    return (URegisterConversationWithNameNode*)res;
}
URegisterConversationWithNameNode* URegisterConversationWithNameNode::RegisterConversationWithName(FName CharacterID, FName ConversationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RegisterConversationWithNameNode.RegisterConversationWithName"));
    struct Params_RegisterConversationWithName {
        FName CharacterID; // 0x0
        FName ConversationID; // 0x8
        URegisterConversationWithNameNode* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_RegisterConversationWithName params{};
    params.CharacterID = (FName)CharacterID;
    params.ConversationID = (FName)ConversationID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (URegisterConversationWithNameNode*)params.ReturnValue;
}
