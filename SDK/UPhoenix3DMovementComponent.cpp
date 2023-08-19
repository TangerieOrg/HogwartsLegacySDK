#include "FRootMotionMovementParams.hpp"
#include "UFunction.hpp"
#include "UIcarus3DMovementComponent.hpp"
#include "UPhoenix3DMovementComponent.hpp"
UPhoenix3DMovementComponent* UPhoenix3DMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Phoenix3DMovementComponent");
    return (UPhoenix3DMovementComponent*)res;
}
void UPhoenix3DMovementComponent::OnFullRagdollStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Phoenix3DMovementComponent.OnFullRagdollStart"));
    struct Params_OnFullRagdollStart {
    }; // Size: 0x0
    Params_OnFullRagdollStart params{};
    ProcessEvent(func, &params);
}
