#pragma once
#include <cstdint>
#include "FVector4.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#pragma pack(push, 1)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase {
public:
    char pad_38[0x8];
    FVector4 Min; // 0x40
    FVector4 Max; // 0x50
    static UNiagaraPreviewAxis_InterpParamVector4* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
