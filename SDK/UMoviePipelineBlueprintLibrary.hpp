#pragma once
#include <cstdint>
#include "EMovieRenderPipelineState.hpp"
#include "EMovieRenderShotState.hpp"
#include "FDateTime.hpp"
#include "FFrameNumber.hpp"
#include "FIntPoint.hpp"
#include "FMoviePipelineFilenameResolveParams.hpp"
#include "FMoviePipelineSegmentWorkMetrics.hpp"
#include "FTimecode.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ULevelSequence;
struct FTimespan;
class UMoviePipeline;
class UObject;
struct FMoviePipelineFormatArgs;
class UMoviePipelineExecutorJob;
class UMoviePipelineMasterConfig;
class UMoviePipelineExecutorShot;
class UClass;
class UMoviePipelineSetting;
class UMovieSceneSequence;
#pragma pack(push, 1)
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UMoviePipelineBlueprintLibrary* StaticClass();
    static void UpdateJobShotListFromSequence(ULevelSequence* InSequence, UMoviePipelineExecutorJob* InJob, bool& bShotsChanged);
    static int32_t ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams);
    static void ResolveFilenameFormatArguments(FString InFormatString, FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs);
    static EMovieRenderPipelineState GetPipelineState(UMoviePipeline* InPipeline);
    static void GetOverallSegmentCounts(UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);
    static void GetOverallOutputFrames(UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);
    static FTimecode GetMasterTimecode(UMoviePipeline* InMoviePipeline);
    static FFrameNumber GetMasterFrameNumber(UMoviePipeline* InMoviePipeline);
    static FString GetMapPackageName(UMoviePipelineExecutorJob* InJob);
    static void GetJobName(UMoviePipeline* InMoviePipeline);
    static FDateTime GetJobInitializationTime(UMoviePipeline* InMoviePipeline);
    static void GetJobAuthor(UMoviePipeline* InMoviePipeline);
    static bool GetEstimatedTimeRemaining(UMoviePipeline* InPipeline, FTimespan& OutEstimate);
    static FIntPoint GetEffectiveOutputResolution(UMoviePipelineMasterConfig* InMasterConfig, UMoviePipelineExecutorShot* InPipelineExecutorShot);
    static FTimecode GetCurrentShotTimecode(UMoviePipeline* InMoviePipeline);
    static FFrameNumber GetCurrentShotFrameNumber(UMoviePipeline* InMoviePipeline);
    static FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(UMoviePipeline* InMoviePipeline);
    static EMovieRenderShotState GetCurrentSegmentState(UMoviePipeline* InMoviePipeline);
    static void GetCurrentSegmentName(UMoviePipeline* InMoviePipeline);
    static float GetCurrentFocusDistance(UMoviePipeline* InMoviePipeline);
    static float GetCurrentFocalLength(UMoviePipeline* InMoviePipeline);
    static float GetCurrentAperture(UMoviePipeline* InMoviePipeline);
    static float GetCompletionPercentage(UMoviePipeline* InPipeline);
    static UMoviePipelineSetting* FindOrGetDefaultSettingForShot(UClass* InSettingType, UMoviePipelineMasterConfig* InMasterConfig, UMoviePipelineExecutorShot* InShot);
    static UMovieSceneSequence* DuplicateSequence(UObject* Outer, UMovieSceneSequence* InSequence);
}; // Size: 0x28
#pragma pack(pop)
