#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#pragma pack(push, 1)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase {
public:
    FVector2D Min; // 0x38
    FVector2D Max; // 0x40
    static UNiagaraPreviewAxis_InterpParamVector2D* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
