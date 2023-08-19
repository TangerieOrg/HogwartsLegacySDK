#pragma once
#include <cstdint>
#include "UWorldSubsystem.hpp"
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UWindMapSubsystem : public UWorldSubsystem {
public:
    char pad_30[0x10];
    UMaterialParameterCollection* MaterialParams; // 0x40
    UNiagaraParameterCollection* NiagaraParams; // 0x48
    char pad_50[0x180];
    static UWindMapSubsystem* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
