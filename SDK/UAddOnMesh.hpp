#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeletalMeshComponent;
class UNiagaraComponent;
#pragma pack(push, 1)
class UAddOnMesh : public UObject {
public:
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x28
    char pad_30[0x50];
    TArray<UNiagaraComponent*> NiagaraComponents; // 0x80
    char pad_90[0x8];
    static UAddOnMesh* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
