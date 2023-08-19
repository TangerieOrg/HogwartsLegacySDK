#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UMovieSceneSection;
class UMovieSceneSequence;
class UMovieSceneSubSection;
class UMovieSceneScriptingChannel;
class UClass;
#pragma pack(push, 1)
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary {
public:
    static UMovieSceneSectionExtensions* StaticClass();
    static void SetStartFrameSeconds(UMovieSceneSection* Section, float StartTime);
    static void SetStartFrameBounded(UMovieSceneSection* Section, bool bIsBounded);
    static void SetStartFrame(UMovieSceneSection* Section, int32_t StartFrame);
    static void SetRangeSeconds(UMovieSceneSection* Section, float StartTime, float EndTime);
    static void SetRange(UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);
    static void SetEndFrameSeconds(UMovieSceneSection* Section, float EndTime);
    static void SetEndFrameBounded(UMovieSceneSection* Section, bool bIsBounded);
    static void SetEndFrame(UMovieSceneSection* Section, int32_t EndFrame);
    static bool HasStartFrame(UMovieSceneSection* Section);
    static bool HasEndFrame(UMovieSceneSection* Section);
    static float GetStartFrameSeconds(UMovieSceneSection* Section);
    static int32_t GetStartFrame(UMovieSceneSection* Section);
    static int32_t GetParentSequenceFrame(UMovieSceneSubSection* Section, int32_t InFrame, UMovieSceneSequence* ParentSequence);
    static float GetEndFrameSeconds(UMovieSceneSection* Section);
    static int32_t GetEndFrame(UMovieSceneSection* Section);
    static TArray<UMovieSceneScriptingChannel*> GetChannels(UMovieSceneSection* Section);
    static TArray<UMovieSceneScriptingChannel*> FindChannelsByType(UMovieSceneSection* Section, UClass* ChannelType);
}; // Size: 0x28
#pragma pack(pop)
