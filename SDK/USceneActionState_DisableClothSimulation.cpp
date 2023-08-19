#include "USceneActionState_DisableClothSimulation.hpp"
#include "USceneAction_DisableClothSimulation.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_DisableClothSimulation* USceneActionState_DisableClothSimulation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_DisableClothSimulation");
    return (USceneActionState_DisableClothSimulation*)res;
}
