#include "USceneActionState_TimeDate.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_TimeDate* USceneActionState_TimeDate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_TimeDate");
    return (USceneActionState_TimeDate*)res;
}
