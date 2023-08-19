#pragma once
#include <cstdint>
#include "FEphemerisDayInfo.hpp"
#include "FRichCurve.hpp"
#pragma pack(push, 1)
struct FSolarDay {
    FEphemerisDayInfo DayInfo; // 0x0
    FRichCurve AzimuthCurve; // 0x78
    FRichCurve AltitudeCurve; // 0xf8
}; // Size: 0x178
#pragma pack(pop)
