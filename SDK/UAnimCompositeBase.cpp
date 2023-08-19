#include "UAnimCompositeBase.hpp"
#include "UAnimSequenceBase.hpp"
UAnimCompositeBase* UAnimCompositeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCompositeBase");
    return (UAnimCompositeBase*)res;
}
