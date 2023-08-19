#include "USceneRigProvider.hpp"
#include "USceneRig_ByPlayerHouse.hpp"
USceneRig_ByPlayerHouse* USceneRig_ByPlayerHouse::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_ByPlayerHouse");
    return (USceneRig_ByPlayerHouse*)res;
}
