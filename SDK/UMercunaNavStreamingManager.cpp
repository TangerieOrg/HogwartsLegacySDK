#include "UMercunaNavStreamingManager.hpp"
#include "UObject.hpp"
UMercunaNavStreamingManager* UMercunaNavStreamingManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavStreamingManager");
    return (UMercunaNavStreamingManager*)res;
}
