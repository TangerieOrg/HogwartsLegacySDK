#include "FMaterialSwapInfoInPlaceMIDs.hpp"
#include "UMaterialSwapInfoInPlaceMIDsObject.hpp"
#include "UMaterialSwapInfoObject.hpp"
UMaterialSwapInfoInPlaceMIDsObject* UMaterialSwapInfoInPlaceMIDsObject::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapInfoInPlaceMIDsObject");
    return (UMaterialSwapInfoInPlaceMIDsObject*)res;
}
