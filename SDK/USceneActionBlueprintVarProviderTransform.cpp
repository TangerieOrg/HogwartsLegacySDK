#include "USceneActionBlueprintVarProvider.hpp"
#include "USceneActionBlueprintVarProviderTransform.hpp"
#include "UTransformProvider.hpp"
USceneActionBlueprintVarProviderTransform* USceneActionBlueprintVarProviderTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionBlueprintVarProviderTransform");
    return (USceneActionBlueprintVarProviderTransform*)res;
}
