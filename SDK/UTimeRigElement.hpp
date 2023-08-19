#pragma once
#include <cstdint>
#include "FTimeRigNamedSymbol.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTimeRigElement : public UObject {
public:
    bool Enabled; // 0x28
    char pad_29[0x7];
    UTimeRigElement* ParentElement; // 0x30
    FName UserName; // 0x38
    TArray<FTimeRigNamedSymbol> NamedSymbols; // 0x40
    static UTimeRigElement* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
