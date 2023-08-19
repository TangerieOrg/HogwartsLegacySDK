#pragma once
#include <cstdint>
#include "ENDIStaticMesh_SourceMode.hpp"
#include "FNDIStaticMeshSectionFilter.hpp"
#include "UNiagaraDataInterface.hpp"
class UStaticMesh;
class AActor;
class UStaticMeshComponent;
#pragma pack(push, 1)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface {
public:
    ENDIStaticMesh_SourceMode SourceMode; // 0x38
    char pad_39[0x7];
    UStaticMesh* DefaultMesh; // 0x40
    AActor* Source; // 0x48
    UStaticMeshComponent* SourceComponent; // 0x50
    FNDIStaticMeshSectionFilter SectionFilter; // 0x58
    bool bUsePhysicsBodyVelocity; // 0x68
    char pad_69[0x7];
    TArray<FName> FilteredSockets; // 0x70
    char pad_80[0x8];
    static UNiagaraDataInterfaceStaticMesh* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
