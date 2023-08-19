#pragma once
#include <cstdint>
namespace ENavAreaFlag {
#pragma pack(push, 1)
enum Type {
    Default = 0,
    Jump = 1,
    Vertical = 2,
    Fall = 3,
    ENavAreaFlag_MAX = 4,
};
#pragma pack(pop)
}
