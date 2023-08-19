#include "UObject.hpp"
#include "URemoteControlExposeRegistry.hpp"
URemoteControlExposeRegistry* URemoteControlExposeRegistry::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlExposeRegistry");
    return (URemoteControlExposeRegistry*)res;
}
