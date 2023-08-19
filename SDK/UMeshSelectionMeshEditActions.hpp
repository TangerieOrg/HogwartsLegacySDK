#pragma once
#include <cstdint>
#include "UMeshSelectionToolActionPropertySet.hpp"
#pragma pack(push, 1)
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet {
public:
    static UMeshSelectionMeshEditActions* StaticClass();
    void SeparateTriangles();
    void FlipNormals();
    void DisconnectTriangles();
    void DeleteTriangles();
    void CreatePolygroup();
}; // Size: 0x68
#pragma pack(pop)
