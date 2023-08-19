#include "FSceneRigObjectActionBase_ComponentName.hpp"
#include "FSetProperty_PropertyName.hpp"
#include "USceneAction_SetProperty.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_SetProperty* USceneAction_SetProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SetProperty");
    return (USceneAction_SetProperty*)res;
}
