#include "UPackageMap.hpp"
#include "UPackageMapClient.hpp"
UPackageMapClient* UPackageMapClient::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PackageMapClient");
    return (UPackageMapClient*)res;
}
