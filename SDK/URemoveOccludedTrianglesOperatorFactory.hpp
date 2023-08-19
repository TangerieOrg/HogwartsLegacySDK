#pragma once
#include <cstdint>
#include "UObject.hpp"
class URemoveOccludedTrianglesTool;
#pragma pack(push, 1)
class URemoveOccludedTrianglesOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    URemoveOccludedTrianglesTool* Tool; // 0x30
    char pad_38[0x8];
    static URemoveOccludedTrianglesOperatorFactory* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
