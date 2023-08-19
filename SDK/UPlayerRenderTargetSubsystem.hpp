#pragma once
#include <cstdint>
#include "UWorldSubsystem.hpp"
class UPlayerRenderTarget;
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UPlayerRenderTargetSubsystem : public UWorldSubsystem {
public:
    char pad_30[0x8];
    TArray<UPlayerRenderTarget*> RenderTargets; // 0x38
    UMaterialParameterCollection* RenderTargetMaterialParams; // 0x48
    UNiagaraParameterCollection* NiagaraParameterCollection; // 0x50
    static UPlayerRenderTargetSubsystem* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
