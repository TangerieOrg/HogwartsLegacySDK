#include "ABP_Sanc_TerrariumForestStart_Dwiz_C.hpp"
#include "ABP_Sanc_TerrariumForestStart_Parent_C.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UDeferredChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Sanc_TerrariumForestStart_Dwiz_C::ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_TerrariumForestStart_Dwiz.BP_Sanc_TerrariumForestStart_Dwiz_C.ObjectPhysicalResponseImpact"));
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
ABP_Sanc_TerrariumForestStart_Dwiz_C* ABP_Sanc_TerrariumForestStart_Dwiz_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_TerrariumForestStart_Dwiz.BP_Sanc_TerrariumForestStart_Dwiz_C");
    return (ABP_Sanc_TerrariumForestStart_Dwiz_C*)res;
}
void ABP_Sanc_TerrariumForestStart_Dwiz_C::ExecuteUbergraph_BP_Sanc_TerrariumForestStart_Dwiz(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, float K2Node_Event_ImpactIntensity, FName K2Node_Event_SpellName, FName K2Node_Event_ResponseConfigName, FVector K2Node_Event_ImpactLocation, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue) {}
