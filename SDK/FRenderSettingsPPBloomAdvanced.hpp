#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPPBloomAdvanced {
    uint8_t bOverride_Tint1 : 1; // 0x0
    uint8_t bOverride_Size1 : 1; // 0x0
    uint8_t bOverride_Size2 : 1; // 0x0
    uint8_t bOverride_Tint2 : 1; // 0x0
    uint8_t bOverride_Tint3 : 1; // 0x0
    uint8_t bOverride_Size3 : 1; // 0x0
    uint8_t bOverride_Tint4 : 1; // 0x0
    uint8_t bOverride_Size4 : 1; // 0x0
    uint8_t bOverride_Tint5 : 1; // 0x1
    uint8_t bOverride_Size5 : 1; // 0x1
    uint8_t bOverride_Tint6 : 1; // 0x1
    uint8_t bOverride_Size6 : 1; // 0x1
    uint8_t bOverride_SizeScale : 1; // 0x1
    uint8_t bOverride_ConvolutionSize : 1; // 0x1
    uint8_t bOverride_ConvolutionCenterUV : 1; // 0x1
    uint8_t bOverride_ConvolutionPreFilterMin : 1; // 0x1
    uint8_t bOverride_ConvolutionPreFilterMax : 1; // 0x2
    uint8_t bOverride_ConvolutionPreFilterMult : 1; // 0x2
    uint8_t bOverride_ConvolutionBufferScale : 1; // 0x2
    uint8_t pad_bitfield_2_3 : 5;
    char pad_3[0x1];
    float SizeScale; // 0x4
    float Size1; // 0x8
    float Size2; // 0xc
    float Size3; // 0x10
    float Size4; // 0x14
    float Size5; // 0x18
    float Size6; // 0x1c
    FLinearColor Tint1; // 0x20
    FLinearColor Tint2; // 0x30
    FLinearColor Tint3; // 0x40
    FLinearColor Tint4; // 0x50
    FLinearColor Tint5; // 0x60
    FLinearColor Tint6; // 0x70
    float ConvolutionSize; // 0x80
    FVector2D ConvolutionCenterUV; // 0x84
    float ConvolutionPreFilterMin; // 0x8c
    float ConvolutionPreFilterMax; // 0x90
    float ConvolutionPreFilterMult; // 0x94
    float ConvolutionBufferScale; // 0x98
}; // Size: 0x9c
#pragma pack(pop)
