#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UNiagaraMeshRendererProperties;
#pragma pack(push, 1)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface {
public:
    UNiagaraMeshRendererProperties* MeshRenderer; // 0x38
    char pad_40[0x10];
    static UNiagaraDataInterfaceMeshRendererInfo* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
