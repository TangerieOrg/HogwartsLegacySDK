#include "ASceneRigAIController.hpp"
#include "ASocialNavigatorController.hpp"
ASceneRigAIController* ASceneRigAIController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigAIController");
    return (ASceneRigAIController*)res;
}
