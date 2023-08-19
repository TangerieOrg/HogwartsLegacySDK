#include "UObject.hpp"
#include "UUDSActivityManager.hpp"
#include "UUDSManager.hpp"
UUDSActivityManager* UUDSActivityManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UDSActivityManager");
    return (UUDSActivityManager*)res;
}
