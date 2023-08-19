#pragma once
#include <cstdint>
namespace EMaterialSceneAttributeInputMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Coordinates = 0,
    OffsetFraction = 1,
    EMaterialSceneAttributeInputMode_MAX = 2,
};
#pragma pack(pop)
}
