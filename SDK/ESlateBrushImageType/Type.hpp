#pragma once
#include <cstdint>
namespace ESlateBrushImageType {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoImage = 0,
    FullColor = 1,
    Linear = 2,
    ESlateBrushImageType_MAX = 3,
};
#pragma pack(pop)
}
