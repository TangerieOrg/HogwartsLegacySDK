#include "AOnlineBeaconClient.hpp"
#include "APartyBeaconClient.hpp"
#include "EClientRequestType.hpp"
#include "EPartyReservationResult\Type.hpp"
#include "FPartyReservation.hpp"
#include "FUniqueNetIdRepl.hpp"
#include "UFunction.hpp"
APartyBeaconClient* APartyBeaconClient::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.PartyBeaconClient");
    return (APartyBeaconClient*)res;
}
void APartyBeaconClient::ServerUpdateReservationRequest(FString SessionId, FPartyReservation& ReservationUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest"));
    struct Params_ServerUpdateReservationRequest {
        FString SessionId; // 0x0
        FPartyReservation ReservationUpdate; // 0x10
    }; // Size: 0x60
    Params_ServerUpdateReservationRequest params{};
    params.SessionId = (FString)SessionId;
    params.ReservationUpdate = (FPartyReservation)ReservationUpdate;
    ProcessEvent(func, &params);
    ReservationUpdate = params.ReservationUpdate;
}
void APartyBeaconClient::ServerReservationRequest(FString SessionId, FPartyReservation& Reservation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest"));
    struct Params_ServerReservationRequest {
        FString SessionId; // 0x0
        FPartyReservation Reservation; // 0x10
    }; // Size: 0x60
    Params_ServerReservationRequest params{};
    params.SessionId = (FString)SessionId;
    params.Reservation = (FPartyReservation)Reservation;
    ProcessEvent(func, &params);
    Reservation = params.Reservation;
}
void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation& ReservationUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest"));
    struct Params_ServerRemoveMemberFromReservationRequest {
        FString SessionId; // 0x0
        FPartyReservation ReservationUpdate; // 0x10
    }; // Size: 0x60
    Params_ServerRemoveMemberFromReservationRequest params{};
    params.SessionId = (FString)SessionId;
    params.ReservationUpdate = (FPartyReservation)ReservationUpdate;
    ProcessEvent(func, &params);
    ReservationUpdate = params.ReservationUpdate;
}
void APartyBeaconClient::ServerCancelReservationRequest(FUniqueNetIdRepl& PartyLeader) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest"));
    struct Params_ServerCancelReservationRequest {
        FUniqueNetIdRepl PartyLeader; // 0x0
    }; // Size: 0x28
    Params_ServerCancelReservationRequest params{};
    params.PartyLeader = (FUniqueNetIdRepl)PartyLeader;
    ProcessEvent(func, &params);
    PartyLeader = params.PartyLeader;
}
void APartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates"));
    struct Params_ClientSendReservationUpdates {
        int32_t NumRemainingReservations; // 0x0
    }; // Size: 0x4
    Params_ClientSendReservationUpdates params{};
    params.NumRemainingReservations = (int32_t)NumRemainingReservations;
    ProcessEvent(func, &params);
}
void APartyBeaconClient::ClientSendReservationFull() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull"));
    struct Params_ClientSendReservationFull {
    }; // Size: 0x0
    Params_ClientSendReservationFull params{};
    ProcessEvent(func, &params);
}
void APartyBeaconClient::ServerAddOrUpdateReservationRequest(FString SessionId, FPartyReservation& Reservation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest"));
    struct Params_ServerAddOrUpdateReservationRequest {
        FString SessionId; // 0x0
        FPartyReservation Reservation; // 0x10
    }; // Size: 0x60
    Params_ServerAddOrUpdateReservationRequest params{};
    params.SessionId = (FString)SessionId;
    params.Reservation = (FPartyReservation)Reservation;
    ProcessEvent(func, &params);
    Reservation = params.Reservation;
}
void APartyBeaconClient::ClientReservationResponse(EPartyReservationResult::Type ReservationResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse"));
    struct Params_ClientReservationResponse {
        EPartyReservationResult::Type ReservationResponse; // 0x0
    }; // Size: 0x1
    Params_ClientReservationResponse params{};
    params.ReservationResponse = (EPartyReservationResult::Type)ReservationResponse;
    ProcessEvent(func, &params);
}
void APartyBeaconClient::ClientCancelReservationResponse(EPartyReservationResult::Type ReservationResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse"));
    struct Params_ClientCancelReservationResponse {
        EPartyReservationResult::Type ReservationResponse; // 0x0
    }; // Size: 0x1
    Params_ClientCancelReservationResponse params{};
    params.ReservationResponse = (EPartyReservationResult::Type)ReservationResponse;
    ProcessEvent(func, &params);
}
