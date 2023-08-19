#pragma once
#include <cstdint>
namespace EStationMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    FullBody = 0,
    PartialBody = 1,
    EStationMode_MAX = 2,
};
#pragma pack(pop)
}
