#include "UInterface.hpp"
#include "USceneRigGameOptions.hpp"
USceneRigGameOptions* USceneRigGameOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigGameOptions");
    return (USceneRigGameOptions*)res;
}
