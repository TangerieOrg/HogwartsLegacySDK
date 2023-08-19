#include "UInterface.hpp"
#include "UNavPathObserverInterface.hpp"
UNavPathObserverInterface* UNavPathObserverInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavPathObserverInterface");
    return (UNavPathObserverInterface*)res;
}
