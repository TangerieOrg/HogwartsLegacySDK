#pragma once
#include <cstdint>
namespace ESettingsLockedAxis {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    Invalid = 4,
    ESettingsLockedAxis_MAX = 5,
};
#pragma pack(pop)
}
