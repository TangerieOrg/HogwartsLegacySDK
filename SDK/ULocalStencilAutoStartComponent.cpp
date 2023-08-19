#include "FLocalStencilEffect.hpp"
#include "UFunction.hpp"
#include "ULocalStencilAutoStartComponent.hpp"
#include "ULocalStencilComponent.hpp"
ULocalStencilAutoStartComponent* ULocalStencilAutoStartComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilAutoStartComponent");
    return (ULocalStencilAutoStartComponent*)res;
}
bool ULocalStencilAutoStartComponent::LocalStencilEffectStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.LocalStencilAutoStartComponent.LocalStencilEffectStart"));
    struct Params_LocalStencilEffectStart {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_LocalStencilEffectStart params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
