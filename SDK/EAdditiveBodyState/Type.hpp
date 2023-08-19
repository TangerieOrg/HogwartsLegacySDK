#pragma once
#include <cstdint>
namespace EAdditiveBodyState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Reacting = 1,
    EAdditiveBodyState_MAX = 2,
};
#pragma pack(pop)
}
