#pragma once
#include <cstdint>
#include "EReactionPlayMultiFxTaskType.hpp"
#include "UAblPlayMultiFxTask.hpp"
#pragma pack(push, 1)
class UAblReactionPlayMultiFxTask : public UAblPlayMultiFxTask {
public:
    EReactionPlayMultiFxTaskType ReactionInfoType; // 0xd0
    char pad_d1[0x7];
    static UAblReactionPlayMultiFxTask* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
