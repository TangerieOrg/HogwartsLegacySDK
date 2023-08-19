#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Bool.hpp"
#include "FSceneRigStage_Float.hpp"
#include "FSceneRigStage_Int.hpp"
#include "FSceneRigStage_String.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "USceneRig.hpp"
#include "USceneRigProvider.hpp"
#include "USceneRig_SimpleConversation.hpp"
USceneRig_SimpleConversation* USceneRig_SimpleConversation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_SimpleConversation");
    return (USceneRig_SimpleConversation*)res;
}
