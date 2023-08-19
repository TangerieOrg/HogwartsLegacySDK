#include "AActor.hpp"
#include "ALODProxyContainer.hpp"
#include "FMeshOffset.hpp"
#include "UMaterialInterface.hpp"
#include "UStaticMesh.hpp"
ALODProxyContainer* ALODProxyContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LODProxyContainer");
    return (ALODProxyContainer*)res;
}
