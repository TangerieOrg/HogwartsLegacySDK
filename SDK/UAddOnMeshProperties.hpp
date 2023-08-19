#pragma once
#include <cstdint>
#include "UObject.hpp"
class UCharacterPiece;
#pragma pack(push, 1)
class UAddOnMeshProperties : public UObject {
public:
    UCharacterPiece* CharacterPiece; // 0x28
    char pad_30[0xc];
    bool bIsFlipped; // 0x3c
    char pad_3d[0xf3];
    static UAddOnMeshProperties* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
