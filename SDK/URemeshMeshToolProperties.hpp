#pragma once
#include <cstdint>
#include "ERemeshSmoothingType.hpp"
#include "ERemeshType.hpp"
#include "URemeshProperties.hpp"
#pragma pack(push, 1)
class URemeshMeshToolProperties : public URemeshProperties {
public:
    int32_t TargetTriangleCount; // 0x70
    ERemeshSmoothingType SmoothingType; // 0x74
    bool bDiscardAttributes; // 0x75
    bool bShowWireframe; // 0x76
    bool bShowGroupColors; // 0x77
    ERemeshType RemeshType; // 0x78
    char pad_79[0x3];
    int32_t RemeshIterations; // 0x7c
    bool bUseTargetEdgeLength; // 0x80
    char pad_81[0x3];
    float TargetEdgeLength; // 0x84
    bool bReproject; // 0x88
    char pad_89[0x7];
    static URemeshMeshToolProperties* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
