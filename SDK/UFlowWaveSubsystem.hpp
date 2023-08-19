#pragma once
#include <cstdint>
#include "UWorldSubsystem.hpp"
class ULakeComponent;
class UFlowWaveSystemSettings;
class UTextureRenderTarget2DArray;
#pragma pack(push, 1)
class UFlowWaveSubsystem : public UWorldSubsystem {
public:
    TArray<ULakeComponent*> RegisteredLakes; // 0x30
    UTextureRenderTarget2DArray* RenderTargetResourcesWaveDisps; // 0x40
    UTextureRenderTarget2DArray* RenderTargetResourceWaveFoam; // 0x48
    char pad_50[0x8];
    UFlowWaveSystemSettings* Settings; // 0x58
    char pad_60[0x10];
    static UFlowWaveSubsystem* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
