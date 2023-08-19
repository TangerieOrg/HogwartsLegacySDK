#pragma once
#include <cstdint>
namespace EDrawDebugItemType {
#pragma pack(push, 1)
enum Type : uint8_t {
    DirectionalArrow = 0,
    Sphere = 1,
    Line = 2,
    OnScreenMessage = 3,
    CoordinateSystem = 4,
    EDrawDebugItemType_MAX = 5,
};
#pragma pack(pop)
}
