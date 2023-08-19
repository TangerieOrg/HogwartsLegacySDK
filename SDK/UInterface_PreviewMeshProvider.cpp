#include "UInterface.hpp"
#include "UInterface_PreviewMeshProvider.hpp"
UInterface_PreviewMeshProvider* UInterface_PreviewMeshProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Interface_PreviewMeshProvider");
    return (UInterface_PreviewMeshProvider*)res;
}
