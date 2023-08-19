#pragma once
#include <cstdint>
#include "EChaosBufferMode.hpp"
#include "EChaosSolverTickMode.hpp"
#include "EChaosThreadingMode.hpp"
#pragma pack(push, 1)
struct FChaosPhysicsSettings {
    EChaosThreadingMode DefaultThreadingModel; // 0x0
    EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
    EChaosBufferMode DedicatedThreadBufferMode; // 0x2
}; // Size: 0x3
#pragma pack(pop)
