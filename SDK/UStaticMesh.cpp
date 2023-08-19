#include "FBox.hpp"
#include "FBoxSphereBounds.hpp"
#include "FPerPlatformInt.hpp"
#include "FStaticMaterial.hpp"
#include "FVector.hpp"
#include "UAssetUserData.hpp"
#include "UBodySetup.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UNavCollisionBase.hpp"
#include "UObject.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshDescription.hpp"
#include "UStaticMeshSocket.hpp"
#include "UStreamableRenderAsset.hpp"
UStaticMesh* UStaticMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StaticMesh");
    return (UStaticMesh*)res;
}
int32_t UStaticMesh::GetNumLODs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.GetNumLODs"));
    struct Params_GetNumLODs {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumLODs params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UStaticMesh::GetMinimumLODForPlatforms() {}
void UStaticMesh::SetStaticMaterials(TArray<FStaticMaterial>& InStaticMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.SetStaticMaterials"));
    struct Params_SetStaticMaterials {
        TArray<FStaticMaterial> InStaticMaterials; // 0x0
    }; // Size: 0x10
    Params_SetStaticMaterials params{};
    params.InStaticMaterials = (TArray<FStaticMaterial>)InStaticMaterials;
    ProcessEvent(func, &params);
    InStaticMaterials = params.InStaticMaterials;
}
TArray<FStaticMaterial> UStaticMesh::GetStaticMaterials() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.GetStaticMaterials"));
    struct Params_GetStaticMaterials {
        TArray<FStaticMaterial> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetStaticMaterials params{};
    ProcessEvent(func, &params);
    return (TArray<FStaticMaterial>)params.ReturnValue;
}
void UStaticMesh::RemoveSocket(UStaticMeshSocket* Socket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.RemoveSocket"));
    struct Params_RemoveSocket {
        UStaticMeshSocket* Socket; // 0x0
    }; // Size: 0x8
    Params_RemoveSocket params{};
    params.Socket = (UStaticMeshSocket*)Socket;
    ProcessEvent(func, &params);
}
int32_t UStaticMesh::GetMinimumLODForPlatform(FName& PlatformName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.GetMinimumLODForPlatform"));
    struct Params_GetMinimumLODForPlatform {
        FName PlatformName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMinimumLODForPlatform params{};
    params.PlatformName = (FName)PlatformName;
    ProcessEvent(func, &params);
    PlatformName = params.PlatformName;
    return (int32_t)params.ReturnValue;
}
int32_t UStaticMesh::GetNumSections(int32_t InLOD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.GetNumSections"));
    struct Params_GetNumSections {
        int32_t InLOD; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumSections params{};
    params.InLOD = (int32_t)InLOD;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UStaticMesh::GetMaterialIndex(FName MaterialSlotName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.GetMaterialIndex"));
    struct Params_GetMaterialIndex {
        FName MaterialSlotName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMaterialIndex params{};
    params.MaterialSlotName = (FName)MaterialSlotName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMaterialInterface* UStaticMesh::GetMaterial(int32_t MaterialIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.GetMaterial"));
    struct Params_GetMaterial {
        int32_t MaterialIndex; // 0x0
        char pad_4[0x4];
        UMaterialInterface* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMaterial params{};
    params.MaterialIndex = (int32_t)MaterialIndex;
    ProcessEvent(func, &params);
    return (UMaterialInterface*)params.ReturnValue;
}
void UStaticMesh::BuildFromStaticMeshDescriptions(TArray<UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.BuildFromStaticMeshDescriptions"));
    struct Params_BuildFromStaticMeshDescriptions {
        TArray<UStaticMeshDescription*> StaticMeshDescriptions; // 0x0
        bool bBuildSimpleCollision; // 0x10
    }; // Size: 0x11
    Params_BuildFromStaticMeshDescriptions params{};
    params.StaticMeshDescriptions = (TArray<UStaticMeshDescription*>)StaticMeshDescriptions;
    params.bBuildSimpleCollision = (bool)bBuildSimpleCollision;
    ProcessEvent(func, &params);
    StaticMeshDescriptions = params.StaticMeshDescriptions;
}
FBoxSphereBounds UStaticMesh::GetBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.GetBounds"));
    struct Params_GetBounds {
        FBoxSphereBounds ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetBounds params{};
    ProcessEvent(func, &params);
    return (FBoxSphereBounds)params.ReturnValue;
}
FBox UStaticMesh::GetBoundingBox() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.GetBoundingBox"));
    struct Params_GetBoundingBox {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetBoundingBox params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
UStaticMeshSocket* UStaticMesh::FindSocket(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.FindSocket"));
    struct Params_FindSocket {
        FName InSocketName; // 0x0
        UStaticMeshSocket* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindSocket params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (UStaticMeshSocket*)params.ReturnValue;
}
UStaticMeshDescription* UStaticMesh::CreateStaticMeshDescription(UObject* Outer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.CreateStaticMeshDescription"));
    struct Params_CreateStaticMeshDescription {
        UObject* Outer; // 0x0
        UStaticMeshDescription* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateStaticMeshDescription params{};
    params.Outer = (UObject*)Outer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStaticMeshDescription*)params.ReturnValue;
}
void UStaticMesh::AddSocket(UStaticMeshSocket* Socket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.AddSocket"));
    struct Params_AddSocket {
        UStaticMeshSocket* Socket; // 0x0
    }; // Size: 0x8
    Params_AddSocket params{};
    params.Socket = (UStaticMeshSocket*)Socket;
    ProcessEvent(func, &params);
}
FName UStaticMesh::AddMaterial(UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMesh.AddMaterial"));
    struct Params_AddMaterial {
        UMaterialInterface* Material; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddMaterial params{};
    params.Material = (UMaterialInterface*)Material;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
