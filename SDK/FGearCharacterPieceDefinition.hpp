#pragma once
#include <cstdint>
#include "FMaterialParameterDefinition.hpp"
class UCharacterPiece;
#pragma pack(push, 1)
struct FGearCharacterPieceDefinition {
    UCharacterPiece* CharacterPiece; // 0x0
    FMaterialParameterDefinition MaterialParams; // 0x8
    char pad_f8[0x50];
}; // Size: 0x148
#pragma pack(pop)
