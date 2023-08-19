#pragma once
#include <cstdint>
namespace EKinematicBonesUpdateToPhysics {
#pragma pack(push, 1)
enum Type : uint8_t {
    SkipSimulatingBones = 0,
    SkipAllBones = 1,
    EKinematicBonesUpdateToPhysics_MAX = 2,
};
#pragma pack(pop)
}
