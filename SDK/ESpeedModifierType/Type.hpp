#pragma once
#include <cstdint>
namespace ESpeedModifierType {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    SprintFromButton = 1,
    SprintFromKeyboard = 2,
    ESpeedModifierType_MAX = 3,
};
#pragma pack(pop)
}
