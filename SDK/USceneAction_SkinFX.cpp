#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapRules.hpp"
#include "FNiagaraMaterialDriverSetup.hpp"
#include "FSceneActionSkinFXProviderParameters.hpp"
#include "FSkinFXASREnvelope.hpp"
#include "UClass.hpp"
#include "UMaterialSwapMeshState.hpp"
#include "USceneActionBlueprintVarProvider.hpp"
#include "USceneAction_SkinFX.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_SkinFX* USceneAction_SkinFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_SkinFX");
    return (USceneAction_SkinFX*)res;
}
