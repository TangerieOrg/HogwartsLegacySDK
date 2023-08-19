#include "FMaterialSwapInfoOverrideMaterial.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
#include "USceneAction_MaterialSwapOverrideMaterial.hpp"
USceneAction_MaterialSwapOverrideMaterial* USceneAction_MaterialSwapOverrideMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_MaterialSwapOverrideMaterial");
    return (USceneAction_MaterialSwapOverrideMaterial*)res;
}
