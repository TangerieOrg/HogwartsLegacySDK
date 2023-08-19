#pragma once
#include <cstdint>
#include "UMeshComponent.hpp"
class UGeometryCache;
#pragma pack(push, 1)
class UGeometryCacheComponent : public UMeshComponent {
public:
    bool bRunning; // 0x4b0
    bool bLooping; // 0x4b1
    bool bExtrapolateFrames; // 0x4b2
    char pad_4b3[0x1];
    float StartTimeOffset; // 0x4b4
    float PlaybackSpeed; // 0x4b8
    float MotionVectorScale; // 0x4bc
    int32_t NumTracks; // 0x4c0
    float ElapsedTime; // 0x4c4
    char pad_4c8[0x34];
    float Duration; // 0x4fc
    bool bManualTick; // 0x500
    char pad_501[0x3];
    float PrefetchSeconds; // 0x504
    char pad_508[0x8];
    static UGeometryCacheComponent* StaticClass();
    void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetStartTimeOffset(float NewStartTimeOffset);
    void SetPlaybackSpeed(float NewPlaybackSpeed);
    void SetMotionVectorScale(float NewMotionVectorScale);
    void SetLooping(bool bNewLooping);
    bool SetGeometryCache(UGeometryCache* NewGeomCache);
    void SetExtrapolateFrames(bool bNewExtrapolating);
    void PlayReversedFromEnd();
    void PlayReversed();
    void PlayFromStart();
    void Play();
    void Pause();
    bool IsPlayingReversed();
    bool IsPlaying();
    bool IsLooping();
    bool IsExtrapolatingFrames();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
    float GetPlaybackDirection();
    int32_t GetNumberOfFrames();
    float GetMotionVectorScale();
    float GetDuration();
    float GetAnimationTime();
}; // Size: 0x510
#pragma pack(pop)
