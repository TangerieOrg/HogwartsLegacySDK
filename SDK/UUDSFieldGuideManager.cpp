#include "UObject.hpp"
#include "UUDSActivityManager.hpp"
#include "UUDSFieldGuideManager.hpp"
#include "UUDSManager.hpp"
UUDSFieldGuideManager* UUDSFieldGuideManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UDSFieldGuideManager");
    return (UUDSFieldGuideManager*)res;
}
