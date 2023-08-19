#include "UCrowdManagerBase.hpp"
#include "USocialDisplayManager.hpp"
USocialDisplayManager* USocialDisplayManager::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialDisplayManager");
    return (USocialDisplayManager*)res;
}
