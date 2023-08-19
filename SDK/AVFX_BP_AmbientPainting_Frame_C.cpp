#include "AAmbientPaintingActor.hpp"
#include "AVFX_BP_AmbientPainting_Frame_C.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
AVFX_BP_AmbientPainting_Frame_C* AVFX_BP_AmbientPainting_Frame_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/AmbientPainitngs/VFX_BP_AmbientPainting_Frame.VFX_BP_AmbientPainting_Frame_C");
    return (AVFX_BP_AmbientPainting_Frame_C*)res;
}
void AVFX_BP_AmbientPainting_Frame_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/AmbientPainitngs/VFX_BP_AmbientPainting_Frame.VFX_BP_AmbientPainting_Frame_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_AmbientPainting_Frame_C::ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/AmbientPainitngs/VFX_BP_AmbientPainting_Frame.VFX_BP_AmbientPainting_Frame_C.ObjectPhysicalResponseImpact"));
    struct Params_ObjectPhysicalResponseImpact {
        float ImpactIntensity; // 0x0
        FName SpellName; // 0x4
        FName ResponseConfigName; // 0xc
        FVector ImpactLocation; // 0x14
    }; // Size: 0x20
    Params_ObjectPhysicalResponseImpact params{};
    params.ImpactIntensity = (float)ImpactIntensity;
    params.SpellName = (FName)SpellName;
    params.ResponseConfigName = (FName)ResponseConfigName;
    params.ImpactLocation = (FVector)ImpactLocation;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
}
void AVFX_BP_AmbientPainting_Frame_C::ExecuteUbergraph_VFX_BP_AmbientPainting_Frame(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
