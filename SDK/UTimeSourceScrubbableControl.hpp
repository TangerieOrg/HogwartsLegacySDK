#pragma once
#include <cstdint>
#include "UTimeSourceScrubbableControlBase.hpp"
#pragma pack(push, 1)
class UTimeSourceScrubbableControl : public UTimeSourceScrubbableControlBase {
public:
    float DaysOffset; // 0x30
    float HoursOffset; // 0x34
    float MinutesOffset; // 0x38
    int32_t SecondsOffset; // 0x3c
    bool bWholeDays; // 0x40
    bool bWholeHours; // 0x41
    bool bWholeMinutes; // 0x42
    char pad_43[0x5];
    static UTimeSourceScrubbableControl* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
