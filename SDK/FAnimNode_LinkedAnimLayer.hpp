#pragma once
#include <cstdint>
#include "FAnimNode_LinkedAnimGraph.hpp"
class UClass;
#pragma pack(push, 1)
struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph {
    UClass* Interface; // 0xa0
    FName Layer; // 0xa8
}; // Size: 0xb0
#pragma pack(pop)
