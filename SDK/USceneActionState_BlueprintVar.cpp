#include "USceneActionState_BlueprintVar.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_BlueprintVar* USceneActionState_BlueprintVar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_BlueprintVar");
    return (USceneActionState_BlueprintVar*)res;
}
