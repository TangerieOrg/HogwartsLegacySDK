#include "UFloatProvider.hpp"
#include "USceneActionBlueprintVarProvider.hpp"
#include "USceneActionBlueprintVarProviderFloat.hpp"
USceneActionBlueprintVarProviderFloat* USceneActionBlueprintVarProviderFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionBlueprintVarProviderFloat");
    return (USceneActionBlueprintVarProviderFloat*)res;
}
