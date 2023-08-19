#include "UBudgeter.hpp"
#include "USceneRigBudgeter.hpp"
USceneRigBudgeter* USceneRigBudgeter::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.SceneRigBudgeter");
    return (USceneRigBudgeter*)res;
}
