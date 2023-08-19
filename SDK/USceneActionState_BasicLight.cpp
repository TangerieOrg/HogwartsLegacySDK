#include "ULocalLightComponent.hpp"
#include "USceneActionState_BasicLight.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_BasicLight* USceneActionState_BasicLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_BasicLight");
    return (USceneActionState_BasicLight*)res;
}
