#include "UMapFXBase.hpp"
#include "UObject.hpp"
UMapFXBase* UMapFXBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapFXBase");
    return (UMapFXBase*)res;
}
