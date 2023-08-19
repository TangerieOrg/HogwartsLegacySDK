#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARJointTransformSpace : uint8_t {
    Model = 0,
    ParentJoint = 1,
    EARJointTransformSpace_MAX = 2,
};
#pragma pack(pop)
