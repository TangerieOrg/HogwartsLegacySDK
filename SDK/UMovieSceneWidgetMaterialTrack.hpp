#pragma once
#include <cstdint>
#include "UMovieSceneMaterialTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack {
public:
    char pad_a0[0x8];
    TArray<FName> BrushPropertyNamePath; // 0xa8
    FName TrackName; // 0xb8
    static UMovieSceneWidgetMaterialTrack* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
