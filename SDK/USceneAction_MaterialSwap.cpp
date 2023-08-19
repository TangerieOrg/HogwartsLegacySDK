#include "FSceneActionMaterialSwapParameterColor.hpp"
#include "FSceneActionMaterialSwapParameterScalar.hpp"
#include "FSceneActionMaterialSwapParameterVector.hpp"
#include "USceneAction_MaterialSwap.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_MaterialSwap* USceneAction_MaterialSwap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_MaterialSwap");
    return (USceneAction_MaterialSwap*)res;
}
