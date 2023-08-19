#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#include "FFrameRate.hpp"
#include "UBaseMediaSource.hpp"
class AActor;
#pragma pack(push, 1)
class UImgMediaSource : public UBaseMediaSource {
public:
    bool IsPathRelativeToProjectRoot; // 0x88
    char pad_89[0x3];
    FFrameRate FrameRateOverride; // 0x8c
    char pad_94[0x4];
    FString ProxyOverride; // 0x98
    FDirectoryPath SequencePath; // 0xa8
    char pad_b8[0x10];
    static UImgMediaSource* StaticClass();
    void SetSequencePath(FString Path);
    void SetMipLevelDistance(float Distance);
    void RemoveTargetObject(AActor* InActor);
    void RemoveGlobalCamera(AActor* InActor);
    FString GetSequencePath();
    void GetProxies(TArray<FString>& OutProxies);
    void AddTargetObject(AActor* InActor, float Width);
    void AddGlobalCamera(AActor* InActor);
}; // Size: 0xc8
#pragma pack(pop)
