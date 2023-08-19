#pragma once
#include <cstdint>
#include "UObject.hpp"
class ULevelSequence;
class UMoviePipelineCustomTimeStep;
class UEngineCustomTimeStep;
class UClass;
class ALevelSequenceActor;
class UMoviePipelineMasterConfig;
class UMovieRenderDebugWidget;
class UTexture;
class UMoviePipelineExecutorJob;
#pragma pack(push, 1)
class UMoviePipeline : public UObject {
public:
    char pad_28[0x30];
    UMoviePipelineCustomTimeStep* CustomTimeStep; // 0x58
    char pad_60[0x10];
    UEngineCustomTimeStep* CachedPrevCustomTimeStep; // 0x70
    ULevelSequence* TargetSequence; // 0x78
    ALevelSequenceActor* LevelSequenceActor; // 0x80
    UMovieRenderDebugWidget* DebugWidget; // 0x88
    UTexture* PreviewTexture; // 0x90
    char pad_98[0x208];
    UClass* DebugWidgetClass; // 0x2a0
    UMoviePipelineExecutorJob* CurrentJob; // 0x2a8
    char pad_2b0[0x30];
    static UMoviePipeline* StaticClass();
    void Shutdown(bool bError);
    void RequestShutdown(bool bIsError);
    void OnMoviePipelineFinishedImpl();
    bool IsShutdownRequested();
    void Initialize(UMoviePipelineExecutorJob* InJob);
    UTexture* GetPreviewTexture();
    UMoviePipelineMasterConfig* GetPipelineMasterConfig();
}; // Size: 0x2e0
#pragma pack(pop)
