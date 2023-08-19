#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_RenderSettingsViewpoint : public USceneRigActionBase {
public:
    float PostProcessingViewpoint; // 0x88
    float SmoothChangeTimePercent; // 0x8c
    static USceneAction_RenderSettingsViewpoint* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
