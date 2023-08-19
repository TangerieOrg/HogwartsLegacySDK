#include "UDelegateFunction.hpp"
#include "USparseDelegateFunction.hpp"
USparseDelegateFunction* USparseDelegateFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.SparseDelegateFunction");
    return (USparseDelegateFunction*)res;
}
