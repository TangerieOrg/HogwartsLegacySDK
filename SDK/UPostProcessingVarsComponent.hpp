#pragma once
#include <cstdint>
#include "UPostProcessingVarsComponentBase.hpp"
class UPostProcessingVar;
#pragma pack(push, 1)
class UPostProcessingVarsComponent : public UPostProcessingVarsComponentBase {
public:
    TArray<UPostProcessingVar*> Vars; // 0x870
    static UPostProcessingVarsComponent* StaticClass();
}; // Size: 0x880
#pragma pack(pop)
