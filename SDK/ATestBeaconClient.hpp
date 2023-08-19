#pragma once
#include <cstdint>
#include "AOnlineBeaconClient.hpp"
#pragma pack(push, 1)
class ATestBeaconClient : public AOnlineBeaconClient {
public:
    static ATestBeaconClient* StaticClass();
    void ServerPong();
    void ClientPing();
}; // Size: 0x2d8
#pragma pack(pop)
