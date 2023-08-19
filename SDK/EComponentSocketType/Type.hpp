#pragma once
#include <cstdint>
namespace EComponentSocketType {
#pragma pack(push, 1)
enum Type {
    Invalid = 0,
    Bone = 1,
    Socket = 2,
    EComponentSocketType_MAX = 3,
};
#pragma pack(pop)
}
