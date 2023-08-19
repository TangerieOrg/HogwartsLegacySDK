#include "UBoolProvider.hpp"
#include "USceneAction_SetBoolProperty.hpp"
#include "USceneAction_SetProperty.hpp"
USceneAction_SetBoolProperty* USceneAction_SetBoolProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SetBoolProperty");
    return (USceneAction_SetBoolProperty*)res;
}
