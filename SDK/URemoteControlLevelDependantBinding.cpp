#include "URemoteControlBinding.hpp"
#include "URemoteControlLevelDependantBinding.hpp"
URemoteControlLevelDependantBinding* URemoteControlLevelDependantBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlLevelDependantBinding");
    return (URemoteControlLevelDependantBinding*)res;
}
