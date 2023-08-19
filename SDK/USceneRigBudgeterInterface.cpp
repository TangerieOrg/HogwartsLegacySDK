#include "UInterface.hpp"
#include "USceneRigBudgeterInterface.hpp"
USceneRigBudgeterInterface* USceneRigBudgeterInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.SceneRigBudgeterInterface");
    return (USceneRigBudgeterInterface*)res;
}
