#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMerEditorSettings : public UObject {
public:
    bool bEnableExtraLogging; // 0x28
    char pad_29[0x3];
    FLinearColor NavigableColor; // 0x2c
    FLinearColor HighCostColor; // 0x3c
    FLinearColor UnnavigableColor; // 0x4c
    char pad_5c[0x1c];
    static UMerEditorSettings* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
