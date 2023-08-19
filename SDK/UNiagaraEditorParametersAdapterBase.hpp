#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraEditorParametersAdapterBase : public UObject {
public:
    static UNiagaraEditorParametersAdapterBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
