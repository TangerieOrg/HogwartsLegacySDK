#include "FHLODProxyMesh.hpp"
#include "UHLODProxy.hpp"
#include "UObject.hpp"
UHLODProxy* UHLODProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HLODProxy");
    return (UHLODProxy*)res;
}
