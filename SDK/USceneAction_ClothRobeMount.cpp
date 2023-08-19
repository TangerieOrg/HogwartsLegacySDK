#include "FClothMountTargets.hpp"
#include "USceneAction_ClothRobeMount.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ClothRobeMount* USceneAction_ClothRobeMount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ClothRobeMount");
    return (USceneAction_ClothRobeMount*)res;
}
