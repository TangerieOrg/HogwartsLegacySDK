#include "UFloatProvider.hpp"
#include "USceneAction_SetFloatProperty.hpp"
#include "USceneAction_SetProperty.hpp"
USceneAction_SetFloatProperty* USceneAction_SetFloatProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SetFloatProperty");
    return (USceneAction_SetFloatProperty*)res;
}
