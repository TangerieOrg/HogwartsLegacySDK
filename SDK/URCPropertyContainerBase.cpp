#include "UObject.hpp"
#include "URCPropertyContainerBase.hpp"
URCPropertyContainerBase* URCPropertyContainerBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControlCommon.RCPropertyContainerBase");
    return (URCPropertyContainerBase*)res;
}
