#include "FMaterialSwapKeyBundlePreload.hpp"
#include "FMaterialSwapParameters.hpp"
#include "UMaterialSwapInfoObject.hpp"
#include "USceneAction_MaterialSwap.hpp"
#include "USceneAction_MaterialSwapFlex.hpp"
USceneAction_MaterialSwapFlex* USceneAction_MaterialSwapFlex::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_MaterialSwapFlex");
    return (USceneAction_MaterialSwapFlex*)res;
}
