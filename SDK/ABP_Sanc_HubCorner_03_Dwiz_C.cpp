#include "ABP_Sanc_HubCorner_03_C.hpp"
#include "ABP_Sanc_HubCorner_03_Dwiz_C.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UBoxComponent.hpp"
#include "UConjurationWallAlignmentComponent.hpp"
#include "UDeferredChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTransformationFxInfoComponent.hpp"
void ABP_Sanc_HubCorner_03_Dwiz_C::ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubCorner_03_Dwiz.BP_Sanc_HubCorner_03_Dwiz_C.ObjectPhysicalResponseImpact"));
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
ABP_Sanc_HubCorner_03_Dwiz_C* ABP_Sanc_HubCorner_03_Dwiz_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubCorner_03_Dwiz.BP_Sanc_HubCorner_03_Dwiz_C");
    return (ABP_Sanc_HubCorner_03_Dwiz_C*)res;
}
void ABP_Sanc_HubCorner_03_Dwiz_C::ExecuteUbergraph_BP_Sanc_HubCorner_03_Dwiz(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
