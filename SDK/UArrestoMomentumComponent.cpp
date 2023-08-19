#include "AActor.hpp"
#include "FArrestoData.hpp"
#include "UArrestoMomentumComponent.hpp"
#include "UFunction.hpp"
#include "UStateEffectComponent.hpp"
UArrestoMomentumComponent* UArrestoMomentumComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ArrestoMomentumComponent");
    return (UArrestoMomentumComponent*)res;
}
void UArrestoMomentumComponent::OnBroken(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ArrestoMomentumComponent.OnBroken"));
    struct Params_OnBroken {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnBroken params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
