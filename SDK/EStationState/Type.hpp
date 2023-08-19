#pragma once
#include <cstdint>
namespace EStationState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    EnterStation = 1,
    InStation = 2,
    ExitStation = 3,
    EStationState_MAX = 4,
};
#pragma pack(pop)
}
