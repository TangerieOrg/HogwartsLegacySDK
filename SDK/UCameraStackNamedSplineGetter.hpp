#pragma once
#include <cstdint>
#include "UCameraStackSplineGetter.hpp"
#pragma pack(push, 1)
class UCameraStackNamedSplineGetter : public UCameraStackSplineGetter {
public:
    FName SplineActorName; // 0x30
    static UCameraStackNamedSplineGetter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
