#include "AActor.hpp"
#include "AConfringoSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
AConfringoSpellTool* AConfringoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConfringoSpellTool");
    return (AConfringoSpellTool*)res;
}
void AConfringoSpellTool::AddOnFireDoT(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConfringoSpellTool.AddOnFireDoT"));
    struct Params_AddOnFireDoT {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_AddOnFireDoT params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
float AConfringoSpellTool::GetExplosionRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConfringoSpellTool.GetExplosionRadius"));
    struct Params_GetExplosionRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetExplosionRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
