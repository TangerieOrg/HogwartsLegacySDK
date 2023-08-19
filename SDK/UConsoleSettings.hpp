#pragma once
#include <cstdint>
#include "FAutoCompleteCommand.hpp"
#include "FColor.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UConsoleSettings : public UObject {
public:
    int32_t MaxScrollbackSize; // 0x28
    char pad_2c[0x4];
    TArray<FAutoCompleteCommand> ManualAutoCompleteList; // 0x30
    TArray<FString> AutoCompleteMapPaths; // 0x40
    float BackgroundOpacityPercentage; // 0x50
    bool bOrderTopToBottom; // 0x54
    bool bDisplayHelpInAutoComplete; // 0x55
    char pad_56[0x2];
    FColor InputColor; // 0x58
    FColor HistoryColor; // 0x5c
    FColor AutoCompleteCommandColor; // 0x60
    FColor AutoCompleteCVarColor; // 0x64
    FColor AutoCompleteFadedColor; // 0x68
    char pad_6c[0x4];
    static UConsoleSettings* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
