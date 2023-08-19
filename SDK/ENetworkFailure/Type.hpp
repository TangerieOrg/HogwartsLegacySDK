#pragma once
#include <cstdint>
namespace ENetworkFailure {
#pragma pack(push, 1)
enum Type : uint8_t {
    NetDriverAlreadyExists = 0,
    NetDriverCreateFailure = 1,
    NetDriverListenFailure = 2,
    ConnectionLost = 3,
    ConnectionTimeout = 4,
    FailureReceived = 5,
    OutdatedClient = 6,
    OutdatedServer = 7,
    PendingConnectionFailure = 8,
    NetGuidMismatch = 9,
    NetChecksumMismatch = 10,
    ENetworkFailure_MAX = 11,
};
#pragma pack(pop)
}
