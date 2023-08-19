#pragma once
#include <cstdint>
namespace EAILockSource {
#pragma pack(push, 1)
enum Type {
    Animation = 0,
    Logic = 1,
    Script = 2,
    Gameplay = 3,
    MAX = 4,
};
#pragma pack(pop)
}
