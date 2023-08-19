#include "FSceneRigSocketEntry.hpp"
#include "USceneRigProvider.hpp"
#include "USceneRig_BySocket.hpp"
USceneRig_BySocket* USceneRig_BySocket::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_BySocket");
    return (USceneRig_BySocket*)res;
}
