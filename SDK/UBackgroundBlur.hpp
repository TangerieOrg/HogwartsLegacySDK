#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "UContentWidget.hpp"
#pragma pack(push, 1)
class UBackgroundBlur : public UContentWidget {
public:
    FMargin Padding; // 0x120
    EHorizontalAlignment HorizontalAlignment; // 0x130
    EVerticalAlignment VerticalAlignment; // 0x131
    bool bApplyAlphaToBlur; // 0x132
    char pad_133[0x1];
    float BlurStrength; // 0x134
    bool bOverrideAutoRadiusCalculation; // 0x138
    char pad_139[0x3];
    int32_t BlurRadius; // 0x13c
    FSlateBrush LowQualityFallbackBrush; // 0x140
    char pad_1c8[0x10];
    static UBackgroundBlur* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetLowQualityFallbackBrush(FSlateBrush& InBrush);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
    void SetBlurStrength(float InStrength);
    void SetBlurRadius(int32_t InBlurRadius);
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
}; // Size: 0x1d8
#pragma pack(pop)
