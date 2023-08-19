#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceAccessibilityColorRemap : public UNiagaraDataInterface {
public:
    FName ColorTableTag; // 0x38
    static UNiagaraDataInterfaceAccessibilityColorRemap* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
