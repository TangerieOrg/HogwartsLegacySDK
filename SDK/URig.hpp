#pragma once
#include <cstdint>
#include "FNode.hpp"
#include "FTransformBase.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class URig : public UObject {
public:
    char pad_28[0x8];
    TArray<FTransformBase> TransformBases; // 0x30
    TArray<FNode> Nodes; // 0x40
    static URig* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
