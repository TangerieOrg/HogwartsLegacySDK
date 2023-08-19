#pragma once
#include <cstdint>
namespace ERootMotionModTurnAssistMethod {
#pragma pack(push, 1)
enum Type : uint8_t {
    UseCurve = 0,
    UseCustomInterp = 1,
    UseDampedSpring = 2,
    ERootMotionModTurnAssistMethod_MAX = 3,
};
#pragma pack(pop)
}
