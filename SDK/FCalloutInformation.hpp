#pragma once
#include <cstdint>
#include "ECalloutActions.hpp"
#include "ECalloutBlipType.hpp"
#include "ECalloutType.hpp"
#include "FSlateColor.hpp"
#pragma pack(push, 1)
struct FCalloutInformation {
    ECalloutType CalloutType; // 0x0
    ECalloutBlipType CalloutBlipType; // 0x1
    ECalloutActions CalloutAction; // 0x2
    char pad_3[0x1d];
    FSlateColor CalloutTextColor; // 0x20
    float CalloutInteractDistance; // 0x48
    bool bGrayOutButton; // 0x4c
    bool bIsTargetNameTranslatable; // 0x4d
    bool Owned; // 0x4e
    char pad_4f[0x1];
    float CalloutChargeTime; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
