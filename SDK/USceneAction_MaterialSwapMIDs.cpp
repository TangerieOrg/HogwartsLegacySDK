#include "FMaterialSwapInfoInPlaceMIDs.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
#include "USceneAction_MaterialSwapMIDs.hpp"
USceneAction_MaterialSwapMIDs* USceneAction_MaterialSwapMIDs::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_MaterialSwapMIDs");
    return (USceneAction_MaterialSwapMIDs*)res;
}
