#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UGroomAsset;
class AActor;
#pragma pack(push, 1)
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface {
public:
    UGroomAsset* DefaultSource; // 0x38
    AActor* SourceActor; // 0x40
    char pad_48[0x8];
    static UNiagaraDataInterfaceHairStrands* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
