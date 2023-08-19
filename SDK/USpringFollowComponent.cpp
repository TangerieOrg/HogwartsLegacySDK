#include "FAlignToVelocity.hpp"
#include "FSpringFollowComponentSettings.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USpringFollowComponent.hpp"
USpringFollowComponent* USpringFollowComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpringFollowComponent");
    return (USpringFollowComponent*)res;
}
void USpringFollowComponent::ResetPhysics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpringFollowComponent.ResetPhysics"));
    struct Params_ResetPhysics {
    }; // Size: 0x0
    Params_ResetPhysics params{};
    ProcessEvent(func, &params);
}
void USpringFollowComponent::RemoveChildOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpringFollowComponent.RemoveChildOffset"));
    struct Params_RemoveChildOffset {
    }; // Size: 0x0
    Params_RemoveChildOffset params{};
    ProcessEvent(func, &params);
}
