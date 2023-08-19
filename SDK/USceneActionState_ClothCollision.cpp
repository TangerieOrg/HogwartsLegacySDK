#include "USceneActionState_ClothCollision.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ClothCollision* USceneActionState_ClothCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ClothCollision");
    return (USceneActionState_ClothCollision*)res;
}
