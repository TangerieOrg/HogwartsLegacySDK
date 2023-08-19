#include "UActorComponent.hpp"
#include "UDamageOverTime.hpp"
#include "UFunction.hpp"
#include "UStateEffectComponent.hpp"
UDamageOverTime* UDamageOverTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DamageOverTime");
    return (UDamageOverTime*)res;
}
void UDamageOverTime::OnArrestoEnd(UActorComponent* i_component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DamageOverTime.OnArrestoEnd"));
    struct Params_OnArrestoEnd {
        UActorComponent* i_component; // 0x0
    }; // Size: 0x8
    Params_OnArrestoEnd params{};
    params.i_component = (UActorComponent*)i_component;
    ProcessEvent(func, &params);
}
