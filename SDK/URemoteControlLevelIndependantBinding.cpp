#include "URemoteControlBinding.hpp"
#include "URemoteControlLevelIndependantBinding.hpp"
URemoteControlLevelIndependantBinding* URemoteControlLevelIndependantBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlLevelIndependantBinding");
    return (URemoteControlLevelIndependantBinding*)res;
}
