#include "ASceneRigActor.hpp"
#include "AUI_BP_SceneRigActor_Wait_C.hpp"
AUI_BP_SceneRigActor_Wait_C* AUI_BP_SceneRigActor_Wait_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/UI_BP_SceneRigActor_Wait.UI_BP_SceneRigActor_Wait_C");
    return (AUI_BP_SceneRigActor_Wait_C*)res;
}
