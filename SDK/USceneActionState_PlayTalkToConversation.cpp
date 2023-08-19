#include "USceneActionState_PlayTalkToConversation.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_PlayTalkToConversation* USceneActionState_PlayTalkToConversation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PlayTalkToConversation");
    return (USceneActionState_PlayTalkToConversation*)res;
}
