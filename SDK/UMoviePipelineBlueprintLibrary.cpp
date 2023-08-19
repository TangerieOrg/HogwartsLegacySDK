#include "EMovieRenderPipelineState.hpp"
#include "EMovieRenderShotState.hpp"
#include "FDateTime.hpp"
#include "FFrameNumber.hpp"
#include "FIntPoint.hpp"
#include "FMoviePipelineFilenameResolveParams.hpp"
#include "FMoviePipelineFormatArgs.hpp"
#include "FMoviePipelineSegmentWorkMetrics.hpp"
#include "FTimecode.hpp"
#include "FTimespan.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
#include "UMoviePipeline.hpp"
#include "UMoviePipelineBlueprintLibrary.hpp"
#include "UMoviePipelineExecutorJob.hpp"
#include "UMoviePipelineExecutorShot.hpp"
#include "UMoviePipelineMasterConfig.hpp"
#include "UMoviePipelineSetting.hpp"
#include "UMovieSceneSequence.hpp"
#include "UObject.hpp"
UMoviePipelineBlueprintLibrary* UMoviePipelineBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary");
    return (UMoviePipelineBlueprintLibrary*)res;
}
void UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments(FString InFormatString, FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments"));
    struct Params_ResolveFilenameFormatArguments {
        FString InFormatString; // 0x0
        FMoviePipelineFilenameResolveParams InParams; // 0x10
        FString OutFinalPath; // 0x110
        FMoviePipelineFormatArgs OutMergedFormatArgs; // 0x120
    }; // Size: 0x1c8
    Params_ResolveFilenameFormatArguments params{};
    params.InFormatString = (FString)InFormatString;
    params.InParams = (FMoviePipelineFilenameResolveParams)InParams;
    params.OutFinalPath = (FString)OutFinalPath;
    params.OutMergedFormatArgs = (FMoviePipelineFormatArgs)OutMergedFormatArgs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParams = params.InParams;
    OutFinalPath = params.OutFinalPath;
    OutMergedFormatArgs = params.OutMergedFormatArgs;
}
void UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(ULevelSequence* InSequence, UMoviePipelineExecutorJob* InJob, bool& bShotsChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence"));
    struct Params_UpdateJobShotListFromSequence {
        ULevelSequence* InSequence; // 0x0
        UMoviePipelineExecutorJob* InJob; // 0x8
        bool bShotsChanged; // 0x10
    }; // Size: 0x11
    Params_UpdateJobShotListFromSequence params{};
    params.InSequence = (ULevelSequence*)InSequence;
    params.InJob = (UMoviePipelineExecutorJob*)InJob;
    params.bShotsChanged = (bool)bShotsChanged;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bShotsChanged = params.bShotsChanged;
}
float UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength"));
    struct Params_GetCurrentFocalLength {
        UMoviePipeline* InMoviePipeline; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCurrentFocalLength params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UMoviePipelineBlueprintLibrary::ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber"));
    struct Params_ResolveVersionNumber {
        FMoviePipelineFilenameResolveParams InParams; // 0x0
        int32_t ReturnValue; // 0x100
    }; // Size: 0x104
    Params_ResolveVersionNumber params{};
    params.InParams = (FMoviePipelineFilenameResolveParams)InParams;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EMovieRenderPipelineState UMoviePipelineBlueprintLibrary::GetPipelineState(UMoviePipeline* InPipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState"));
    struct Params_GetPipelineState {
        UMoviePipeline* InPipeline; // 0x0
        EMovieRenderPipelineState ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetPipelineState params{};
    params.InPipeline = (UMoviePipeline*)InPipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EMovieRenderPipelineState)params.ReturnValue;
}
void UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames"));
    struct Params_GetOverallOutputFrames {
        UMoviePipeline* InMoviePipeline; // 0x0
        int32_t OutCurrentIndex; // 0x8
        int32_t OutTotalCount; // 0xc
    }; // Size: 0x10
    Params_GetOverallOutputFrames params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    params.OutCurrentIndex = (int32_t)OutCurrentIndex;
    params.OutTotalCount = (int32_t)OutTotalCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutCurrentIndex = params.OutCurrentIndex;
    OutTotalCount = params.OutTotalCount;
}
void UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts"));
    struct Params_GetOverallSegmentCounts {
        UMoviePipeline* InMoviePipeline; // 0x0
        int32_t OutCurrentIndex; // 0x8
        int32_t OutTotalCount; // 0xc
    }; // Size: 0x10
    Params_GetOverallSegmentCounts params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    params.OutCurrentIndex = (int32_t)OutCurrentIndex;
    params.OutTotalCount = (int32_t)OutTotalCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutCurrentIndex = params.OutCurrentIndex;
    OutTotalCount = params.OutTotalCount;
}
EMovieRenderShotState UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState"));
    struct Params_GetCurrentSegmentState {
        UMoviePipeline* InMoviePipeline; // 0x0
        EMovieRenderShotState ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetCurrentSegmentState params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EMovieRenderShotState)params.ReturnValue;
}
FTimecode UMoviePipelineBlueprintLibrary::GetMasterTimecode(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode"));
    struct Params_GetMasterTimecode {
        UMoviePipeline* InMoviePipeline; // 0x0
        FTimecode ReturnValue; // 0x8
    }; // Size: 0x1c
    Params_GetMasterTimecode params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimecode)params.ReturnValue;
}
FFrameNumber UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber"));
    struct Params_GetMasterFrameNumber {
        UMoviePipeline* InMoviePipeline; // 0x0
        FFrameNumber ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMasterFrameNumber params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
FString UMoviePipelineBlueprintLibrary::GetMapPackageName(UMoviePipelineExecutorJob* InJob) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName"));
    struct Params_GetMapPackageName {
        UMoviePipelineExecutorJob* InJob; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetMapPackageName params{};
    params.InJob = (UMoviePipelineExecutorJob*)InJob;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(UMoviePipeline* InMoviePipeline) {}
void UMoviePipelineBlueprintLibrary::GetJobName(UMoviePipeline* InMoviePipeline) {}
FDateTime UMoviePipelineBlueprintLibrary::GetJobInitializationTime(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime"));
    struct Params_GetJobInitializationTime {
        UMoviePipeline* InMoviePipeline; // 0x0
        FDateTime ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetJobInitializationTime params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
bool UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(UMoviePipeline* InPipeline, FTimespan& OutEstimate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining"));
    struct Params_GetEstimatedTimeRemaining {
        UMoviePipeline* InPipeline; // 0x0
        FTimespan OutEstimate; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetEstimatedTimeRemaining params{};
    params.InPipeline = (UMoviePipeline*)InPipeline;
    params.OutEstimate = (FTimespan)OutEstimate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutEstimate = params.OutEstimate;
    return (bool)params.ReturnValue;
}
void UMoviePipelineBlueprintLibrary::GetJobAuthor(UMoviePipeline* InMoviePipeline) {}
FIntPoint UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution(UMoviePipelineMasterConfig* InMasterConfig, UMoviePipelineExecutorShot* InPipelineExecutorShot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution"));
    struct Params_GetEffectiveOutputResolution {
        UMoviePipelineMasterConfig* InMasterConfig; // 0x0
        UMoviePipelineExecutorShot* InPipelineExecutorShot; // 0x8
        FIntPoint ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetEffectiveOutputResolution params{};
    params.InMasterConfig = (UMoviePipelineMasterConfig*)InMasterConfig;
    params.InPipelineExecutorShot = (UMoviePipelineExecutorShot*)InPipelineExecutorShot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
FTimecode UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode"));
    struct Params_GetCurrentShotTimecode {
        UMoviePipeline* InMoviePipeline; // 0x0
        FTimecode ReturnValue; // 0x8
    }; // Size: 0x1c
    Params_GetCurrentShotTimecode params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimecode)params.ReturnValue;
}
FFrameNumber UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber"));
    struct Params_GetCurrentShotFrameNumber {
        UMoviePipeline* InMoviePipeline; // 0x0
        FFrameNumber ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCurrentShotFrameNumber params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
FMoviePipelineSegmentWorkMetrics UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics"));
    struct Params_GetCurrentSegmentWorkMetrics {
        UMoviePipeline* InMoviePipeline; // 0x0
        FMoviePipelineSegmentWorkMetrics ReturnValue; // 0x8
    }; // Size: 0x30
    Params_GetCurrentSegmentWorkMetrics params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMoviePipelineSegmentWorkMetrics)params.ReturnValue;
}
UMoviePipelineSetting* UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot(UClass* InSettingType, UMoviePipelineMasterConfig* InMasterConfig, UMoviePipelineExecutorShot* InShot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot"));
    struct Params_FindOrGetDefaultSettingForShot {
        UClass* InSettingType; // 0x0
        UMoviePipelineMasterConfig* InMasterConfig; // 0x8
        UMoviePipelineExecutorShot* InShot; // 0x10
        UMoviePipelineSetting* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_FindOrGetDefaultSettingForShot params{};
    params.InSettingType = (UClass*)InSettingType;
    params.InMasterConfig = (UMoviePipelineMasterConfig*)InMasterConfig;
    params.InShot = (UMoviePipelineExecutorShot*)InShot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMoviePipelineSetting*)params.ReturnValue;
}
float UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance"));
    struct Params_GetCurrentFocusDistance {
        UMoviePipeline* InMoviePipeline; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCurrentFocusDistance params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMoviePipelineBlueprintLibrary::GetCurrentAperture(UMoviePipeline* InMoviePipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture"));
    struct Params_GetCurrentAperture {
        UMoviePipeline* InMoviePipeline; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCurrentAperture params{};
    params.InMoviePipeline = (UMoviePipeline*)InMoviePipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMoviePipelineBlueprintLibrary::GetCompletionPercentage(UMoviePipeline* InPipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage"));
    struct Params_GetCompletionPercentage {
        UMoviePipeline* InPipeline; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCompletionPercentage params{};
    params.InPipeline = (UMoviePipeline*)InPipeline;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UMovieSceneSequence* UMoviePipelineBlueprintLibrary::DuplicateSequence(UObject* Outer, UMovieSceneSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence"));
    struct Params_DuplicateSequence {
        UObject* Outer; // 0x0
        UMovieSceneSequence* InSequence; // 0x8
        UMovieSceneSequence* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_DuplicateSequence params{};
    params.Outer = (UObject*)Outer;
    params.InSequence = (UMovieSceneSequence*)InSequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneSequence*)params.ReturnValue;
}
