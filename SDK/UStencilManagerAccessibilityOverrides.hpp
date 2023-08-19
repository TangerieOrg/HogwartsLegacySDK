#pragma once
#include <cstdint>
#include "FStencilManagerEffectInfoAccessibilityOverride.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UStencilManagerAccessibilityOverrides : public UDataAsset {
public:
    TArray<FStencilManagerEffectInfoAccessibilityOverride> AccessibilityOverrides; // 0x30
    static UStencilManagerAccessibilityOverrides* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
