#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMeshSpaceDeformerTool;
#pragma pack(push, 1)
class USpaceDeformerOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UMeshSpaceDeformerTool* SpaceDeformerTool; // 0x30
    static USpaceDeformerOperatorFactory* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
