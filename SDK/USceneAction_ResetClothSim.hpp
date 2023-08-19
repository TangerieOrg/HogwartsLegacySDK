#pragma once
#include <cstdint>
#include "FCharacterPieceType.hpp"
#include "USceneAction_ResetClothSim_ClothingTeleportMode.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ResetClothSim : public USceneRigObjectActionBase {
public:
    bool bPiecesListIsInclusive; // 0xa0
    char pad_a1[0x7];
    TArray<FCharacterPieceType> PiecesList; // 0xa8
    USceneAction_ResetClothSim_ClothingTeleportMode ClothTeleportMode; // 0xb8
    char pad_b9[0x7];
    static USceneAction_ResetClothSim* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
