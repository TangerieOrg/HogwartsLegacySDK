#pragma once
#include <cstdint>
#include "FUserConsoleVariableBool.hpp"
#include "FUserConsoleVariableFloat.hpp"
#include "FUserConsoleVariableInt.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UUserConsoleVariables : public UDataAsset {
public:
    TArray<FUserConsoleVariableBool> Bools; // 0x30
    TArray<FUserConsoleVariableFloat> Floats; // 0x40
    TArray<FUserConsoleVariableInt> Ints; // 0x50
    static UUserConsoleVariables* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
