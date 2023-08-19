#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EInterpCurveMode : uint8_t {
    CIM_Linear = 0,
    CIM_CurveAuto = 1,
    CIM_Constant = 2,
    CIM_CurveUser = 3,
    CIM_CurveBreak = 4,
    CIM_CurveAutoClamped = 5,
    CIM_MAX = 6,
};
#pragma pack(pop)
