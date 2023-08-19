#pragma once
#include <cstdint>
namespace ERootMotModDesiredSpeed {
#pragma pack(push, 1)
enum Type : uint8_t {
    UseProvided = 0,
    GetFromAnimInstance = 1,
    ERootMotModDesiredSpeed_MAX = 2,
};
#pragma pack(pop)
}
