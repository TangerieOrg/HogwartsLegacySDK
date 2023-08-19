#pragma once
#include <cstdint>
namespace ESlateBrushDrawType {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoDrawType = 0,
    Box = 1,
    Border = 2,
    Image = 3,
    ESlateBrushDrawType_MAX = 4,
};
#pragma pack(pop)
}
