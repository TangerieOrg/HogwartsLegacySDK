#include "FStencilManagerEffectInfoActorOverrides.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UStencilManagerWholeActorOverrides.hpp"
void UStencilManagerWholeActorOverrides::Validate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManagerWholeActorOverrides.Validate"));
    struct Params_Validate {
    }; // Size: 0x0
    Params_Validate params{};
    ProcessEvent(func, &params);
}
UStencilManagerWholeActorOverrides* UStencilManagerWholeActorOverrides::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerWholeActorOverrides");
    return (UStencilManagerWholeActorOverrides*)res;
}
