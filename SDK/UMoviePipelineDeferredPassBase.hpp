#pragma once
#include <cstdint>
#include "FActorLayer.hpp"
#include "FMoviePipelinePostProcessPass.hpp"
#include "UMoviePipelineImagePassBase.hpp"
class UMaterialInterface;
class UTextureRenderTarget2D;
#pragma pack(push, 1)
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase {
public:
    bool bAccumulatorIncludesAlpha; // 0xc8
    bool bDisableMultisampleEffects; // 0xc9
    bool bUse32BitPostProcessMaterials; // 0xca
    char pad_cb[0x5];
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials; // 0xd0
    bool bAddDefaultLayer; // 0xe0
    char pad_e1[0x7];
    TArray<FActorLayer> StencilLayers; // 0xe8
    TArray<UMaterialInterface*> ActivePostProcessMaterials; // 0xf8
    UMaterialInterface* StencilLayerMaterial; // 0x108
    TArray<UTextureRenderTarget2D*> TileRenderTargets; // 0x110
    char pad_120[0x50];
    static UMoviePipelineDeferredPassBase* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
