#include "USceneAction_ConversationLightRigOptions.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ConversationLightRigOptions* USceneAction_ConversationLightRigOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConversationLightRigOptions");
    return (USceneAction_ConversationLightRigOptions*)res;
}
