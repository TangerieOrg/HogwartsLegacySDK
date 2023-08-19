#pragma once
#include <cstdint>
#include "UGameInstanceSubsystem.hpp"
class UObject;
#pragma pack(push, 1)
class UFrontendSubsystem : public UGameInstanceSubsystem {
public:
    char pad_30[0x88];
    static UFrontendSubsystem* StaticClass();
    static void ReleaseTitleScreen(UObject* LienHolder, FName LienholderName);
    static bool IsTitleScreenHeld(UObject* WorldContextObject);
    static void HoldTitleScreen(UObject* LienHolder, FName LienholderName);
}; // Size: 0xb8
#pragma pack(pop)
