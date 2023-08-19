#include "UFunction.hpp"
#include "UMRMeshComponent.hpp"
#include "UMeshReconstructorBase.hpp"
#include "UObject.hpp"
UMeshReconstructorBase* UMeshReconstructorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MRMesh.MeshReconstructorBase");
    return (UMeshReconstructorBase*)res;
}
bool UMeshReconstructorBase::IsReconstructionStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted"));
    struct Params_IsReconstructionStarted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReconstructionStarted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMeshReconstructorBase::StopReconstruction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction"));
    struct Params_StopReconstruction {
    }; // Size: 0x0
    Params_StopReconstruction params{};
    ProcessEvent(func, &params);
}
void UMeshReconstructorBase::StartReconstruction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction"));
    struct Params_StartReconstruction {
    }; // Size: 0x0
    Params_StartReconstruction params{};
    ProcessEvent(func, &params);
}
bool UMeshReconstructorBase::IsReconstructionPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused"));
    struct Params_IsReconstructionPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReconstructionPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMeshReconstructorBase::PauseReconstruction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction"));
    struct Params_PauseReconstruction {
    }; // Size: 0x0
    Params_PauseReconstruction params{};
    ProcessEvent(func, &params);
}
void UMeshReconstructorBase::DisconnectMRMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh"));
    struct Params_DisconnectMRMesh {
    }; // Size: 0x0
    Params_DisconnectMRMesh params{};
    ProcessEvent(func, &params);
}
void UMeshReconstructorBase::ConnectMRMesh(UMRMeshComponent* Mesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh"));
    struct Params_ConnectMRMesh {
        UMRMeshComponent* Mesh; // 0x0
    }; // Size: 0x8
    Params_ConnectMRMesh params{};
    params.Mesh = (UMRMeshComponent*)Mesh;
    ProcessEvent(func, &params);
}
