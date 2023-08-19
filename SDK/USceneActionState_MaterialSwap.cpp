#include "UMaterialSwap.hpp"
#include "USceneActionState_MaterialSwap.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_MaterialSwap* USceneActionState_MaterialSwap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_MaterialSwap");
    return (USceneActionState_MaterialSwap*)res;
}
