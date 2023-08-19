#include "USceneActionState_ResetClothSim.hpp"
#include "USceneAction_ResetClothSim.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ResetClothSim* USceneActionState_ResetClothSim::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ResetClothSim");
    return (USceneActionState_ResetClothSim*)res;
}
