#include "USceneActionState_Unskippable.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_Unskippable* USceneActionState_Unskippable::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_Unskippable");
    return (USceneActionState_Unskippable*)res;
}
