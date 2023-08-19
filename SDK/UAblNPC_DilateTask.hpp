#pragma once
#include <cstdint>
#include "ENPC_DilateSource.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_DilateTask : public UAblAbilityTask {
public:
    ENPC_DilateSource Source; // 0x70
    char pad_71[0x3];
    float DilationParam; // 0x74
    float DilationTime; // 0x78
    char pad_7c[0x4];
    static UAblNPC_DilateTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
