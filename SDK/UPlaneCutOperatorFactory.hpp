#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPlaneCutTool;
#pragma pack(push, 1)
class UPlaneCutOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UPlaneCutTool* CutTool; // 0x30
    char pad_38[0x8];
    static UPlaneCutOperatorFactory* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
