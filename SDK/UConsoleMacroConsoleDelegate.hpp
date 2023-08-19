#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UConsoleMacroConsoleDelegate : public UObject {
public:
    FName CommandKey; // 0x28
    FString Command; // 0x30
    FString Help; // 0x40
    bool bHasExecuted; // 0x50
    char pad_51[0xf];
    static UConsoleMacroConsoleDelegate* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
