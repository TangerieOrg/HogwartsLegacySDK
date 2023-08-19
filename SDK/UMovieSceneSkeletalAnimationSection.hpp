#pragma once
#include <cstdint>
#include "FMovieSceneSkeletalAnimationParams.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UMovieSceneSection.hpp"
class UAnimSequence;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection {
public:
    FMovieSceneSkeletalAnimationParams Params; // 0xe8
    UAnimSequence* AnimSequence; // 0x1c0
    UAnimSequenceBase* Animation; // 0x1c8
    float StartOffset; // 0x1d0
    float EndOffset; // 0x1d4
    float PlayRate; // 0x1d8
    uint8_t bReverse : 1; // 0x1dc
    uint8_t pad_bitfield_1dc_1 : 7;
    char pad_1dd[0x3];
    FName SlotName; // 0x1e0
    FVector StartLocationOffset; // 0x1e8
    FRotator StartRotationOffset; // 0x1f4
    bool bMatchWithPrevious; // 0x200
    char pad_201[0x3];
    FName MatchedBoneName; // 0x204
    FVector MatchedLocationOffset; // 0x20c
    FRotator MatchedRotationOffset; // 0x218
    bool bMatchTranslation; // 0x224
    bool bMatchIncludeZHeight; // 0x225
    bool bMatchRotationYaw; // 0x226
    bool bMatchRotationPitch; // 0x227
    bool bMatchRotationRoll; // 0x228
    char pad_229[0x47];
    static UMovieSceneSkeletalAnimationSection* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
