#pragma once
#include <cstdint>
#include "FMovieSceneSkeletalAnimRootMotionTrackParams.hpp"
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> AnimationSections; // 0x98
    bool bUseLegacySectionIndexBlend; // 0xa8
    char pad_a9[0x7];
    FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xb0
    bool bBlendFirstChildOfRoot; // 0xe0
    char pad_e1[0x7];
    static UMovieSceneSkeletalAnimationTrack* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
