#pragma once
#include <cstdint>
namespace ESlateBrushMirrorType {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoMirror = 0,
    Horizontal = 1,
    Vertical = 2,
    Both = 3,
    ESlateBrushMirrorType_MAX = 4,
};
#pragma pack(pop)
}
