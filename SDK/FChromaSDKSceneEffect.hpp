#pragma once
#include <cstdint>
#include "EChromaSDKSceneBlend\Type.hpp"
#include "EChromaSDKSceneMode\Type.hpp"
#include "FChromaSDKDeviceFrameIndex.hpp"
#pragma pack(push, 1)
struct FChromaSDKSceneEffect {
    FString Animation; // 0x0
    bool State; // 0x10
    char pad_11[0x3];
    int32_t PrimaryColor; // 0x14
    int32_t SecondaryColor; // 0x18
    int32_t Speed; // 0x1c
    EChromaSDKSceneBlend::Type Blend; // 0x20
    EChromaSDKSceneMode::Type Mode; // 0x21
    char pad_22[0x6];
    FChromaSDKDeviceFrameIndex FrameIndex; // 0x28
}; // Size: 0x38
#pragma pack(pop)
