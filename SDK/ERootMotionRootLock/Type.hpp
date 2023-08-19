#pragma once
#include <cstdint>
namespace ERootMotionRootLock {
#pragma pack(push, 1)
enum Type : uint8_t {
    RefPose = 0,
    AnimFirstFrame = 1,
    Zero = 2,
    ERootMotionRootLock_MAX = 3,
};
#pragma pack(pop)
}
