#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UHoudiniPointCache;
#pragma pack(push, 1)
class UNiagaraDataInterfaceHoudini : public UNiagaraDataInterface {
public:
    UHoudiniPointCache* HoudiniPointCacheAsset; // 0x38
    static UNiagaraDataInterfaceHoudini* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
