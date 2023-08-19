#pragma once
#include <cstdint>
namespace EApplicationState {
#pragma pack(push, 1)
enum Type {
    Unknown = 0,
    Inactive = 1,
    Background = 2,
    Active = 3,
    EApplicationState_MAX = 4,
};
#pragma pack(pop)
}
