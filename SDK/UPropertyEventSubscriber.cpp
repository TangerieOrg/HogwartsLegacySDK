#include "UInterface.hpp"
#include "UPropertyEventSubscriber.hpp"
UPropertyEventSubscriber* UPropertyEventSubscriber::StaticClass() {
    static auto res = find_uobject("Class /Script/PropertyAccess.PropertyEventSubscriber");
    return (UPropertyEventSubscriber*)res;
}
