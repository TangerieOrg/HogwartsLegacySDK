#pragma once
#include <cstdint>
#include "FNiagaraDataInterfaceAkEventInfo.hpp"
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceAkEventPerParticle : public UNiagaraDataInterface {
public:
    TArray<FNiagaraDataInterfaceAkEventInfo> Events; // 0x38
    static UNiagaraDataInterfaceAkEventPerParticle* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
