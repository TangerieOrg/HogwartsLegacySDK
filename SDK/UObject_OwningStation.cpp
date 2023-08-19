#include "UActorProvider.hpp"
#include "UObject_OwningStation.hpp"
UObject_OwningStation* UObject_OwningStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Object_OwningStation");
    return (UObject_OwningStation*)res;
}
