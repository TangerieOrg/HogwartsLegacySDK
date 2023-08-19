#pragma once
#include <cstdint>
#include "FWindAffectedParameters.hpp"
#include "UWindAffectedTickingComponent.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UWindAffectedMaterialTickingComponent : public UWindAffectedTickingComponent {
public:
    FWindAffectedParameters WindAffectedParameters; // 0x250
    char pad_274[0xc];
    static UWindAffectedMaterialTickingComponent* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
