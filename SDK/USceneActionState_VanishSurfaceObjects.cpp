#include "USceneActionState_VanishSurfaceObjects.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_VanishSurfaceObjects* USceneActionState_VanishSurfaceObjects::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_VanishSurfaceObjects");
    return (USceneActionState_VanishSurfaceObjects*)res;
}
