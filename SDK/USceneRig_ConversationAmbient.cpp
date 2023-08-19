#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "USceneRigProvider.hpp"
#include "USceneRig_ConversationAmbient.hpp"
USceneRig_ConversationAmbient* USceneRig_ConversationAmbient::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_ConversationAmbient");
    return (USceneRig_ConversationAmbient*)res;
}
