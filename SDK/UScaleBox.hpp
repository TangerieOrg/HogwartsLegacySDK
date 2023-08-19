#pragma once
#include <cstdint>
#include "EStretch\Type.hpp"
#include "EStretchDirection\Type.hpp"
#include "UContentWidget.hpp"
#pragma pack(push, 1)
class UScaleBox : public UContentWidget {
public:
    EStretch::Type Stretch; // 0x120
    EStretchDirection::Type StretchDirection; // 0x121
    char pad_122[0x2];
    float UserSpecifiedScale; // 0x124
    bool IgnoreInheritedScale; // 0x128
    char pad_129[0x17];
    static UScaleBox* StaticClass();
    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    void SetStretchDirection(EStretchDirection::Type InStretchDirection);
    void SetStretch(EStretch::Type InStretch);
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
}; // Size: 0x140
#pragma pack(pop)
