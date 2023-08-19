#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#pragma pack(push, 1)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase {
public:
    FVector Min; // 0x38
    FVector Max; // 0x44
    static UNiagaraPreviewAxis_InterpParamVector* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
