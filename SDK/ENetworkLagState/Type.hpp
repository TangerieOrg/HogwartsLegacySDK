#pragma once
#include <cstdint>
namespace ENetworkLagState {
#pragma pack(push, 1)
enum Type {
    NotLagging = 0,
    Lagging = 1,
    ENetworkLagState_MAX = 2,
};
#pragma pack(pop)
}
