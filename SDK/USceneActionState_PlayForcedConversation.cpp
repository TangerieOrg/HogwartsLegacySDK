#include "USceneActionState_PlayForcedConversation.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_PlayForcedConversation* USceneActionState_PlayForcedConversation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PlayForcedConversation");
    return (USceneActionState_PlayForcedConversation*)res;
}
