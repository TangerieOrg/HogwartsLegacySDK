#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#pragma pack(push, 1)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase {
public:
    FLinearColor Min; // 0x38
    FLinearColor Max; // 0x48
    static UNiagaraPreviewAxis_InterpParamLinearColor* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
