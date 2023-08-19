#pragma once
#include <cstdint>
#include "FHapticFeedbackDetails_Curve.hpp"
#include "UHapticFeedbackEffect_Base.hpp"
#pragma pack(push, 1)
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base {
public:
    FHapticFeedbackDetails_Curve HapticDetails; // 0x28
    static UHapticFeedbackEffect_Curve* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
