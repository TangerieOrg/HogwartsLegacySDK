#pragma once
#include <cstdint>
#include "FNiagaraPlatformSet.hpp"
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface {
public:
    FNiagaraPlatformSet Platforms; // 0x38
    static UNiagaraDataInterfacePlatformSet* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
