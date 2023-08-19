#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface {
public:
    static UNiagaraDataInterfaceDebugDraw* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
