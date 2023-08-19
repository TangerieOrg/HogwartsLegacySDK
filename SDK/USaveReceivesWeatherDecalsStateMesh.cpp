#include "AActor.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
#include "USaveReceivesWeatherDecalsStateMesh.hpp"
USaveReceivesWeatherDecalsStateMesh* USaveReceivesWeatherDecalsStateMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SaveReceivesWeatherDecalsStateMesh");
    return (USaveReceivesWeatherDecalsStateMesh*)res;
}
void USaveReceivesWeatherDecalsStateMesh::SetState(bool ReceivesWeatherDecals, bool markRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.SaveReceivesWeatherDecalsStateMesh.SetState"));
    struct Params_SetState {
        bool ReceivesWeatherDecals; // 0x0
        bool markRenderStateDirty; // 0x1
    }; // Size: 0x2
    Params_SetState params{};
    params.ReceivesWeatherDecals = (bool)ReceivesWeatherDecals;
    params.markRenderStateDirty = (bool)markRenderStateDirty;
    ProcessEvent(func, &params);
}
void USaveReceivesWeatherDecalsStateMesh::AddMesh(UMeshComponent* Mesh, bool markRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.SaveReceivesWeatherDecalsStateMesh.AddMesh"));
    struct Params_AddMesh {
        UMeshComponent* Mesh; // 0x0
        bool markRenderStateDirty; // 0x8
    }; // Size: 0x9
    Params_AddMesh params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.markRenderStateDirty = (bool)markRenderStateDirty;
    ProcessEvent(func, &params);
}
void USaveReceivesWeatherDecalsStateMesh::RestoreState(bool markRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.SaveReceivesWeatherDecalsStateMesh.RestoreState"));
    struct Params_RestoreState {
        bool markRenderStateDirty; // 0x0
    }; // Size: 0x1
    Params_RestoreState params{};
    params.markRenderStateDirty = (bool)markRenderStateDirty;
    ProcessEvent(func, &params);
}
USaveReceivesWeatherDecalsStateMesh* USaveReceivesWeatherDecalsStateMesh::CreateMeshPool(AActor* Owner, bool ReceivesWeatherDecals) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.SaveReceivesWeatherDecalsStateMesh.CreateMeshPool"));
    struct Params_CreateMeshPool {
        AActor* Owner; // 0x0
        bool ReceivesWeatherDecals; // 0x8
        char pad_9[0x7];
        USaveReceivesWeatherDecalsStateMesh* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateMeshPool params{};
    params.Owner = (AActor*)Owner;
    params.ReceivesWeatherDecals = (bool)ReceivesWeatherDecals;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USaveReceivesWeatherDecalsStateMesh*)params.ReturnValue;
}
USaveReceivesWeatherDecalsStateMesh* USaveReceivesWeatherDecalsStateMesh::CreateMeshAutoOwner(UMeshComponent* Mesh, bool ReceivesWeatherDecals, bool markRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.SaveReceivesWeatherDecalsStateMesh.CreateMeshAutoOwner"));
    struct Params_CreateMeshAutoOwner {
        UMeshComponent* Mesh; // 0x0
        bool ReceivesWeatherDecals; // 0x8
        bool markRenderStateDirty; // 0x9
        char pad_a[0x6];
        USaveReceivesWeatherDecalsStateMesh* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateMeshAutoOwner params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.ReceivesWeatherDecals = (bool)ReceivesWeatherDecals;
    params.markRenderStateDirty = (bool)markRenderStateDirty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USaveReceivesWeatherDecalsStateMesh*)params.ReturnValue;
}
USaveReceivesWeatherDecalsStateMesh* USaveReceivesWeatherDecalsStateMesh::CreateMesh(AActor* Owner, UMeshComponent* Mesh, bool ReceivesWeatherDecals, bool markRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.SaveReceivesWeatherDecalsStateMesh.CreateMesh"));
    struct Params_CreateMesh {
        AActor* Owner; // 0x0
        UMeshComponent* Mesh; // 0x8
        bool ReceivesWeatherDecals; // 0x10
        bool markRenderStateDirty; // 0x11
        char pad_12[0x6];
        USaveReceivesWeatherDecalsStateMesh* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateMesh params{};
    params.Owner = (AActor*)Owner;
    params.Mesh = (UMeshComponent*)Mesh;
    params.ReceivesWeatherDecals = (bool)ReceivesWeatherDecals;
    params.markRenderStateDirty = (bool)markRenderStateDirty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USaveReceivesWeatherDecalsStateMesh*)params.ReturnValue;
}
