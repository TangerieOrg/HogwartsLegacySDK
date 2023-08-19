#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraComponentSettings : public UObject {
public:
    char pad_28[0xf0];
    static UNiagaraComponentSettings* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
