#pragma once
#include <cstdint>
#include "ENDISkelMesh_AdjacencyTriangleIndexFormat\Type.hpp"
#include "ENDISkelMesh_GpuMaxInfluences\Type.hpp"
#include "ENDISkelMesh_GpuUniformSamplingFormat\Type.hpp"
#include "ENiagaraDefaultRendererMotionVectorSetting.hpp"
#include "ENiagaraGpuBufferFormat.hpp"
#include "ETextureRenderTargetFormat.hpp"
#include "FSoftObjectPath.hpp"
#include "UDeveloperSettings.hpp"
class UNiagaraEffectType;
#pragma pack(push, 1)
class UNiagaraSettings : public UDeveloperSettings {
public:
    FSoftObjectPath DefaultEffectType; // 0x38
    TArray<void*> QualityLevels; // 0x50
    char pad_60[0x50];
    ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0
    ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1
    char pad_b2[0x2];
    ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xb4
    ENDISkelMesh_GpuMaxInfluences::Type NDISkelMesh_GpuMaxInfluences; // 0xb8
    ENDISkelMesh_GpuUniformSamplingFormat::Type NDISkelMesh_GpuUniformSamplingFormat; // 0xb9
    ENDISkelMesh_AdjacencyTriangleIndexFormat::Type NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xba
    char pad_bb[0x5];
    UNiagaraEffectType* DefaultEffectTypePtr; // 0xc0
    static UNiagaraSettings* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
