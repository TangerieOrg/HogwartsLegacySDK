#include "UCognitionStimuliSourceComponent.hpp"
#include "USceneActionState_InteractCognition.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_InteractCognition* USceneActionState_InteractCognition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_InteractCognition");
    return (USceneActionState_InteractCognition*)res;
}
