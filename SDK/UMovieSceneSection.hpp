#pragma once
#include <cstdint>
#include "EMovieSceneBlendType.hpp"
#include "EMovieSceneCompletionMode.hpp"
#include "FFrameNumber.hpp"
#include "FMovieSceneEasingSettings.hpp"
#include "FMovieSceneFrameRange.hpp"
#include "FMovieSceneSectionEvalOptions.hpp"
#include "FOptionalMovieSceneBlendType.hpp"
#include "UMovieSceneSignedObject.hpp"
#pragma pack(push, 1)
class UMovieSceneSection : public UMovieSceneSignedObject {
public:
    FMovieSceneSectionEvalOptions EvalOptions; // 0x50
    char pad_52[0x6];
    FMovieSceneEasingSettings Easing; // 0x58
    FMovieSceneFrameRange SectionRange; // 0x90
    FFrameNumber PreRollFrames; // 0xa0
    FFrameNumber PostRollFrames; // 0xa4
    int32_t RowIndex; // 0xa8
    int32_t OverlapPriority; // 0xac
    uint8_t bIsActive : 1; // 0xb0
    uint8_t bIsLocked : 1; // 0xb0
    uint8_t pad_bitfield_b0_2 : 6;
    char pad_b1[0x3];
    float StartTime; // 0xb4
    float EndTime; // 0xb8
    float PrerollTime; // 0xbc
    float PostrollTime; // 0xc0
    uint8_t bIsInfinite : 1; // 0xc4
    uint8_t pad_bitfield_c4_1 : 7;
    char pad_c5[0x3];
    bool bSupportsInfiniteRange; // 0xc8
    FOptionalMovieSceneBlendType BlendType; // 0xc9
    char pad_cb[0x1d];
    static UMovieSceneSection* StaticClass();
    void SetRowIndex(int32_t NewRowIndex);
    void SetPreRollFrames(int32_t InPreRollFrames);
    void SetPostRollFrames(int32_t InPostRollFrames);
    void SetOverlapPriority(int32_t NewPriority);
    void SetIsLocked(bool bInIsLocked);
    void SetIsActive(bool bInIsActive);
    void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
    void SetBlendType(EMovieSceneBlendType InBlendType);
    bool IsLocked();
    bool IsActive();
    int32_t GetRowIndex();
    int32_t GetPreRollFrames();
    int32_t GetPostRollFrames();
    int32_t GetOverlapPriority();
    EMovieSceneCompletionMode GetCompletionMode();
    FOptionalMovieSceneBlendType GetBlendType();
}; // Size: 0xe8
#pragma pack(pop)
