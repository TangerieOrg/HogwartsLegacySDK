#pragma once
#include <cstdint>
#include "AOnlineBeacon.hpp"
#include "EBeaconConnectionState.hpp"
class AOnlineBeaconHostObject;
class UNetConnection;
#pragma pack(push, 1)
class AOnlineBeaconClient : public AOnlineBeacon {
public:
    AOnlineBeaconHostObject* BeaconOwner; // 0x278
    UNetConnection* BeaconConnection; // 0x280
    EBeaconConnectionState ConnectionState; // 0x288
    char pad_289[0x4f];
    static AOnlineBeaconClient* StaticClass();
    void ClientOnConnected();
}; // Size: 0x2d8
#pragma pack(pop)
