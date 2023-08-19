#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsScalarVar.hpp"
class UEnvironmentalGlobalsCustomScalarBase;
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalar : public UEnvironmentalGlobalsScalarVar {
public:
    UEnvironmentalGlobalsCustomScalarBase* Scalar; // 0x48
    static UEnvironmentalGlobalsCustomScalar* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
