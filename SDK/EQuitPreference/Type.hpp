#pragma once
#include <cstdint>
namespace EQuitPreference {
#pragma pack(push, 1)
enum Type : uint8_t {
    Quit = 0,
    Background = 1,
    EQuitPreference_MAX = 2,
};
#pragma pack(pop)
}
