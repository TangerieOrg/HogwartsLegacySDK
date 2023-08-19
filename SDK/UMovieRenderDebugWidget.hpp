#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UMoviePipeline;
#pragma pack(push, 1)
class UMovieRenderDebugWidget : public UUserWidget {
public:
    static UMovieRenderDebugWidget* StaticClass();
    void OnInitializedForPipeline(UMoviePipeline* ForPipeline);
}; // Size: 0x268
#pragma pack(pop)
