#pragma once
#include <cstdint>
namespace EUMGSequencePlayMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Forward = 0,
    Reverse = 1,
    PingPong = 2,
    EUMGSequencePlayMode_MAX = 3,
};
#pragma pack(pop)
}
