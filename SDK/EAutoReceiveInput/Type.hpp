#pragma once
#include <cstdint>
namespace EAutoReceiveInput {
#pragma pack(push, 1)
enum Type : uint8_t {
    Disabled = 0,
    Player0 = 1,
    Player1 = 2,
    Player2 = 3,
    Player3 = 4,
    Player4 = 5,
    Player5 = 6,
    Player6 = 7,
    Player7 = 8,
    EAutoReceiveInput_MAX = 9,
};
#pragma pack(pop)
}
