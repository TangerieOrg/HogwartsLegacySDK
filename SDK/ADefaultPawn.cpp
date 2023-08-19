#include "ADefaultPawn.hpp"
#include "APawn.hpp"
#include "UFunction.hpp"
#include "UPawnMovementComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
ADefaultPawn* ADefaultPawn::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DefaultPawn");
    return (ADefaultPawn*)res;
}
void ADefaultPawn::MoveUp_World(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DefaultPawn.MoveUp_World"));
    struct Params_MoveUp_World {
        float Val; // 0x0
    }; // Size: 0x4
    Params_MoveUp_World params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
void ADefaultPawn::TurnAtRate(float Rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DefaultPawn.TurnAtRate"));
    struct Params_TurnAtRate {
        float Rate; // 0x0
    }; // Size: 0x4
    Params_TurnAtRate params{};
    params.Rate = (float)Rate;
    ProcessEvent(func, &params);
}
void ADefaultPawn::MoveForward(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DefaultPawn.MoveForward"));
    struct Params_MoveForward {
        float Val; // 0x0
    }; // Size: 0x4
    Params_MoveForward params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
void ADefaultPawn::MoveRight(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DefaultPawn.MoveRight"));
    struct Params_MoveRight {
        float Val; // 0x0
    }; // Size: 0x4
    Params_MoveRight params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
void ADefaultPawn::LookUpAtRate(float Rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DefaultPawn.LookUpAtRate"));
    struct Params_LookUpAtRate {
        float Rate; // 0x0
    }; // Size: 0x4
    Params_LookUpAtRate params{};
    params.Rate = (float)Rate;
    ProcessEvent(func, &params);
}
