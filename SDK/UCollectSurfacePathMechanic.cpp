#include "UCollectSurfacePathMechanic.hpp"
#include "UInteractionMechanic.hpp"
UCollectSurfacePathMechanic* UCollectSurfacePathMechanic::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.CollectSurfacePathMechanic");
    return (UCollectSurfacePathMechanic*)res;
}
