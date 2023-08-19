#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraScriptBase : public UObject {
public:
    static UNiagaraScriptBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
