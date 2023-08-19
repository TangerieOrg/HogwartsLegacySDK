#include "UMultiFX2_Base.hpp"
#include "UObject.hpp"
UMultiFX2_Base* UMultiFX2_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.MultiFX2_Base");
    return (UMultiFX2_Base*)res;
}
