#pragma once
#include <cstdint>
#include "FCustomMeshTriangle.hpp"
#include "UMeshComponent.hpp"
#pragma pack(push, 1)
class UCustomMeshComponent : public UMeshComponent {
public:
    char pad_4b0[0x10];
    static UCustomMeshComponent* StaticClass();
    bool SetCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);
}; // Size: 0x4c0
#pragma pack(pop)
