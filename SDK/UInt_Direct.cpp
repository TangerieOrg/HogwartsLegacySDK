#include "UIntProvider.hpp"
#include "UInt_Direct.hpp"
UInt_Direct* UInt_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Int_Direct");
    return (UInt_Direct*)res;
}
