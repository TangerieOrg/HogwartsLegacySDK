#include "USceneAction_ChangeOutfit.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ChangeOutfit* USceneAction_ChangeOutfit::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_ChangeOutfit");
    return (USceneAction_ChangeOutfit*)res;
}
