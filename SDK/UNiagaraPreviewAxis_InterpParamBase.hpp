#pragma once
#include <cstdint>
#include "UNiagaraPreviewAxis.hpp"
#pragma pack(push, 1)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis {
public:
    FName Param; // 0x28
    int32_t Count; // 0x30
    char pad_34[0x4];
    static UNiagaraPreviewAxis_InterpParamBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
