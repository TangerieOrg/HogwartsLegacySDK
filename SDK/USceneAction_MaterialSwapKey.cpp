#include "FMaterialSwapKeyBundlePreload.hpp"
#include "FMaterialSwapKeyUI.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
#include "USceneAction_MaterialSwapKey.hpp"
USceneAction_MaterialSwapKey* USceneAction_MaterialSwapKey::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_MaterialSwapKey");
    return (USceneAction_MaterialSwapKey*)res;
}
