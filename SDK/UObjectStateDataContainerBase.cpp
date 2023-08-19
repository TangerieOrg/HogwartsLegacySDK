#include "UObject.hpp"
#include "UObjectStateDataContainerBase.hpp"
UObjectStateDataContainerBase* UObjectStateDataContainerBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectStateDataContainerBase");
    return (UObjectStateDataContainerBase*)res;
}
