#include "USceneActionBlueprintVarProvider.hpp"
#include "USceneAction_BlueprintVar.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_BlueprintVar* USceneAction_BlueprintVar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_BlueprintVar");
    return (USceneAction_BlueprintVar*)res;
}
