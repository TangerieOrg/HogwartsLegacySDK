#pragma once
#include <cstdint>
namespace EAttachLocation {
#pragma pack(push, 1)
enum Type : uint8_t {
    KeepRelativeOffset = 0,
    KeepWorldPosition = 1,
    SnapToTarget = 2,
    SnapToTargetIncludingScale = 3,
    EAttachLocation_MAX = 4,
};
#pragma pack(pop)
}
