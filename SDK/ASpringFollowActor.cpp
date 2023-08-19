#include "AActor.hpp"
#include "ASpringFollowActor.hpp"
#include "UFunction.hpp"
#include "USpringFollowComponent.hpp"
ASpringFollowActor* ASpringFollowActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpringFollowActor");
    return (ASpringFollowActor*)res;
}
void ASpringFollowActor::ResetPhysics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpringFollowActor.ResetPhysics"));
    struct Params_ResetPhysics {
    }; // Size: 0x0
    Params_ResetPhysics params{};
    ProcessEvent(func, &params);
}
