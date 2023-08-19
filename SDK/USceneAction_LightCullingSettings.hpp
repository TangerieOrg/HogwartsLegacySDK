#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class ULightCullingSettings;
#pragma pack(push, 1)
class USceneAction_LightCullingSettings : public USceneRigActionBase {
public:
    ULightCullingSettings* Settings; // 0x88
    static USceneAction_LightCullingSettings* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
