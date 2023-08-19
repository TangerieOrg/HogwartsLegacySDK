#include "USceneAction_SetProperty.hpp"
#include "USceneAction_SetVectorProperty.hpp"
#include "UVectorProvider.hpp"
USceneAction_SetVectorProperty* USceneAction_SetVectorProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SetVectorProperty");
    return (USceneAction_SetVectorProperty*)res;
}
