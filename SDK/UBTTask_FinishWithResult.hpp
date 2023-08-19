#pragma once
#include <cstdint>
#include "EBTNodeResult\Type.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_FinishWithResult : public UBTTaskNode {
public:
    EBTNodeResult::Type Result; // 0x70
    char pad_71[0x7];
    static UBTTask_FinishWithResult* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
