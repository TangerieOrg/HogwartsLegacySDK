#include "UObject.hpp"
#include "UTextPropertyTestObject.hpp"
UTextPropertyTestObject* UTextPropertyTestObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextPropertyTestObject");
    return (UTextPropertyTestObject*)res;
}
