#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceAkRTPC : public UNiagaraDataInterface {
public:
    TArray<FName> RTPCs; // 0x38
    static UNiagaraDataInterfaceAkRTPC* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
