#pragma once
#include <cstdint>
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#pragma pack(push, 1)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase {
public:
    float Min; // 0x38
    float Max; // 0x3c
    static UNiagaraPreviewAxis_InterpParamFloat* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
