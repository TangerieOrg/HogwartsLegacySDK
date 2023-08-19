#include "USceneActionBlueprintVarProvider.hpp"
#include "USceneActionBlueprintVarProviderVector.hpp"
#include "UVectorProvider.hpp"
USceneActionBlueprintVarProviderVector* USceneActionBlueprintVarProviderVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionBlueprintVarProviderVector");
    return (USceneActionBlueprintVarProviderVector*)res;
}
