#include "APlayerController.hpp"
#include "FMastermindCommandResult.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMastermindActorComponent.hpp"
UMastermindActorComponent* UMastermindActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Mastermind.MastermindActorComponent");
    return (UMastermindActorComponent*)res;
}
FMastermindCommandResult UMastermindActorComponent::TeleportPlayerPawn(float InX, float InY, float InZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.TeleportPlayerPawn"));
    struct Params_TeleportPlayerPawn {
        float InX; // 0x0
        float InY; // 0x4
        float InZ; // 0x8
        char pad_c[0x4];
        FMastermindCommandResult ReturnValue; // 0x10
    }; // Size: 0x50
    Params_TeleportPlayerPawn params{};
    params.InX = (float)InX;
    params.InY = (float)InY;
    params.InZ = (float)InZ;
    ProcessEvent(func, &params);
    return (FMastermindCommandResult)params.ReturnValue;
}
void UMastermindActorComponent::QALookInDirection(float InPitch, float InYaw, float InRoll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.QALookInDirection"));
    struct Params_QALookInDirection {
        float InPitch; // 0x0
        float InYaw; // 0x4
        float InRoll; // 0x8
    }; // Size: 0xc
    Params_QALookInDirection params{};
    params.InPitch = (float)InPitch;
    params.InYaw = (float)InYaw;
    params.InRoll = (float)InRoll;
    ProcessEvent(func, &params);
}
void UMastermindActorComponent::ServerTeleport(float InX, float InY, float InZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.ServerTeleport"));
    struct Params_ServerTeleport {
        float InX; // 0x0
        float InY; // 0x4
        float InZ; // 0x8
    }; // Size: 0xc
    Params_ServerTeleport params{};
    params.InX = (float)InX;
    params.InY = (float)InY;
    params.InZ = (float)InZ;
    ProcessEvent(func, &params);
}
void UMastermindActorComponent::ServerLookInDirection(float InPitch, float InYaw, float InRoll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.ServerLookInDirection"));
    struct Params_ServerLookInDirection {
        float InPitch; // 0x0
        float InYaw; // 0x4
        float InRoll; // 0x8
    }; // Size: 0xc
    Params_ServerLookInDirection params{};
    params.InPitch = (float)InPitch;
    params.InYaw = (float)InYaw;
    params.InRoll = (float)InRoll;
    ProcessEvent(func, &params);
}
void UMastermindActorComponent::SendMastermindMessage(FMastermindCommandResult& InMastermindMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.SendMastermindMessage"));
    struct Params_SendMastermindMessage {
        FMastermindCommandResult InMastermindMessage; // 0x0
    }; // Size: 0x40
    Params_SendMastermindMessage params{};
    params.InMastermindMessage = (FMastermindCommandResult)InMastermindMessage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMastermindMessage = params.InMastermindMessage;
}
FMastermindCommandResult UMastermindActorComponent::NativeTeleportPlayerPawn(float InX, float InY, float InZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.NativeTeleportPlayerPawn"));
    struct Params_NativeTeleportPlayerPawn {
        float InX; // 0x0
        float InY; // 0x4
        float InZ; // 0x8
        char pad_c[0x4];
        FMastermindCommandResult ReturnValue; // 0x10
    }; // Size: 0x50
    Params_NativeTeleportPlayerPawn params{};
    params.InX = (float)InX;
    params.InY = (float)InY;
    params.InZ = (float)InZ;
    ProcessEvent(func, &params);
    return (FMastermindCommandResult)params.ReturnValue;
}
void UMastermindActorComponent::QATeleport(float InX, float InY, float InZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.QATeleport"));
    struct Params_QATeleport {
        float InX; // 0x0
        float InY; // 0x4
        float InZ; // 0x8
    }; // Size: 0xc
    Params_QATeleport params{};
    params.InX = (float)InX;
    params.InY = (float)InY;
    params.InZ = (float)InZ;
    ProcessEvent(func, &params);
}
FMastermindCommandResult UMastermindActorComponent::NativeLookInDirection(float InPitch, float InYaw, float InRoll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.NativeLookInDirection"));
    struct Params_NativeLookInDirection {
        float InPitch; // 0x0
        float InYaw; // 0x4
        float InRoll; // 0x8
        char pad_c[0x4];
        FMastermindCommandResult ReturnValue; // 0x10
    }; // Size: 0x50
    Params_NativeLookInDirection params{};
    params.InPitch = (float)InPitch;
    params.InYaw = (float)InYaw;
    params.InRoll = (float)InRoll;
    ProcessEvent(func, &params);
    return (FMastermindCommandResult)params.ReturnValue;
}
FMastermindCommandResult UMastermindActorComponent::LookInDirection(float InPitch, float InYaw, float InRoll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.LookInDirection"));
    struct Params_LookInDirection {
        float InPitch; // 0x0
        float InYaw; // 0x4
        float InRoll; // 0x8
        char pad_c[0x4];
        FMastermindCommandResult ReturnValue; // 0x10
    }; // Size: 0x50
    Params_LookInDirection params{};
    params.InPitch = (float)InPitch;
    params.InYaw = (float)InYaw;
    params.InRoll = (float)InRoll;
    ProcessEvent(func, &params);
    return (FMastermindCommandResult)params.ReturnValue;
}
APlayerController* UMastermindActorComponent::GetOwniningPlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.GetOwniningPlayerController"));
    struct Params_GetOwniningPlayerController {
        APlayerController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwniningPlayerController params{};
    ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
void UMastermindActorComponent::ClientSendMastermindMessage(FMastermindCommandResult& InMastermindMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mastermind.MastermindActorComponent.ClientSendMastermindMessage"));
    struct Params_ClientSendMastermindMessage {
        FMastermindCommandResult InMastermindMessage; // 0x0
    }; // Size: 0x40
    Params_ClientSendMastermindMessage params{};
    params.InMastermindMessage = (FMastermindCommandResult)InMastermindMessage;
    ProcessEvent(func, &params);
    InMastermindMessage = params.InMastermindMessage;
}
