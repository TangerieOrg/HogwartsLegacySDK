#pragma once
#include <cstdint>
#include "UMoviePipelineRenderPass.hpp"
class UTextureRenderTarget2D;
#pragma pack(push, 1)
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass {
public:
    bool bCompositeOntoFinalImage; // 0x48
    char pad_49[0x17];
    UTextureRenderTarget2D* RenderTarget; // 0x60
    static UMoviePipelineWidgetRenderer* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
