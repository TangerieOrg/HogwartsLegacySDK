#pragma once
#include <cstdint>
#include "FMultiFX2Handle.hpp"
#include "UModExtension.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class URPGModExtension_PlayerMultiFX2 : public UModExtension {
public:
    TArray<UMultiFX2_Base*> OnAddFX2; // 0x28
    TArray<UMultiFX2_Base*> OnAppliedFX2; // 0x38
    bool bOnlyOnFirstApplied; // 0x48
    bool bOnlyAllowOneApplied; // 0x49
    bool bEndAppliedOnRemoved; // 0x4a
    char pad_4b[0x5];
    FMultiFX2Handle OnAddHandle; // 0x50
    FMultiFX2Handle OnAppliedHandle; // 0x58
    static URPGModExtension_PlayerMultiFX2* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
