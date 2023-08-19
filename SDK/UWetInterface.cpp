#include "AActor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UWetInterface.hpp"
UWetInterface* UWetInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WetInterface");
    return (UWetInterface*)res;
}
bool UWetInterface::StartWetness(AActor* Instigator, float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WetInterface.StartWetness"));
    struct Params_StartWetness {
        AActor* Instigator; // 0x0
        float Amount; // 0x8
        FVector Location; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_StartWetness params{};
    params.Instigator = (AActor*)Instigator;
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWetInterface::OnFailedToWet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WetInterface.OnFailedToWet"));
    struct Params_OnFailedToWet {
    }; // Size: 0x0
    Params_OnFailedToWet params{};
    ProcessEvent(func, &params);
}
void UWetInterface::OnDecreaseWetness(float decreaseAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WetInterface.OnDecreaseWetness"));
    struct Params_OnDecreaseWetness {
        float decreaseAmount; // 0x0
    }; // Size: 0x4
    Params_OnDecreaseWetness params{};
    params.decreaseAmount = (float)decreaseAmount;
    ProcessEvent(func, &params);
}
void UWetInterface::OnDry(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WetInterface.OnDry"));
    struct Params_OnDry {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnDry params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UWetInterface::OnAttemptToApplyWetness(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WetInterface.OnAttemptToApplyWetness"));
    struct Params_OnAttemptToApplyWetness {
        float Amount; // 0x0
        FVector Location; // 0x4
    }; // Size: 0x10
    Params_OnAttemptToApplyWetness params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
bool UWetInterface::IncreaseWetness(AActor* Instigator, float increaseAmount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WetInterface.IncreaseWetness"));
    struct Params_IncreaseWetness {
        AActor* Instigator; // 0x0
        float increaseAmount; // 0x8
        FVector Location; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IncreaseWetness params{};
    params.Instigator = (AActor*)Instigator;
    params.increaseAmount = (float)increaseAmount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
