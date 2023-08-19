#include "FLocalStencilEffectActorOverride.hpp"
#include "FLocalStencilEffectActorOverrideList.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "ULocalStencilEffectActorOverrides.hpp"
ULocalStencilEffectActorOverrides* ULocalStencilEffectActorOverrides::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectActorOverrides");
    return (ULocalStencilEffectActorOverrides*)res;
}
void ULocalStencilEffectActorOverrides::Validate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.LocalStencilEffectActorOverrides.Validate"));
    struct Params_Validate {
    }; // Size: 0x0
    Params_Validate params{};
    ProcessEvent(func, &params);
}
