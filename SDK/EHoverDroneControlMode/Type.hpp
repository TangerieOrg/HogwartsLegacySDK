#pragma once
#include <cstdint>
namespace EHoverDroneControlMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Player = 0,
    HoverDrone = 1,
    FollowCam = 2,
    MAX = 3,
};
#pragma pack(pop)
}
