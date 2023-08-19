#include "UObject.hpp"
#include "UPackageMap.hpp"
UPackageMap* UPackageMap::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.PackageMap");
    return (UPackageMap*)res;
}
