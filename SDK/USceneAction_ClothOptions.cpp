#include "FCharacterPieceType.hpp"
#include "UFloatProvider.hpp"
#include "UIntProvider.hpp"
#include "USceneAction_ClothOptions.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UVector2DProvider.hpp"
#include "UVectorProvider.hpp"
USceneAction_ClothOptions* USceneAction_ClothOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ClothOptions");
    return (USceneAction_ClothOptions*)res;
}
