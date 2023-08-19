#include "APawn.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNavMovementComponent.hpp"
#include "UPawnMovementComponent.hpp"
void UPawnMovementComponent::AddInputVector(FVector WorldVector, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PawnMovementComponent.AddInputVector"));
    struct Params_AddInputVector {
        FVector WorldVector; // 0x0
        bool bForce; // 0xc
    }; // Size: 0xd
    Params_AddInputVector params{};
    params.WorldVector = (FVector)WorldVector;
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
bool UPawnMovementComponent::IsMoveInputIgnored() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PawnMovementComponent.IsMoveInputIgnored"));
    struct Params_IsMoveInputIgnored {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMoveInputIgnored params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UPawnMovementComponent::K2_GetInputVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PawnMovementComponent.K2_GetInputVector"));
    struct Params_K2_GetInputVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_K2_GetInputVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UPawnMovementComponent* UPawnMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PawnMovementComponent");
    return (UPawnMovementComponent*)res;
}
FVector UPawnMovementComponent::GetPendingInputVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PawnMovementComponent.GetPendingInputVector"));
    struct Params_GetPendingInputVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPendingInputVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UPawnMovementComponent::GetLastInputVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PawnMovementComponent.GetLastInputVector"));
    struct Params_GetLastInputVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastInputVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
APawn* UPawnMovementComponent::GetPawnOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PawnMovementComponent.GetPawnOwner"));
    struct Params_GetPawnOwner {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPawnOwner params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
FVector UPawnMovementComponent::ConsumeInputVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PawnMovementComponent.ConsumeInputVector"));
    struct Params_ConsumeInputVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_ConsumeInputVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
