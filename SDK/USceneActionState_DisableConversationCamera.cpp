#include "USceneActionState_DisableConversationCamera.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_DisableConversationCamera* USceneActionState_DisableConversationCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_DisableConversationCamera");
    return (USceneActionState_DisableConversationCamera*)res;
}
