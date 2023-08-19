#include "FVector.hpp"
#include "UFireInterface.hpp"
#include "UFunction.hpp"
#include "UIncendioComponent.hpp"
#include "UInterface.hpp"
void UFireInterface::OnFireExtinguished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.OnFireExtinguished"));
    struct Params_OnFireExtinguished {
    }; // Size: 0x0
    Params_OnFireExtinguished params{};
    ProcessEvent(func, &params);
}
UFireInterface* UFireInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FireInterface");
    return (UFireInterface*)res;
}
void UFireInterface::OnCaughtFire(UIncendioComponent* IncendioComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.OnCaughtFire"));
    struct Params_OnCaughtFire {
        UIncendioComponent* IncendioComponent; // 0x0
    }; // Size: 0x8
    Params_OnCaughtFire params{};
    params.IncendioComponent = (UIncendioComponent*)IncendioComponent;
    ProcessEvent(func, &params);
}
bool UFireInterface::StartFire(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.StartFire"));
    struct Params_StartFire {
        float Amount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StartFire params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFireInterface::OnFailedToLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.OnFailedToLight"));
    struct Params_OnFailedToLight {
    }; // Size: 0x0
    Params_OnFailedToLight params{};
    ProcessEvent(func, &params);
}
void UFireInterface::OnCompletelyCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.OnCompletelyCharred"));
    struct Params_OnCompletelyCharred {
    }; // Size: 0x0
    Params_OnCompletelyCharred params{};
    ProcessEvent(func, &params);
}
void UFireInterface::OnAttemptToSetOnFire(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.OnAttemptToSetOnFire"));
    struct Params_OnAttemptToSetOnFire {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_OnAttemptToSetOnFire params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
bool UFireInterface::IsPointOnFire(FVector Point, bool& OnFire) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.IsPointOnFire"));
    struct Params_IsPointOnFire {
        FVector Point; // 0x0
        bool OnFire; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_IsPointOnFire params{};
    params.Point = (FVector)Point;
    params.OnFire = (bool)OnFire;
    ProcessEvent(func, &params);
    OnFire = params.OnFire;
    return (bool)params.ReturnValue;
}
bool UFireInterface::IncreaseFire(float increaseAmount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.IncreaseFire"));
    struct Params_IncreaseFire {
        float increaseAmount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IncreaseFire params{};
    params.increaseAmount = (float)increaseAmount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFireInterface::DecreaseFire(float decreaseAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FireInterface.DecreaseFire"));
    struct Params_DecreaseFire {
        float decreaseAmount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DecreaseFire params{};
    params.decreaseAmount = (float)decreaseAmount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
