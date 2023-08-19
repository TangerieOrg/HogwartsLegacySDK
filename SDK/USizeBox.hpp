#pragma once
#include <cstdint>
#include "UContentWidget.hpp"
#pragma pack(push, 1)
class USizeBox : public UContentWidget {
public:
    char pad_120[0x10];
    float WidthOverride; // 0x130
    float HeightOverride; // 0x134
    float MinDesiredWidth; // 0x138
    float MinDesiredHeight; // 0x13c
    float MaxDesiredWidth; // 0x140
    float MaxDesiredHeight; // 0x144
    float MinAspectRatio; // 0x148
    float MaxAspectRatio; // 0x14c
    uint8_t bOverride_WidthOverride : 1; // 0x150
    uint8_t bOverride_HeightOverride : 1; // 0x150
    uint8_t bOverride_MinDesiredWidth : 1; // 0x150
    uint8_t bOverride_MinDesiredHeight : 1; // 0x150
    uint8_t bOverride_MaxDesiredWidth : 1; // 0x150
    uint8_t bOverride_MaxDesiredHeight : 1; // 0x150
    uint8_t bOverride_MinAspectRatio : 1; // 0x150
    uint8_t bOverride_MaxAspectRatio : 1; // 0x150
    char pad_151[0x7];
    static USizeBox* StaticClass();
    void SetWidthOverride(float InWidthOverride);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetMinDesiredHeight(float InMinDesiredHeight);
    void SetMinAspectRatio(float InMinAspectRatio);
    void SetMaxDesiredWidth(float InMaxDesiredWidth);
    void SetMaxDesiredHeight(float InMaxDesiredHeight);
    void SetMaxAspectRatio(float InMaxAspectRatio);
    void SetHeightOverride(float InHeightOverride);
    void ClearWidthOverride();
    void ClearMinDesiredWidth();
    void ClearMinDesiredHeight();
    void ClearMinAspectRatio();
    void ClearMaxDesiredWidth();
    void ClearMaxDesiredHeight();
    void ClearMaxAspectRatio();
    void ClearHeightOverride();
}; // Size: 0x158
#pragma pack(pop)
