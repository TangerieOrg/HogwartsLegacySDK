#include "USceneActionState_FacialEmotions.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_FacialEmotions* USceneActionState_FacialEmotions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_FacialEmotions");
    return (USceneActionState_FacialEmotions*)res;
}
