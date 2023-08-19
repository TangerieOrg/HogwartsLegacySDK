#pragma once
#include <cstdint>
namespace EMovieScenePlayerStatus {
#pragma pack(push, 1)
enum Type : uint8_t {
    Stopped = 0,
    Playing = 1,
    Scrubbing = 2,
    Jumping = 3,
    Stepping = 4,
    Paused = 5,
    MAX = 6,
};
#pragma pack(pop)
}
