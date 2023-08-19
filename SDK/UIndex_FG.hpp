#pragma once
#include <cstdint>
#include "UTabPageWidget.hpp"
#pragma pack(push, 1)
class UIndex_FG : public UTabPageWidget {
public:
    char pad_3c8[0x10];
    static UIndex_FG* StaticClass();
    void OnSetSchoolPct(float OldPct, float NewPct);
    void OnSetPlayerLevel(int32_t NewLevel);
    void OnSetActionsPct(float OldPct, float NewPct);
    void OnGetAvailableAssignments(FString DisplayText);
    void GetAvailableAssignments();
}; // Size: 0x3d8
#pragma pack(pop)
