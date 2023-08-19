#include "AActor.hpp"
#include "ASpringFollowSwarmActor.hpp"
#include "FSpringFollowComponentSettings.hpp"
#include "FSwarmer.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
ASpringFollowSwarmActor* ASpringFollowSwarmActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpringFollowSwarmActor");
    return (ASpringFollowSwarmActor*)res;
}
void ASpringFollowSwarmActor::Generate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpringFollowSwarmActor.Generate"));
    struct Params_Generate {
    }; // Size: 0x0
    Params_Generate params{};
    ProcessEvent(func, &params);
}
void ASpringFollowSwarmActor::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpringFollowSwarmActor.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
