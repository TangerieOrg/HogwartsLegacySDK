#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UContentWidget.hpp"
#pragma pack(push, 1)
class UWindowTitleBarArea : public UContentWidget {
public:
    bool bWindowButtonsEnabled; // 0x120
    bool bDoubleClickTogglesFullscreen; // 0x121
    char pad_122[0x1e];
    static UWindowTitleBarArea* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
}; // Size: 0x140
#pragma pack(pop)
