#include "AActor.hpp"
#include "AContainer.hpp"
#include "AWorldObject.hpp"
#include "FDatabaseLockList.hpp"
#include "FStatList.hpp"
#include "FTransform.hpp"
#include "UPadlockComponent.hpp"
AContainer* AContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Container");
    return (AContainer*)res;
}
