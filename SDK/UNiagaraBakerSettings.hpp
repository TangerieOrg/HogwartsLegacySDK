#pragma once
#include <cstdint>
#include "ENiagaraBakerViewMode.hpp"
#include "FIntPoint.hpp"
#include "FNiagaraBakerTextureSettings.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraBakerSettings : public UObject {
public:
    float StartSeconds; // 0x28
    float DurationSeconds; // 0x2c
    int32_t FramesPerSecond; // 0x30
    uint8_t bPreviewLooping : 1; // 0x34
    uint8_t pad_bitfield_34_1 : 7;
    char pad_35[0x3];
    FIntPoint FramesPerDimension; // 0x38
    TArray<FNiagaraBakerTextureSettings> OutputTextures; // 0x40
    ENiagaraBakerViewMode CameraViewportMode; // 0x50
    FVector CameraViewportLocation[7]; // 0x54
    FRotator CameraViewportRotation[7]; // 0xa8
    float CameraOrbitDistance; // 0xfc
    float CameraFOV; // 0x100
    float CameraOrthoWidth; // 0x104
    uint8_t bUseCameraAspectRatio : 1; // 0x108
    uint8_t pad_bitfield_108_1 : 7;
    char pad_109[0x3];
    float CameraAspectRatio; // 0x10c
    uint8_t bRenderComponentOnly : 1; // 0x110
    uint8_t pad_bitfield_110_1 : 7;
    char pad_111[0x7];
    static UNiagaraBakerSettings* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
