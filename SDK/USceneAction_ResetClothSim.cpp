#include "FCharacterPieceType.hpp"
#include "USceneAction_ResetClothSim.hpp"
#include "USceneAction_ResetClothSim_ClothingTeleportMode.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ResetClothSim* USceneAction_ResetClothSim::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ResetClothSim");
    return (USceneAction_ResetClothSim*)res;
}
