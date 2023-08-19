#pragma once
#include <cstdint>
#include "ENDISkeletalMesh_SkinningMode.hpp"
#include "ENDISkeletalMesh_SourceMode.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterface.hpp"
class AActor;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface {
public:
    ENDISkeletalMesh_SourceMode SourceMode; // 0x38
    char pad_39[0x7];
    AActor* Source; // 0x40
    FNiagaraUserParameterBinding MeshUserParameter; // 0x48
    USkeletalMeshComponent* SourceComponent; // 0x68
    ENDISkeletalMesh_SkinningMode SkinningMode; // 0x70
    char pad_71[0x7];
    TArray<FName> SamplingRegions; // 0x78
    int32_t WholeMeshLOD; // 0x88
    char pad_8c[0x4];
    TArray<FName> FilteredBones; // 0x90
    TArray<FName> FilteredSockets; // 0xa0
    FName ExcludeBoneName; // 0xb0
    uint8_t bExcludeBone : 1; // 0xb8
    uint8_t pad_bitfield_b8_1 : 7;
    char pad_b9[0x3];
    int32_t UvSetIndex; // 0xbc
    bool bRequireCurrentFrameData; // 0xc0
    char pad_c1[0x7];
    static UNiagaraDataInterfaceSkeletalMesh* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
