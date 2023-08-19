#include "UMultiFX2_NiagraPropertyBase.hpp"
#include "UObject.hpp"
UMultiFX2_NiagraPropertyBase* UMultiFX2_NiagraPropertyBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraPropertyBase");
    return (UMultiFX2_NiagraPropertyBase*)res;
}
