#include "UObject.hpp"
#include "USceneActionBlueprintVarProvider.hpp"
USceneActionBlueprintVarProvider* USceneActionBlueprintVarProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionBlueprintVarProvider");
    return (USceneActionBlueprintVarProvider*)res;
}
