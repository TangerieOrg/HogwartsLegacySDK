#include "FBipedStateData.hpp"
#include "UBipedStateDataContainer.hpp"
#include "UObjectStateDataContainerBase.hpp"
UBipedStateDataContainer* UBipedStateDataContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BipedStateDataContainer");
    return (UBipedStateDataContainer*)res;
}
