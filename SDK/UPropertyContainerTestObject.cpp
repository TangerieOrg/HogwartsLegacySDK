#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#include "UPropertyContainerTestObject.hpp"
UPropertyContainerTestObject* UPropertyContainerTestObject::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControlCommon.PropertyContainerTestObject");
    return (UPropertyContainerTestObject*)res;
}
