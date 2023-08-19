#include "AOnlineBeaconClient.hpp"
#include "ASpectatorBeaconClient.hpp"
#include "ESpectatorClientRequestType.hpp"
#include "ESpectatorReservationResult\Type.hpp"
#include "FSpectatorReservation.hpp"
#include "FUniqueNetIdRepl.hpp"
#include "UFunction.hpp"
void ASpectatorBeaconClient::ClientCancelReservationResponse(ESpectatorReservationResult::Type ReservationResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse"));
    struct Params_ClientCancelReservationResponse {
        ESpectatorReservationResult::Type ReservationResponse; // 0x0
    }; // Size: 0x1
    Params_ClientCancelReservationResponse params{};
    params.ReservationResponse = (ESpectatorReservationResult::Type)ReservationResponse;
    ProcessEvent(func, &params);
}
ASpectatorBeaconClient* ASpectatorBeaconClient::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient");
    return (ASpectatorBeaconClient*)res;
}
void ASpectatorBeaconClient::ServerReservationRequest(FString SessionId, FSpectatorReservation& Reservation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest"));
    struct Params_ServerReservationRequest {
        FString SessionId; // 0x0
        FSpectatorReservation Reservation; // 0x10
    }; // Size: 0x88
    Params_ServerReservationRequest params{};
    params.SessionId = (FString)SessionId;
    params.Reservation = (FSpectatorReservation)Reservation;
    ProcessEvent(func, &params);
    Reservation = params.Reservation;
}
void ASpectatorBeaconClient::ServerCancelReservationRequest(FUniqueNetIdRepl& Spectator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest"));
    struct Params_ServerCancelReservationRequest {
        FUniqueNetIdRepl Spectator; // 0x0
    }; // Size: 0x28
    Params_ServerCancelReservationRequest params{};
    params.Spectator = (FUniqueNetIdRepl)Spectator;
    ProcessEvent(func, &params);
    Spectator = params.Spectator;
}
void ASpectatorBeaconClient::ClientReservationResponse(ESpectatorReservationResult::Type ReservationResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse"));
    struct Params_ClientReservationResponse {
        ESpectatorReservationResult::Type ReservationResponse; // 0x0
    }; // Size: 0x1
    Params_ClientReservationResponse params{};
    params.ReservationResponse = (ESpectatorReservationResult::Type)ReservationResponse;
    ProcessEvent(func, &params);
}
void ASpectatorBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates"));
    struct Params_ClientSendReservationUpdates {
        int32_t NumRemainingReservations; // 0x0
    }; // Size: 0x4
    Params_ClientSendReservationUpdates params{};
    params.NumRemainingReservations = (int32_t)NumRemainingReservations;
    ProcessEvent(func, &params);
}
void ASpectatorBeaconClient::ClientSendReservationFull() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull"));
    struct Params_ClientSendReservationFull {
    }; // Size: 0x0
    Params_ClientSendReservationFull params{};
    ProcessEvent(func, &params);
}
