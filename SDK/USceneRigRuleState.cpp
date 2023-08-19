#include "USceneRigRuleState.hpp"
#include "UTimeRigRuleState.hpp"
USceneRigRuleState* USceneRigRuleState::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigRuleState");
    return (USceneRigRuleState*)res;
}
