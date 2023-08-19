#include "AActor.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_TargetCalloutInterface_C.hpp"
UUI_BPI_TargetCalloutInterface_C* UUI_BPI_TargetCalloutInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Actor/UI_BPI_TargetCalloutInterface.UI_BPI_TargetCalloutInterface_C");
    return (UUI_BPI_TargetCalloutInterface_C*)res;
}
void UUI_BPI_TargetCalloutInterface_C::SetupCreatureUI(AActor* CreatureActor, bool IsTamed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BPI_TargetCalloutInterface.UI_BPI_TargetCalloutInterface_C.SetupCreatureUI"));
    struct Params_SetupCreatureUI {
        AActor* CreatureActor; // 0x0
        bool IsTamed; // 0x8
    }; // Size: 0x9
    Params_SetupCreatureUI params{};
    params.CreatureActor = (AActor*)CreatureActor;
    params.IsTamed = (bool)IsTamed;
    ProcessEvent(func, &params);
}
void UUI_BPI_TargetCalloutInterface_C::SetCalloutVisibility(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BPI_TargetCalloutInterface.UI_BPI_TargetCalloutInterface_C.SetCalloutVisibility"));
    struct Params_SetCalloutVisibility {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_SetCalloutVisibility params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
