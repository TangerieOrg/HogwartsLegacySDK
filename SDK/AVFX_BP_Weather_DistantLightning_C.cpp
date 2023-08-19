#include "AVFX_BP_Weather_DistantLightning_C.hpp"
#include "AWeatherSurfaceWorldFXBlueprint.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
AVFX_BP_Weather_DistantLightning_C* AVFX_BP_Weather_DistantLightning_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Weather/Lightning/VFX_BP_Weather_DistantLightning.VFX_BP_Weather_DistantLightning_C");
    return (AVFX_BP_Weather_DistantLightning_C*)res;
}
void AVFX_BP_Weather_DistantLightning_C::LightningLoop() {
    static auto func = (UFunction*)(find_uobject("Function /Weather/Lightning/VFX_BP_Weather_DistantLightning.VFX_BP_Weather_DistantLightning_C.LightningLoop"));
    struct Params_LightningLoop {
    }; // Size: 0x0
    Params_LightningLoop params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Weather_DistantLightning_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Weather/Lightning/VFX_BP_Weather_DistantLightning.VFX_BP_Weather_DistantLightning_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Weather_DistantLightning_C::ExecuteUbergraph_VFX_BP_Weather_DistantLightning(int32_t EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
