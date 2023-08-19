#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "FOdcFlags.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_CreatureCheckNavmeshAreaFlag : public UBTDecorator {
public:
    bool bUseCreaturePreferredAreaFlags; // 0x68
    char pad_69[0x3];
    FOdcFlags CustomAreaFlags; // 0x6c
    FAIDataProviderFloatValue ParameterizedHorizontalQueryRadius; // 0x70
    FAIDataProviderFloatValue ParameterizedVerticalQueryRadius; // 0xa8
    static UBTDecorator_CreatureCheckNavmeshAreaFlag* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
