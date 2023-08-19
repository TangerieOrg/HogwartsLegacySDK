#pragma once
#include <cstdint>
#include "AWaterVolume.hpp"
#pragma pack(push, 1)
class ABP_WaterVolume_C : public AWaterVolume {
public:
    static ABP_WaterVolume_C* StaticClass();
    void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x4c8
#pragma pack(pop)
