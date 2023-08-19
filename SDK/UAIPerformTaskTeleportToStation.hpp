#pragma once
#include <cstdint>
#include "UAIPerformTaskMoveToStation.hpp"
#pragma pack(push, 1)
class UAIPerformTaskTeleportToStation : public UAIPerformTaskMoveToStation {
public:
    static UAIPerformTaskTeleportToStation* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
