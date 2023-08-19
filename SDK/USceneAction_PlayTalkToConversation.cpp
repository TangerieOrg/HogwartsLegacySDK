#include "FTimeRigOutputSymbol.hpp"
#include "USceneAction_PlayTalkToConversation.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UStoryGraph_Conversation.hpp"
USceneAction_PlayTalkToConversation* USceneAction_PlayTalkToConversation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PlayTalkToConversation");
    return (USceneAction_PlayTalkToConversation*)res;
}
