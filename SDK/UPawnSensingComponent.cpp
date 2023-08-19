#include "APawn.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UPawnSensingComponent.hpp"
void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnSensingComponent.SetSensingInterval"));
    struct Params_SetSensingInterval {
        float NewSensingInterval; // 0x0
    }; // Size: 0x4
    Params_SetSensingInterval params{};
    params.NewSensingInterval = (float)NewSensingInterval;
    ProcessEvent(func, &params);
}
UPawnSensingComponent* UPawnSensingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.PawnSensingComponent");
    return (UPawnSensingComponent*)res;
}
void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled"));
    struct Params_SetSensingUpdatesEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetSensingUpdatesEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
float UPawnSensingComponent::GetPeripheralVisionAngle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle"));
    struct Params_GetPeripheralVisionAngle {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPeripheralVisionAngle params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle"));
    struct Params_SetPeripheralVisionAngle {
        float NewPeripheralVisionAngle; // 0x0
    }; // Size: 0x4
    Params_SetPeripheralVisionAngle params{};
    params.NewPeripheralVisionAngle = (float)NewPeripheralVisionAngle;
    ProcessEvent(func, &params);
}
float UPawnSensingComponent::GetPeripheralVisionCosine() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine"));
    struct Params_GetPeripheralVisionCosine {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPeripheralVisionCosine params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(APawn* Pawn) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature"));
    struct Params_SeePawnDelegate__DelegateSignature {
        APawn* Pawn; // 0x0
    }; // Size: 0x8
    Params_SeePawnDelegate__DelegateSignature params{};
    params.Pawn = (APawn*)Pawn;
    ProcessEvent(func, &params);
}
void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector& Location, float Volume) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature"));
    struct Params_HearNoiseDelegate__DelegateSignature {
        APawn* Instigator; // 0x0
        FVector Location; // 0x8
        float Volume; // 0x14
    }; // Size: 0x18
    Params_HearNoiseDelegate__DelegateSignature params{};
    params.Instigator = (APawn*)Instigator;
    params.Location = (FVector)Location;
    params.Volume = (float)Volume;
    ProcessEvent(func, &params);
    Location = params.Location;
}
