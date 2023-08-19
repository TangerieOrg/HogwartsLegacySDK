#include "USceneAction_Unskippable.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_Unskippable* USceneAction_Unskippable::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_Unskippable");
    return (USceneAction_Unskippable*)res;
}
