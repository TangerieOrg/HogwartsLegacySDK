#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
class ASimpleSplineFollowerForAI;
#pragma pack(push, 1)
class UAIPerformTaskSimpleFollowSpline : public UAIPerformTaskBase {
public:
    static UAIPerformTaskSimpleFollowSpline* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
