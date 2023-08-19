#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EGraphType {
    GT_Function = 0,
    GT_Ubergraph = 1,
    GT_Macro = 2,
    GT_Animation = 3,
    GT_StateMachine = 4,
    GT_MAX = 5,
};
#pragma pack(pop)
