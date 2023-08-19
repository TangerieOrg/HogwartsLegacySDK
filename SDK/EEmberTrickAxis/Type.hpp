#pragma once
#include <cstdint>
namespace EEmberTrickAxis {
#pragma pack(push, 1)
enum Type : uint8_t {
    XAxis = 0,
    YAxis = 1,
    ZAxis = 2,
    EEmberTrickAxis_MAX = 3,
};
#pragma pack(pop)
}
