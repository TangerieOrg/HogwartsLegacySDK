#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_RenderSettings : public USceneRigActionState {
public:
    char pad_50[0x10];
    FPostProcessSettings EnginePostProcessSettings; // 0x60
    float InsertedPriortiy; // 0x650
    float CurrentBlend; // 0x654
    char pad_658[0x8];
    static USceneActionState_RenderSettings* StaticClass();
}; // Size: 0x660
#pragma pack(pop)
