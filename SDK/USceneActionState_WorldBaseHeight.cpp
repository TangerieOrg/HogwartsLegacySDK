#include "USceneActionState_WorldBaseHeight.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_WorldBaseHeight* USceneActionState_WorldBaseHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WorldBaseHeight");
    return (USceneActionState_WorldBaseHeight*)res;
}
