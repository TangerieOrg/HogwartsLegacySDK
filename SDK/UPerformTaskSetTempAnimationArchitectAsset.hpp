#pragma once
#include <cstdint>
#include "EPerformTaskSetting.hpp"
#include "UAIPerformTaskBase.hpp"
class UAnimationArchitectAsset;
#pragma pack(push, 1)
class UPerformTaskSetTempAnimationArchitectAsset : public UAIPerformTaskBase {
public:
    EPerformTaskSetting CurrentTaskSetting; // 0xe0
    char pad_e1[0xf];
    static UPerformTaskSetTempAnimationArchitectAsset* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
