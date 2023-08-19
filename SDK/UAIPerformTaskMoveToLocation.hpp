#pragma once
#include <cstdint>
#include "EPerformTaskSpeedMode.hpp"
#include "UAIPerformTaskBase.hpp"
#pragma pack(push, 1)
class UAIPerformTaskMoveToLocation : public UAIPerformTaskBase {
public:
    static UAIPerformTaskMoveToLocation* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
