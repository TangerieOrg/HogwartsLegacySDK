#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraParameterDefinitionsBase : public UObject {
public:
    static UNiagaraParameterDefinitionsBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
