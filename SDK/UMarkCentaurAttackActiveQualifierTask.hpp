#pragma once
#include <cstdint>
#include "UQualifierTask.hpp"
#pragma pack(push, 1)
class UMarkCentaurAttackActiveQualifierTask : public UQualifierTask {
public:
    FName AttackDescriptorName; // 0x28
    static UMarkCentaurAttackActiveQualifierTask* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
