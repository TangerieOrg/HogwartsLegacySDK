#pragma once
#include <cstdint>
#include "ENDILandscape_SourceMode.hpp"
#include "UNiagaraDataInterface.hpp"
class AActor;
class UPhysicalMaterial;
#pragma pack(push, 1)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface {
public:
    AActor* SourceLandscape; // 0x38
    ENDILandscape_SourceMode SourceMode; // 0x40
    char pad_41[0x7];
    TArray<UPhysicalMaterial*> PhysicalMaterials; // 0x48
    static UNiagaraDataInterfaceLandscape* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
