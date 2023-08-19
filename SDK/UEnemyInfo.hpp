#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UEnemyInfo : public UUserWidget {
public:
    float Health; // 0x268
    FName Name; // 0x26c
    bool Visible; // 0x274
    char pad_275[0x3];
    static UEnemyInfo* StaticClass();
    void Show(bool VisibleIn);
    void SetName(FName NameIn);
    void SetHelthPercentage(float HealthIn);
    void HandleShow(bool VisibleIn);
    void HandleNameChanged(FName NameIn);
    void HandleHealthPercentageChanged(float HealthIn);
}; // Size: 0x278
#pragma pack(pop)
