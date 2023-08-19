#include "AActor.hpp"
#include "FMunitionImpactData.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "USpellImpactComponent.hpp"
USpellImpactComponent* USpellImpactComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellImpactComponent");
    return (USpellImpactComponent*)res;
}
void USpellImpactComponent::OnSpellImpact(AActor* Target, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellImpactComponent.OnSpellImpact"));
    struct Params_OnSpellImpact {
        AActor* Target; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnSpellImpact params{};
    params.Target = (AActor*)Target;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
