#pragma once
#include <cstdint>
namespace EEndPlayReason {
#pragma pack(push, 1)
enum Type : uint8_t {
    Destroyed = 0,
    LevelTransition = 1,
    EndPlayInEditor = 2,
    RemovedFromWorld = 3,
    Quit = 4,
    EEndPlayReason_MAX = 5,
};
#pragma pack(pop)
}
