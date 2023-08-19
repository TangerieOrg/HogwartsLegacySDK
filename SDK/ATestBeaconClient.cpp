#include "AOnlineBeaconClient.hpp"
#include "ATestBeaconClient.hpp"
#include "UFunction.hpp"
ATestBeaconClient* ATestBeaconClient::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.TestBeaconClient");
    return (ATestBeaconClient*)res;
}
void ATestBeaconClient::ServerPong() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong"));
    struct Params_ServerPong {
    }; // Size: 0x0
    Params_ServerPong params{};
    ProcessEvent(func, &params);
}
void ATestBeaconClient::ClientPing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing"));
    struct Params_ClientPing {
    }; // Size: 0x0
    Params_ClientPing params{};
    ProcessEvent(func, &params);
}
