#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_KillBystanders : public USceneRigObjectActionBase {
public:
    float KillPct; // 0xa0
    char pad_a4[0x4];
    static USceneAction_KillBystanders* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
