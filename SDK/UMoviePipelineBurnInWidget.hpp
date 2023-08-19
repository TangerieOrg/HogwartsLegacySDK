#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UMoviePipeline;
#pragma pack(push, 1)
class UMoviePipelineBurnInWidget : public UUserWidget {
public:
    static UMoviePipelineBurnInWidget* StaticClass();
    void OnOutputFrameStarted(UMoviePipeline* ForPipeline);
}; // Size: 0x268
#pragma pack(pop)
