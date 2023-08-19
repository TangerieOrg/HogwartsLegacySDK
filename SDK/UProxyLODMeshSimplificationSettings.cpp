#include "UDeveloperSettings.hpp"
#include "UProxyLODMeshSimplificationSettings.hpp"
UProxyLODMeshSimplificationSettings* UProxyLODMeshSimplificationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ProxyLODMeshSimplificationSettings");
    return (UProxyLODMeshSimplificationSettings*)res;
}
