#include "USceneActionState_ConversationLightRigOptions.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ConversationLightRigOptions* USceneActionState_ConversationLightRigOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ConversationLightRigOptions");
    return (USceneActionState_ConversationLightRigOptions*)res;
}
