#pragma once
#include <cstdint>
#include "ETargetSpeedMode\Type.hpp"
#include "UAIPerformTaskBase.hpp"
#pragma pack(push, 1)
class UPerformTaskSetPlayerSpeedMode : public UAIPerformTaskBase {
public:
    float revertRadius; // 0xe0
    char pad_e4[0x1c];
    static UPerformTaskSetPlayerSpeedMode* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
