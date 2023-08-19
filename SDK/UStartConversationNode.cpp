#include "AActor.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UStartConversationNode.hpp"
UStartConversationNode* UStartConversationNode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StartConversationNode");
    return (UStartConversationNode*)res;
}
UStartConversationNode* UStartConversationNode::StartConversation(AActor* interactionActor, FName ConversationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartConversationNode.StartConversation"));
    struct Params_StartConversation {
        AActor* interactionActor; // 0x0
        FName ConversationID; // 0x8
        UStartConversationNode* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_StartConversation params{};
    params.interactionActor = (AActor*)interactionActor;
    params.ConversationID = (FName)ConversationID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStartConversationNode*)params.ReturnValue;
}
