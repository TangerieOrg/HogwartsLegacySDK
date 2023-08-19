#include "ESkinFXEffectEndStyle.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapRules.hpp"
#include "FMultiFX2_SkinFxImpactOptions.hpp"
#include "FNiagaraMaterialDriverSetup.hpp"
#include "FSkinFXASREnvelope.hpp"
#include "UClass.hpp"
#include "UMaterialSwapMeshState.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_SkinFx.hpp"
UMultiFX2_SkinFx* UMultiFX2_SkinFx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_SkinFx");
    return (UMultiFX2_SkinFx*)res;
}
