#include "FCollectionScalarParameter.hpp"
#include "FCollectionVectorParameter.hpp"
#include "FGuid.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UObject.hpp"
UMaterialParameterCollection* UMaterialParameterCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialParameterCollection");
    return (UMaterialParameterCollection*)res;
}
