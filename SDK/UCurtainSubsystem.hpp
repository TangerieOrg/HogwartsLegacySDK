#pragma once
#include <cstdint>
#include "UGameInstanceSubsystem.hpp"
class UClass;
class UUserWidget;
class UObject;
#pragma pack(push, 1)
class UCurtainSubsystem : public UGameInstanceSubsystem {
public:
    char pad_30[0x8];
    UClass* CurtainWidgetClass; // 0x38
    char pad_40[0xe8];
    UUserWidget* CurtainWidget; // 0x128
    char pad_130[0x10];
    static UCurtainSubsystem* StaticClass();
    static void LowerCurtain(UObject* WhosAsking, FName WhatsYourName);
    static bool IsCurtainDown(UObject* WhosAsking);
    FString GetLienholderNames();
}; // Size: 0x140
#pragma pack(pop)
