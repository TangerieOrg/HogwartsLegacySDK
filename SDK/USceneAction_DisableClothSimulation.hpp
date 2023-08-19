#pragma once
#include <cstdint>
#include "FCharacterPieceType.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_DisableClothSimulation : public USceneRigObjectActionBase {
public:
    float BlendInTime; // 0xa0
    float BlendOutTime; // 0xa4
    bool bPiecesListIsInclusive; // 0xa8
    char pad_a9[0x7];
    TArray<FCharacterPieceType> PiecesList; // 0xb0
    static USceneAction_DisableClothSimulation* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
