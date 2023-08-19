#pragma once
#include <cstdint>
namespace ESocialCallOutDisplayMode {
#pragma pack(push, 1)
enum Type {
    None = 0,
    Name = 1,
    Stations = 2,
    SocialCapital = 3,
    Schedule = 4,
    All = 5,
    Travel = 6,
    ESocialCallOutDisplayMode_MAX = 7,
};
#pragma pack(pop)
}
