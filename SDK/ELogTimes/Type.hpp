#pragma once
#include <cstdint>
namespace ELogTimes {
#pragma pack(push, 1)
enum Type {
    None = 0,
    UTC = 1,
    SinceGStartTime = 2,
    Local = 3,
    ELogTimes_MAX = 4,
};
#pragma pack(pop)
}
