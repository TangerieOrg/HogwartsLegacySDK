#include "AOnlineBeacon.hpp"
#include "AOnlineBeaconClient.hpp"
#include "AOnlineBeaconHostObject.hpp"
#include "EBeaconConnectionState.hpp"
#include "UFunction.hpp"
#include "UNetConnection.hpp"
AOnlineBeaconClient* AOnlineBeaconClient::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.OnlineBeaconClient");
    return (AOnlineBeaconClient*)res;
}
void AOnlineBeaconClient::ClientOnConnected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected"));
    struct Params_ClientOnConnected {
    }; // Size: 0x0
    Params_ClientOnConnected params{};
    ProcessEvent(func, &params);
}
