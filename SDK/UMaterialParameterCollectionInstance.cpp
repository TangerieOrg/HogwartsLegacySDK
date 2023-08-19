#include "UMaterialParameterCollection.hpp"
#include "UMaterialParameterCollectionInstance.hpp"
#include "UObject.hpp"
UMaterialParameterCollectionInstance* UMaterialParameterCollectionInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialParameterCollectionInstance");
    return (UMaterialParameterCollectionInstance*)res;
}
