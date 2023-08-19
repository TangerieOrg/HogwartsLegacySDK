#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FCameraCutInfo.hpp"
#include "FInterpGroupActorInfo.hpp"
class UInterpData;
class UInterpGroupInst;
#pragma pack(push, 1)
class AMatineeActor : public AActor {
public:
    UInterpData* MatineeData; // 0x248
    FName MatineeControllerName; // 0x250
    float PlayRate; // 0x258
    uint8_t bPlayOnLevelLoad : 1; // 0x25c
    uint8_t bForceStartPos : 1; // 0x25c
    uint8_t pad_bitfield_25c_2 : 6;
    char pad_25d[0x3];
    float ForceStartPosition; // 0x260
    uint8_t bLooping : 1; // 0x264
    uint8_t bRewindOnPlay : 1; // 0x264
    uint8_t bNoResetOnRewind : 1; // 0x264
    uint8_t bRewindIfAlreadyPlaying : 1; // 0x264
    uint8_t bDisableRadioFilter : 1; // 0x264
    uint8_t bClientSideOnly : 1; // 0x264
    uint8_t bSkipUpdateIfNotVisible : 1; // 0x264
    uint8_t bIsSkippable : 1; // 0x264
    char pad_265[0x3];
    int32_t PreferredSplitScreenNum; // 0x268
    uint8_t bDisableMovementInput : 1; // 0x26c
    uint8_t bDisableLookAtInput : 1; // 0x26c
    uint8_t bHidePlayer : 1; // 0x26c
    uint8_t bHideHud : 1; // 0x26c
    uint8_t pad_bitfield_26c_4 : 4;
    char pad_26d[0x3];
    TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x270
    uint8_t bShouldShowGore : 1; // 0x280
    uint8_t pad_bitfield_280_1 : 7;
    char pad_281[0x7];
    TArray<UInterpGroupInst*> GroupInst; // 0x288
    TArray<FCameraCutInfo> CameraCuts; // 0x298
    uint8_t bIsPlaying : 1; // 0x2a8
    uint8_t bReversePlayback : 1; // 0x2a8
    uint8_t bPaused : 1; // 0x2a8
    uint8_t bPendingStop : 1; // 0x2a8
    uint8_t pad_bitfield_2a8_4 : 4;
    char pad_2a9[0x3];
    float InterpPosition; // 0x2ac
    char pad_2b0[0x4];
    uint8_t ReplicationForceIsPlaying; // 0x2b4
    char pad_2b5[0x3b];
    static AMatineeActor* StaticClass();
    void Stop();
    void SetPosition(float NewPosition, bool bJump);
    void SetLoopingState(bool bNewLooping);
    void Reverse();
    void Play();
    void Pause();
    void EnableGroupByName(FString GroupName, bool bEnable);
    void ChangePlaybackDirection();
}; // Size: 0x2f0
#pragma pack(pop)
