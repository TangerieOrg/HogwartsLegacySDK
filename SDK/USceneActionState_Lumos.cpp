#include "USceneActionState_Lumos.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_Lumos* USceneActionState_Lumos::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_Lumos");
    return (USceneActionState_Lumos*)res;
}
