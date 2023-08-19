#include "UInterface.hpp"
#include "UNetworkPredictionInterface.hpp"
UNetworkPredictionInterface* UNetworkPredictionInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NetworkPredictionInterface");
    return (UNetworkPredictionInterface*)res;
}
