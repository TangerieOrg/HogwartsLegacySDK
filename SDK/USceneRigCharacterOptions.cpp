#include "UInterface.hpp"
#include "USceneRigCharacterOptions.hpp"
USceneRigCharacterOptions* USceneRigCharacterOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigCharacterOptions");
    return (USceneRigCharacterOptions*)res;
}
