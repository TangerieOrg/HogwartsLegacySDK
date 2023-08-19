#include "UObject.hpp"
#include "UUDSManager.hpp"
#include "UUDSMechanicManager.hpp"
UUDSMechanicManager* UUDSMechanicManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UDSMechanicManager");
    return (UUDSMechanicManager*)res;
}
