#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FGuid.hpp"
#include "FMovieSceneFrameRange.hpp"
#include "FMovieSceneSequenceID.hpp"
#include "FMovieSceneSequenceInstanceDataPtr.hpp"
#include "FMovieSceneSequenceTransform.hpp"
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FMovieSceneSubSequenceData {
    FSoftObjectPath Sequence; // 0x0
    FMovieSceneSequenceTransform OuterToInnerTransform; // 0x18
    FMovieSceneSequenceTransform RootToSequenceTransform; // 0x38
    FFrameRate TickResolution; // 0x58
    FMovieSceneSequenceID DeterministicSequenceID; // 0x60
    FMovieSceneFrameRange ParentPlayRange; // 0x64
    FFrameNumber ParentStartFrameOffset; // 0x74
    FFrameNumber ParentEndFrameOffset; // 0x78
    FFrameNumber ParentFirstLoopStartFrameOffset; // 0x7c
    bool bCanLoop; // 0x80
    char pad_81[0x3];
    FMovieSceneFrameRange PlayRange; // 0x84
    FMovieSceneFrameRange FullPlayRange; // 0x94
    FMovieSceneFrameRange UnwarpedPlayRange; // 0xa4
    FMovieSceneFrameRange PreRollRange; // 0xb4
    FMovieSceneFrameRange PostRollRange; // 0xc4
    int16_t HierarchicalBias; // 0xd4
    bool bHasHierarchicalEasing; // 0xd6
    char pad_d7[0x1];
    FMovieSceneSequenceInstanceDataPtr InstanceData; // 0xd8
    char pad_f0[0x8];
    FGuid SubSectionSignature; // 0xf8
}; // Size: 0x108
#pragma pack(pop)
