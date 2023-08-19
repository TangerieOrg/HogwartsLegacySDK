#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCommandlet : public UObject {
public:
    FString HelpDescription; // 0x28
    FString HelpUsage; // 0x38
    FString HelpWebLink; // 0x48
    TArray<FString> HelpParamNames; // 0x58
    TArray<FString> HelpParamDescriptions; // 0x68
    uint8_t IsServer : 1; // 0x78
    uint8_t IsClient : 1; // 0x78
    uint8_t IsEditor : 1; // 0x78
    uint8_t LogToConsole : 1; // 0x78
    uint8_t ShowErrorCount : 1; // 0x78
    uint8_t ShowProgress : 1; // 0x78
    uint8_t pad_bitfield_78_6 : 2;
    char pad_79[0x7];
    static UCommandlet* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
