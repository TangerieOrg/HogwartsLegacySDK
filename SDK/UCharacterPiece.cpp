#include "ECharacterPieceGenderEnum.hpp"
#include "EGloveTypeEnum.hpp"
#include "EHatTypeEnum.hpp"
#include "EPantLengthEnum.hpp"
#include "ERobeShoulderTypeEnum.hpp"
#include "ERobeTypeEnum.hpp"
#include "EShoeHeightEnum.hpp"
#include "ESleeveLengthEnum.hpp"
#include "FCharacterPieceCharacterClassification.hpp"
#include "FCharacterPieceNiagaraSystem.hpp"
#include "FCharacterPieceType.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMaterialOverride.hpp"
#include "FMeshOverride.hpp"
#include "UCharacterPiece.hpp"
#include "UClass.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UPoseAsset.hpp"
#include "USkeletalMesh.hpp"
FName UCharacterPiece::ToId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomizableCharacter.CharacterPiece.ToId"));
    struct Params_ToId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ToId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UCharacterPiece* UCharacterPiece::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.CharacterPiece");
    return (UCharacterPiece*)res;
}
