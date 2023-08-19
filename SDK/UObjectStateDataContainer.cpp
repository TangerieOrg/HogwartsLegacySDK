#include "FObjectStateData.hpp"
#include "UObjectStateDataContainer.hpp"
#include "UObjectStateDataContainerBase.hpp"
UObjectStateDataContainer* UObjectStateDataContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectStateDataContainer");
    return (UObjectStateDataContainer*)res;
}
