#pragma once
#include <cstdint>
#include "UObject.hpp"
class UGroupEdgeInsertionTool;
#pragma pack(push, 1)
class UGroupEdgeInsertionOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UGroupEdgeInsertionTool* Tool; // 0x30
    static UGroupEdgeInsertionOperatorFactory* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
