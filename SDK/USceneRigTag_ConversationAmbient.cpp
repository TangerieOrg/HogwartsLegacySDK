#include "UAnimationArchitectTagProvider.hpp"
#include "USceneRigTag_ConversationAmbient.hpp"
USceneRigTag_ConversationAmbient* USceneRigTag_ConversationAmbient::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigTag_ConversationAmbient");
    return (USceneRigTag_ConversationAmbient*)res;
}
