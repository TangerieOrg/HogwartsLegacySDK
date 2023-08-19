#include "FCharacterPieceType.hpp"
#include "USceneAction_DisableClothSimulation.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_DisableClothSimulation* USceneAction_DisableClothSimulation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_DisableClothSimulation");
    return (USceneAction_DisableClothSimulation*)res;
}
