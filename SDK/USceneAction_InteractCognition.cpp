#include "ECalloutActions.hpp"
#include "ECalloutBlipType.hpp"
#include "ECalloutType.hpp"
#include "FVector.hpp"
#include "USceneAction_InteractCognition.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_InteractCognition* USceneAction_InteractCognition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_InteractCognition");
    return (USceneAction_InteractCognition*)res;
}
