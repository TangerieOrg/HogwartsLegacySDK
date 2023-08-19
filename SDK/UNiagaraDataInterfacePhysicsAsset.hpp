#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UPhysicsAsset;
class AActor;
#pragma pack(push, 1)
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface {
public:
    UPhysicsAsset* DefaultSource; // 0x38
    AActor* SourceActor; // 0x40
    char pad_48[0x20];
    static UNiagaraDataInterfacePhysicsAsset* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
