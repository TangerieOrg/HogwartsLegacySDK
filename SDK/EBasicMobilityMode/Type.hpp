#pragma once
#include <cstdint>
namespace EBasicMobilityMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Normal = 0,
    Crouching = 1,
    Stealth = 2,
    EBasicMobilityMode_MAX = 3,
};
#pragma pack(pop)
}
