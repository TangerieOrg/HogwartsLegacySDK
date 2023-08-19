#pragma once
#include <cstdint>
#include "ENDIExport_GPUAllocationMode.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface {
public:
    FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
    ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58
    char pad_59[0x3];
    int32_t GPUAllocationFixedSize; // 0x5c
    float GPUAllocationPerParticleSize; // 0x60
    char pad_64[0x4];
    static UNiagaraDataInterfaceExport* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
