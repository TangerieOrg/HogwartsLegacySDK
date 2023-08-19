#include "USceneActionState_ChangeOutfit.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ChangeOutfit* USceneActionState_ChangeOutfit::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_ChangeOutfit");
    return (USceneActionState_ChangeOutfit*)res;
}
