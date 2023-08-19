#include "UInterface.hpp"
#include "UObject.hpp"
UInterface* UInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Interface");
    return (UInterface*)res;
}
