#pragma once
#include <cstdint>
#include "UMapScreenBase.hpp"
class UMapHogwarts;
#pragma pack(push, 1)
class UHogwartsMapScreen : public UMapScreenBase {
public:
    char pad_4d8[0x80];
    UMapHogwarts* HogwartsMap; // 0x558
    static UHogwartsMapScreen* StaticClass();
    void ShowOverlandButton();
    void ShowHogsmeadeButton();
    void HogwartsSetPath_Event();
    void HogwartsSelect_Event();
    void HogwartsFastTravel_Event();
    void HogwartsBack_Event();
    void HideOverlandButton();
    void HideHogsmeadeButton();
    UMapHogwarts* GetMap();
}; // Size: 0x560
#pragma pack(pop)
