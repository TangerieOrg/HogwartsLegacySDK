#include "UBoolProvider.hpp"
#include "USceneActionBlueprintVarProvider.hpp"
#include "USceneActionBlueprintVarProviderBool.hpp"
USceneActionBlueprintVarProviderBool* USceneActionBlueprintVarProviderBool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionBlueprintVarProviderBool");
    return (USceneActionBlueprintVarProviderBool*)res;
}
