#include "USceneActionState_TimeDilation.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_TimeDilation* USceneActionState_TimeDilation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_TimeDilation");
    return (USceneActionState_TimeDilation*)res;
}
