#pragma once
#include <cstdint>
#include "FWindAffectedScales.hpp"
#include "UWindAffectedOrientToTickingComponent.hpp"
#pragma pack(push, 1)
class UWindAffectedScaleOrientToTickingComponent : public UWindAffectedOrientToTickingComponent {
public:
    FWindAffectedScales WindScaling; // 0x250
    char pad_284[0xc];
    static UWindAffectedScaleOrientToTickingComponent* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
