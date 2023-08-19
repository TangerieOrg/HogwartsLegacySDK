#include "FVanishmentEvent.hpp"
#include "USceneAction_VanishSurfaceObjects.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_VanishSurfaceObjects* USceneAction_VanishSurfaceObjects::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_VanishSurfaceObjects");
    return (USceneAction_VanishSurfaceObjects*)res;
}
