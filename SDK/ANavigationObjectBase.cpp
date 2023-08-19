#include "AActor.hpp"
#include "ANavigationObjectBase.hpp"
#include "UBillboardComponent.hpp"
#include "UCapsuleComponent.hpp"
ANavigationObjectBase* ANavigationObjectBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavigationObjectBase");
    return (ANavigationObjectBase*)res;
}
