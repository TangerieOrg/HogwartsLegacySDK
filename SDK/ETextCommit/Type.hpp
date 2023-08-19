#pragma once
#include <cstdint>
namespace ETextCommit {
#pragma pack(push, 1)
enum Type : uint8_t {
    Default = 0,
    OnEnter = 1,
    OnUserMovedFocus = 2,
    OnCleared = 3,
    ETextCommit_MAX = 4,
};
#pragma pack(pop)
}
