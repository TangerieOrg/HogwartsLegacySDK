#pragma once
#include <cstdint>
#include "ETestSuccess.hpp"
#include "FMastermindMessage.hpp"
class UMastermindJsonObject;
#pragma pack(push, 1)
struct FMastermindCommandResult : public FMastermindMessage {
    bool bIsSuccess; // 0x8
    char pad_9[0x7];
    FString ErrorMessage; // 0x10
    ETestSuccess TestSuccess; // 0x20
    char pad_21[0x7];
    UMastermindJsonObject* Data; // 0x28
    TArray<FString> Artifacts; // 0x30
}; // Size: 0x40
#pragma pack(pop)
