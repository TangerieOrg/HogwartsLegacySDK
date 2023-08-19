#pragma once
#include <cstdint>
namespace EMoveComponentAction {
#pragma pack(push, 1)
enum Type : uint8_t {
    Move = 0,
    Stop = 1,
    Return = 2,
    EMoveComponentAction_MAX = 3,
};
#pragma pack(pop)
}
