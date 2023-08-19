#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "UMoviePipelineRenderPass.hpp"
class UTextureRenderTarget2D;
class UMoviePipelineBurnInWidget;
#pragma pack(push, 1)
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass {
public:
    FSoftClassPath BurnInClass; // 0x48
    bool bCompositeOntoFinalImage; // 0x60
    char pad_61[0x2f];
    UTextureRenderTarget2D* RenderTarget; // 0x90
    UMoviePipelineBurnInWidget* BurnInWidgetInstance; // 0x98
    static UMoviePipelineBurnInSetting* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
