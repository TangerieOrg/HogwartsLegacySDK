#include "UJsonUtilitiesDummyObject.hpp"
#include "UObject.hpp"
UJsonUtilitiesDummyObject* UJsonUtilitiesDummyObject::StaticClass() {
    static auto res = find_uobject("Class /Script/JsonUtilities.JsonUtilitiesDummyObject");
    return (UJsonUtilitiesDummyObject*)res;
}
