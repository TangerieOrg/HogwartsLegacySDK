#pragma once
#include <cstdint>
#include "AOnlineBeaconClient.hpp"
#include "EClientRequestType.hpp"
#include "EPartyReservationResult\Type.hpp"
#include "FPartyReservation.hpp"
struct FUniqueNetIdRepl;
#pragma pack(push, 1)
class APartyBeaconClient : public AOnlineBeaconClient {
public:
    char pad_2d8[0x30];
    FString DestSessionId; // 0x308
    FPartyReservation PendingReservation; // 0x318
    EClientRequestType RequestType; // 0x368
    bool bPendingReservationSent; // 0x369
    bool bCancelReservation; // 0x36a
    char pad_36b[0x2d];
    static APartyBeaconClient* StaticClass();
    void ServerUpdateReservationRequest(FString SessionId, FPartyReservation& ReservationUpdate);
    void ServerReservationRequest(FString SessionId, FPartyReservation& Reservation);
    void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation& ReservationUpdate);
    void ServerCancelReservationRequest(FUniqueNetIdRepl& PartyLeader);
    void ServerAddOrUpdateReservationRequest(FString SessionId, FPartyReservation& Reservation);
    void ClientSendReservationUpdates(int32_t NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(EPartyReservationResult::Type ReservationResponse);
    void ClientCancelReservationResponse(EPartyReservationResult::Type ReservationResponse);
}; // Size: 0x398
#pragma pack(pop)
