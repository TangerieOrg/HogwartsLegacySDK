#pragma once
#include <cstdint>
#include "AOnlineBeaconClient.hpp"
#include "ESpectatorClientRequestType.hpp"
#include "ESpectatorReservationResult\Type.hpp"
#include "FSpectatorReservation.hpp"
struct FUniqueNetIdRepl;
#pragma pack(push, 1)
class ASpectatorBeaconClient : public AOnlineBeaconClient {
public:
    char pad_2d8[0x30];
    FString DestSessionId; // 0x308
    FSpectatorReservation PendingReservation; // 0x318
    ESpectatorClientRequestType RequestType; // 0x390
    bool bPendingReservationSent; // 0x391
    bool bCancelReservation; // 0x392
    char pad_393[0x2d];
    static ASpectatorBeaconClient* StaticClass();
    void ServerReservationRequest(FString SessionId, FSpectatorReservation& Reservation);
    void ServerCancelReservationRequest(FUniqueNetIdRepl& Spectator);
    void ClientSendReservationUpdates(int32_t NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(ESpectatorReservationResult::Type ReservationResponse);
    void ClientCancelReservationResponse(ESpectatorReservationResult::Type ReservationResponse);
}; // Size: 0x3c0
#pragma pack(pop)
