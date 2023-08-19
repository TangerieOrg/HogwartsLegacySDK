#include "UNavigationSystemBase.hpp"
#include "UObject.hpp"
UNavigationSystemBase* UNavigationSystemBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavigationSystemBase");
    return (UNavigationSystemBase*)res;
}
