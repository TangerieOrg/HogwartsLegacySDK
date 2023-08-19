#include "UObject.hpp"
#include "URemoteControlTestObject.hpp"
URemoteControlTestObject* URemoteControlTestObject::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlTestObject");
    return (URemoteControlTestObject*)res;
}
