#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULumosScalabilityModifyBase : public UObject {
public:
    bool bContinueModifiers; // 0x28
    char pad_29[0x7];
    static ULumosScalabilityModifyBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
