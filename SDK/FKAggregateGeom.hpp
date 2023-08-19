#pragma once
#include <cstdint>
#include "FKBoxElem.hpp"
#include "FKConvexElem.hpp"
#include "FKSphereElem.hpp"
#include "FKSphylElem.hpp"
#include "FKTaperedCapsuleElem.hpp"
#pragma pack(push, 1)
struct FKAggregateGeom {
    TArray<FKSphereElem> SphereElems; // 0x0
    TArray<FKBoxElem> BoxElems; // 0x10
    TArray<FKSphylElem> SphylElems; // 0x20
    TArray<FKConvexElem> ConvexElems; // 0x30
    TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
    char pad_50[0x8];
}; // Size: 0x58
#pragma pack(pop)
