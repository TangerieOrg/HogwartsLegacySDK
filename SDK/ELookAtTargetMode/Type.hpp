#pragma once
#include <cstdint>
namespace ELookAtTargetMode {
#pragma pack(push, 1)
enum Type {
    None = 0,
    TargetLocation = 1,
    TargetActor = 2,
    CameraDirection = 3,
    ELookAtTargetMode_MAX = 4,
};
#pragma pack(pop)
}
