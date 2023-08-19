#include "UMaterialSwapInfoObjectBase.hpp"
#include "UObject.hpp"
UMaterialSwapInfoObjectBase* UMaterialSwapInfoObjectBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapInfoObjectBase");
    return (UMaterialSwapInfoObjectBase*)res;
}
