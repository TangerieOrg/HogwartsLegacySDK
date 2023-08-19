#pragma once
#include <cstdint>
#include "UObject.hpp"
class UEdgeLoopInsertionTool;
#pragma pack(push, 1)
class UEdgeLoopInsertionOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UEdgeLoopInsertionTool* Tool; // 0x30
    static UEdgeLoopInsertionOperatorFactory* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
