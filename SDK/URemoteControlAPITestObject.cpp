#include "ERemoteControlEnum\Type.hpp"
#include "ERemoteControlEnumClass.hpp"
#include "FRemoteControlTestStructOuter.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#include "URemoteControlAPITestObject.hpp"
URemoteControlAPITestObject* URemoteControlAPITestObject::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlAPITestObject");
    return (URemoteControlAPITestObject*)res;
}
