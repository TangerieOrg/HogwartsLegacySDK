#pragma once
#include <cstdint>
#include "UObject.hpp"
class ULocalPlayer;
class UTexture2D;
#pragma pack(push, 1)
class UConsole : public UObject {
public:
    char pad_28[0x10];
    ULocalPlayer* ConsoleTargetPlayer; // 0x38
    UTexture2D* DefaultTexture_Black; // 0x40
    UTexture2D* DefaultTexture_White; // 0x48
    char pad_50[0x18];
    TArray<FString> HistoryBuffer; // 0x68
    char pad_78[0xb8];
    static UConsole* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
