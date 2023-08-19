#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERemoteControlHttpVerbs : uint16_t {
    None = 0,
    Get = 1,
    Post = 2,
    Put = 4,
    Patch = 8,
    Delete = 16,
    Options = 32,
    ERemoteControlHttpVerbs_MAX = 33,
};
#pragma pack(pop)
