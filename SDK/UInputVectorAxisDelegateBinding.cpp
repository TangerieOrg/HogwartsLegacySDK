#include "UInputAxisKeyDelegateBinding.hpp"
#include "UInputVectorAxisDelegateBinding.hpp"
UInputVectorAxisDelegateBinding* UInputVectorAxisDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputVectorAxisDelegateBinding");
    return (UInputVectorAxisDelegateBinding*)res;
}
