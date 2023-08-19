#include "UIntProvider.hpp"
#include "USceneActionBlueprintVarProvider.hpp"
#include "USceneActionBlueprintVarProviderInt.hpp"
USceneActionBlueprintVarProviderInt* USceneActionBlueprintVarProviderInt::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionBlueprintVarProviderInt");
    return (USceneActionBlueprintVarProviderInt*)res;
}
