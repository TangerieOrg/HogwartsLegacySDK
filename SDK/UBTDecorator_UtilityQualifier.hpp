#pragma once
#include <cstdint>
#include "FConsiderationWithDisplayName.hpp"
#include "UBTDecorator.hpp"
class UQualifierOptions;
class UQualifierTask;
#pragma pack(push, 1)
class UBTDecorator_UtilityQualifier : public UBTDecorator {
public:
    char pad_68[0x8];
    FName ActionName; // 0x70
    TArray<FConsiderationWithDisplayName> Considerations; // 0x78
    UQualifierOptions* QualifierOptions; // 0x88
    TArray<FConsiderationWithDisplayName> OptionConsiderations; // 0x90
    TArray<UQualifierTask*> QualifierTasks; // 0xa0
    bool bRestartTreeOnOptionChange; // 0xb0
    char pad_b1[0x2f];
    static UBTDecorator_UtilityQualifier* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
