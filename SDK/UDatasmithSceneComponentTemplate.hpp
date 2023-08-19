#pragma once
#include <cstdint>
#include "EComponentMobility\Type.hpp"
#include "FTransform.hpp"
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate {
public:
    FTransform RelativeTransform; // 0x30
    EComponentMobility::Type Mobility; // 0x60
    char pad_61[0x2f];
    bool bVisible; // 0x90
    char pad_91[0x5f];
    static UDatasmithSceneComponentTemplate* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
