#include "FMaterialSwapInfoOverrideMaterials.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
#include "USceneAction_MaterialSwapOverrideMaterials.hpp"
USceneAction_MaterialSwapOverrideMaterials* USceneAction_MaterialSwapOverrideMaterials::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_MaterialSwapOverrideMaterials");
    return (USceneAction_MaterialSwapOverrideMaterials*)res;
}
