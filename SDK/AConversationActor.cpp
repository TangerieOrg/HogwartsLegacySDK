#include "AConversationActor.hpp"
#include "AStoryGraphActor.hpp"
#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Bool.hpp"
#include "FSceneRigStage_Float.hpp"
#include "FSceneRigStage_Int.hpp"
#include "FSceneRigStage_String.hpp"
#include "FSceneRigStage_Transform.hpp"
AConversationActor* AConversationActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConversationActor");
    return (AConversationActor*)res;
}
