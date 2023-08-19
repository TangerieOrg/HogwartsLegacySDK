#include "UIntProvider.hpp"
#include "USceneAction_SetIntProperty.hpp"
#include "USceneAction_SetProperty.hpp"
USceneAction_SetIntProperty* USceneAction_SetIntProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SetIntProperty");
    return (USceneAction_SetIntProperty*)res;
}
