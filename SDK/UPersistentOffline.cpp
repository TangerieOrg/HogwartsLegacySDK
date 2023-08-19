#include "UPersistentOffline.hpp"
#include "USaveGame.hpp"
UPersistentOffline* UPersistentOffline::StaticClass() {
    static auto res = find_uobject("Class /Script/PersistentData.PersistentOffline");
    return (UPersistentOffline*)res;
}
