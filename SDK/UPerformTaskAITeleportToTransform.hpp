#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
class ATargetPoint;
#pragma pack(push, 1)
class UPerformTaskAITeleportToTransform : public UAIPerformTaskBase {
public:
    static UPerformTaskAITeleportToTransform* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
