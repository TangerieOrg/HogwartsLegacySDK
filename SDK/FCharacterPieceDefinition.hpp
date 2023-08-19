#pragma once
#include <cstdint>
class UCharacterPiece;
#pragma pack(push, 1)
struct FCharacterPieceDefinition {
    UCharacterPiece* CharacterPiece; // 0x0
    bool bSetCharacterPieceEvenIfNone; // 0x8
    bool bIsFlipped; // 0x9
    char pad_a[0xf6];
}; // Size: 0x100
#pragma pack(pop)
