#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraMessageDataBase : public UObject {
public:
    static UNiagaraMessageDataBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
