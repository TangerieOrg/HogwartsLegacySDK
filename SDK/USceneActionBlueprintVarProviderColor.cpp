#include "UColorProvider.hpp"
#include "USceneActionBlueprintVarProvider.hpp"
#include "USceneActionBlueprintVarProviderColor.hpp"
USceneActionBlueprintVarProviderColor* USceneActionBlueprintVarProviderColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionBlueprintVarProviderColor");
    return (USceneActionBlueprintVarProviderColor*)res;
}
