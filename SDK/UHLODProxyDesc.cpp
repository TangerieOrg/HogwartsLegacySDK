#include "UHLODProxyDesc.hpp"
#include "UObject.hpp"
UHLODProxyDesc* UHLODProxyDesc::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HLODProxyDesc");
    return (UHLODProxyDesc*)res;
}
