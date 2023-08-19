#include "ACreature_Character.hpp"
#include "ACreature_Controller.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector2D.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UCreature_PathFollowingComponent.hpp"
#include "UFunction.hpp"
#include "UPathFollowingComponent.hpp"
UCreature_PathFollowingComponent* UCreature_PathFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_PathFollowingComponent");
    return (UCreature_PathFollowingComponent*)res;
}
void UCreature_PathFollowingComponent::SetUseRepulsorCollisionAvoidance(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_PathFollowingComponent.SetUseRepulsorCollisionAvoidance"));
    struct Params_SetUseRepulsorCollisionAvoidance {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetUseRepulsorCollisionAvoidance params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
