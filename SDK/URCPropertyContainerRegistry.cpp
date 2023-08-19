#include "UEngineSubsystem.hpp"
#include "URCPropertyContainerRegistry.hpp"
URCPropertyContainerRegistry* URCPropertyContainerRegistry::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControlCommon.RCPropertyContainerRegistry");
    return (URCPropertyContainerRegistry*)res;
}
