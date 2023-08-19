#pragma once
#include <cstdint>
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#pragma pack(push, 1)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase {
public:
    int32_t Min; // 0x38
    int32_t Max; // 0x3c
    static UNiagaraPreviewAxis_InterpParamInt32* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
