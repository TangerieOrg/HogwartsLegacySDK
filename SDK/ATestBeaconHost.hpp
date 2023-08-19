#pragma once
#include <cstdint>
#include "AOnlineBeaconHostObject.hpp"
#pragma pack(push, 1)
class ATestBeaconHost : public AOnlineBeaconHostObject {
public:
    static ATestBeaconHost* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
