#pragma once
#include <cstdint>
#include "FWindAffectedParameters.hpp"
#include "UWindAffectedScaleOrientToTickingComponent.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UWindAffectedUberTickingComponent : public UWindAffectedScaleOrientToTickingComponent {
public:
    FWindAffectedParameters WindAffectedParameters; // 0x290
    char pad_2b4[0xc];
    static UWindAffectedUberTickingComponent* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
