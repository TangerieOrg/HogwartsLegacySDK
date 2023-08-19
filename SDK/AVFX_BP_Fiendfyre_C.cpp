#include "AActor.hpp"
#include "AVFX_BP_Fiendfyre_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
AVFX_BP_Fiendfyre_C* AVFX_BP_Fiendfyre_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Particles/Magic/FeindFire/VFX_BP_FiendFyre.VFX_BP_Fiendfyre_C");
    return (AVFX_BP_Fiendfyre_C*)res;
}
void AVFX_BP_Fiendfyre_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/FeindFire/VFX_BP_FiendFyre.VFX_BP_Fiendfyre_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void AVFX_BP_Fiendfyre_C::ExecuteUbergraph_VFX_BP_Fiendfyre(int32_t EntryPoint, float K2Node_Event_DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/FeindFire/VFX_BP_FiendFyre.VFX_BP_Fiendfyre_C.ExecuteUbergraph_VFX_BP_Fiendfyre"));
    struct Params_ExecuteUbergraph_VFX_BP_Fiendfyre {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_DeltaSeconds; // 0x4
    }; // Size: 0x8
    Params_ExecuteUbergraph_VFX_BP_Fiendfyre params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    ProcessEvent(func, &params);
}
