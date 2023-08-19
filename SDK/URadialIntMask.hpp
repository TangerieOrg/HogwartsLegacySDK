#pragma once
#include <cstdint>
#include "ESetMaskConditionType.hpp"
#include "FVector.hpp"
#include "UFieldNodeInt.hpp"
#pragma pack(push, 1)
class URadialIntMask : public UFieldNodeInt {
public:
    float Radius; // 0xc8
    FVector Position; // 0xcc
    int32_t InteriorValue; // 0xd8
    int32_t ExteriorValue; // 0xdc
    ESetMaskConditionType SetMaskCondition; // 0xe0
    char pad_e1[0x7];
    static URadialIntMask* StaticClass();
    URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, ESetMaskConditionType SetMaskConditionIn);
}; // Size: 0xe8
#pragma pack(pop)
