#pragma once
#include <cstdint>
#include "EMovieScenePlayerStatus\Type.hpp"
#include "EUpdatePositionMethod.hpp"
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FFrameTime.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "FMovieSceneRootEvaluationTemplateInstance.hpp"
#include "FMovieSceneSequencePlaybackParams.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "FMovieSceneSequenceReplProperties.hpp"
#include "FQualifiedFrameTime.hpp"
#include "UObject.hpp"
class UMovieSceneSequence;
class UMovieSceneSequenceTickManager;
#pragma pack(push, 1)
class UMovieSceneSequencePlayer : public UObject {
public:
    char pad_28[0x288];
    EMovieScenePlayerStatus::Type Status; // 0x2b0
    char pad_2b1[0x3];
    uint8_t bReversePlayback : 1; // 0x2b4
    uint8_t pad_bitfield_2b4_1 : 7;
    char pad_2b5[0x3];
    UMovieSceneSequence* Sequence; // 0x2b8
    FFrameNumber StartTime; // 0x2c0
    int32_t DurationFrames; // 0x2c4
    float DurationSubFrames; // 0x2c8
    int32_t CurrentNumLoops; // 0x2cc
    FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2d0
    char pad_2e4[0x4];
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2e8
    char pad_3d0[0x68];
    FMovieSceneSequenceReplProperties NetSyncProps; // 0x438
    char pad_448[0x10];
    UMovieSceneSequenceTickManager* TickManager; // 0x458
    char pad_460[0x88];
    static UMovieSceneSequencePlayer* StaticClass();
    void StopAtCurrentTime();
    void Stop();
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float PlayRate);
    void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);
    void SetFrameRate(FFrameRate FrameRate);
    void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void ScrubToSeconds(float TimeInSeconds);
    bool ScrubToMarkedFrame(FString InLabel);
    void ScrubToFrame(FFrameTime NewPosition);
    void Scrub();
    void RPC_OnStopEvent(FFrameTime StoppedTime);
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);
    void RestoreState();
    void PlayToSeconds(float TimeInSeconds);
    bool PlayToMarkedFrame(FString InLabel);
    void PlayToFrame(FFrameTime NewPosition);
    void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams);
    void PlayReverse();
    void PlayLooping(int32_t NumLoops);
    void Play();
    void Pause();
    void JumpToSeconds(float TimeInSeconds);
    bool JumpToMarkedFrame(FString InLabel);
    void JumpToFrame(FFrameTime NewPosition);
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    FQualifiedFrameTime GetStartTime();
    UMovieSceneSequence* GetSequence();
    float GetPlayRate();
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(UObject* InObject);
    FFrameRate GetFrameRate();
    int32_t GetFrameDuration();
    FQualifiedFrameTime GetEndTime();
    FQualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    FQualifiedFrameTime GetCurrentTime();
    TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}; // Size: 0x4e8
#pragma pack(pop)
