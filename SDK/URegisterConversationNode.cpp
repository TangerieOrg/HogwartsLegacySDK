#include "AActor.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "URegisterConversationNode.hpp"
URegisterConversationNode* URegisterConversationNode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RegisterConversationNode");
    return (URegisterConversationNode*)res;
}
URegisterConversationNode* URegisterConversationNode::RegisterConversation(AActor* interactionActor, FName ConversationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RegisterConversationNode.RegisterConversation"));
    struct Params_RegisterConversation {
        AActor* interactionActor; // 0x0
        FName ConversationID; // 0x8
        URegisterConversationNode* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_RegisterConversation params{};
    params.interactionActor = (AActor*)interactionActor;
    params.ConversationID = (FName)ConversationID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (URegisterConversationNode*)params.ReturnValue;
}
