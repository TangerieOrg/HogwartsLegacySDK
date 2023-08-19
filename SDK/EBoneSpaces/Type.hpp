#pragma once
#include <cstdint>
namespace EBoneSpaces {
#pragma pack(push, 1)
enum Type : uint8_t {
    WorldSpace = 0,
    ComponentSpace = 1,
    EBoneSpaces_MAX = 2,
};
#pragma pack(pop)
}
