#include "EEnemy_AttackThreatState.hpp"
#include "UFunction.hpp"
#include "UOffscreenThreatComponent.hpp"
#include "UWidgetComponent.hpp"
UOffscreenThreatComponent* UOffscreenThreatComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OffscreenThreatComponent");
    return (UOffscreenThreatComponent*)res;
}
void UOffscreenThreatComponent::SetAttackState(EEnemy_AttackThreatState AttackState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OffscreenThreatComponent.SetAttackState"));
    struct Params_SetAttackState {
        EEnemy_AttackThreatState AttackState; // 0x0
    }; // Size: 0x1
    Params_SetAttackState params{};
    params.AttackState = (EEnemy_AttackThreatState)AttackState;
    ProcessEvent(func, &params);
}
