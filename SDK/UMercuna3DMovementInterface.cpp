#include "UInterface.hpp"
#include "UMercuna3DMovementInterface.hpp"
UMercuna3DMovementInterface* UMercuna3DMovementInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna3DMovement.Mercuna3DMovementInterface");
    return (UMercuna3DMovementInterface*)res;
}
