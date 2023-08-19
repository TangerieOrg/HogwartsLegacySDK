#pragma once
#include <cstdint>
#include "EBTParallelMode\Type.hpp"
#include "UBTCompositeNode.hpp"
#pragma pack(push, 1)
class UBTComposite_SimpleParallel : public UBTCompositeNode {
public:
    EBTParallelMode::Type FinishMode; // 0x90
    char pad_91[0x7];
    static UBTComposite_SimpleParallel* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
