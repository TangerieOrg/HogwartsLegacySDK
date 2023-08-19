#include "USceneActionState_ClothRobeMount.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ClothRobeMount* USceneActionState_ClothRobeMount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ClothRobeMount");
    return (USceneActionState_ClothRobeMount*)res;
}
