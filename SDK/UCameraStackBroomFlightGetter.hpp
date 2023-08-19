#pragma once
#include <cstdint>
#include "UCameraStackSplineGetter.hpp"
#pragma pack(push, 1)
class UCameraStackBroomFlightGetter : public UCameraStackSplineGetter {
public:
    static UCameraStackBroomFlightGetter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
