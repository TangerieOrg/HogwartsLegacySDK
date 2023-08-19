#include "FNamedInterface.hpp"
#include "FNamedInterfaceDef.hpp"
#include "UNamedInterfaces.hpp"
#include "UObject.hpp"
UNamedInterfaces* UNamedInterfaces::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystem.NamedInterfaces");
    return (UNamedInterfaces*)res;
}
