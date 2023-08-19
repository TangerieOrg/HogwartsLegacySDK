#include "UObject.hpp"
#include "UPackage.hpp"
UPackage* UPackage::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Package");
    return (UPackage*)res;
}
