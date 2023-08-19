#include "UNameProvider.hpp"
#include "USceneAction_DisableConversationCamera.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_DisableConversationCamera* USceneAction_DisableConversationCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_DisableConversationCamera");
    return (USceneAction_DisableConversationCamera*)res;
}
