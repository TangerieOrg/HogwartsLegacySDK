#include "UObject.hpp"
#include "URemoteControlBinding.hpp"
URemoteControlBinding* URemoteControlBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlBinding");
    return (URemoteControlBinding*)res;
}
