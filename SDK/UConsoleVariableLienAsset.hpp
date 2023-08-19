#pragma once
#include <cstdint>
#include "FConsoleVariableLienEntry.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UConsoleVariableLienAsset : public UDataAsset {
public:
    TArray<FConsoleVariableLienEntry> ConsoleVariables; // 0x30
    static UConsoleVariableLienAsset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
