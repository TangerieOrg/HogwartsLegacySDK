#include "UActorProvider.hpp"
#include "UPhysicsAsset.hpp"
#include "USceneAction_ClothCollision.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ClothCollision* USceneAction_ClothCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ClothCollision");
    return (USceneAction_ClothCollision*)res;
}
