#include "UObject.hpp"
#include "UObjectReferencer.hpp"
UObjectReferencer* UObjectReferencer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ObjectReferencer");
    return (UObjectReferencer*)res;
}
