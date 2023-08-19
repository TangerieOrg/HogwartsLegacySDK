#pragma once
#include <cstdint>
#include "FMastermindCommandResult.hpp"
#include "UActorComponent.hpp"
class APlayerController;
#pragma pack(push, 1)
class UMastermindActorComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    static UMastermindActorComponent* StaticClass();
    FMastermindCommandResult TeleportPlayerPawn(float InX, float InY, float InZ);
    void ServerTeleport(float InX, float InY, float InZ);
    void ServerLookInDirection(float InPitch, float InYaw, float InRoll);
    static void SendMastermindMessage(FMastermindCommandResult& InMastermindMessage);
    void QATeleport(float InX, float InY, float InZ);
    void QALookInDirection(float InPitch, float InYaw, float InRoll);
    FMastermindCommandResult NativeTeleportPlayerPawn(float InX, float InY, float InZ);
    FMastermindCommandResult NativeLookInDirection(float InPitch, float InYaw, float InRoll);
    FMastermindCommandResult LookInDirection(float InPitch, float InYaw, float InRoll);
    APlayerController* GetOwniningPlayerController();
    void ClientSendMastermindMessage(FMastermindCommandResult& InMastermindMessage);
}; // Size: 0xd0
#pragma pack(pop)
