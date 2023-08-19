#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMRMeshComponent;
#pragma pack(push, 1)
class UMeshReconstructorBase : public UObject {
public:
    static UMeshReconstructorBase* StaticClass();
    void StopReconstruction();
    void StartReconstruction();
    void PauseReconstruction();
    bool IsReconstructionStarted();
    bool IsReconstructionPaused();
    void DisconnectMRMesh();
    void ConnectMRMesh(UMRMeshComponent* Mesh);
}; // Size: 0x28
#pragma pack(pop)
