#pragma once
#include <cstdint>
namespace EFacingTargetMode {
#pragma pack(push, 1)
enum Type {
    None = 0,
    TargetLocation = 1,
    TargetActor = 2,
    CameraDirection = 3,
    EFacingTargetMode_MAX = 4,
};
#pragma pack(pop)
}
