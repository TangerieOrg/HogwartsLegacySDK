#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_DistanceWithWarp : public UCogGroupEvaluation {
public:
    float NearDistance; // 0x30
    float FarDistance; // 0x34
    float WarpDistanceByFocus; // 0x38
    char pad_3c[0x4];
    static UCogGroupEvaluation_DistanceWithWarp* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
