#pragma once
#include <cstdint>
namespace EWandComboType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Light = 0,
    Heavy = 1,
    LightOrCasual = 2,
    EWandComboType_MAX = 3,
};
#pragma pack(pop)
}
