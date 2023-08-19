#include "UBoolProvider.hpp"
#include "UIntProvider.hpp"
#include "UInt_Conditional.hpp"
UInt_Conditional* UInt_Conditional::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Int_Conditional");
    return (UInt_Conditional*)res;
}
