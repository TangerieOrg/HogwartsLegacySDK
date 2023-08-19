#include "AActor.hpp"
#include "ABP_RusticLamppostDressing_Flowers_C.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UPhysicalResponseComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_RusticLamppostDressing_Flowers_C* ABP_RusticLamppostDressing_Flowers_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/RusticLamppostDressingBPs/BP_RusticLamppostDressing_Flowers.BP_RusticLamppostDressing_Flowers_C");
    return (ABP_RusticLamppostDressing_Flowers_C*)res;
}
void ABP_RusticLamppostDressing_Flowers_C::CustomEvent(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/RusticLamppostDressingBPs/BP_RusticLamppostDressing_Flowers.BP_RusticLamppostDressing_Flowers_C.CustomEvent"));
    struct Params_CustomEvent {
        float ImpactIntensity; // 0x0
        FName SpellName; // 0x4
        FName ResponseConfigName; // 0xc
        FVector ImpactLocation; // 0x14
    }; // Size: 0x20
    Params_CustomEvent params{};
    params.ImpactIntensity = (float)ImpactIntensity;
    params.SpellName = (FName)SpellName;
    params.ResponseConfigName = (FName)ResponseConfigName;
    params.ImpactLocation = (FVector)ImpactLocation;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
}
void ABP_RusticLamppostDressing_Flowers_C::ExecuteUbergraph_BP_RusticLamppostDressing_Flowers(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
