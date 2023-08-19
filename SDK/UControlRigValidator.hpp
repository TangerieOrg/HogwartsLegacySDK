#pragma once
#include <cstdint>
#include "UObject.hpp"
class UControlRigValidationPass;
#pragma pack(push, 1)
class UControlRigValidator : public UObject {
public:
    TArray<UControlRigValidationPass*> Passes; // 0x28
    char pad_38[0x30];
    static UControlRigValidator* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
