#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraEditorDataBase : public UObject {
public:
    static UNiagaraEditorDataBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
