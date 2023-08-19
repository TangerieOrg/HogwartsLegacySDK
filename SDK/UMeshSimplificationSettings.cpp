#include "UDeveloperSettings.hpp"
#include "UMeshSimplificationSettings.hpp"
UMeshSimplificationSettings* UMeshSimplificationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MeshSimplificationSettings");
    return (UMeshSimplificationSettings*)res;
}
