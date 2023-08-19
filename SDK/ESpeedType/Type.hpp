#pragma once
#include <cstdint>
namespace ESpeedType {
#pragma pack(push, 1)
enum Type : uint8_t {
    DesiredSpeed = 0,
    AverageSpeed = 1,
    ActualSpeed = 2,
    LastDesiredSpeed = 3,
    BufferedDesiredSpeed = 4,
    ESpeedType_MAX = 5,
};
#pragma pack(pop)
}
